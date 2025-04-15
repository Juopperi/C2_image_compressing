# 设置基础镜像
ARG UBUNTU_VERSION=22.04
ARG IMAGE=ubuntu:$UBUNTU_VERSION
FROM $IMAGE

# 工作目录
WORKDIR /app

# 环境设置
ENV DEBIAN_FRONTEND=noninteractive

# 安装通用工具
RUN apt-get update && apt upgrade -y && \
    apt-get install -y \
    build-essential \
    gcc \
    g++ \
    clang \
    cmake \
    make \
    libssl-dev \
    pkg-config \
    curl \
    wget \
    tree \
    tmux \
    nano \
    micro \
    vim \
    zip \
    unzip \
    python3 \
    gtkwave \
    python3-pip \
    && rm -rf /var/lib/apt/lists/*

ENV SYSTEMC_VERSION=3.0.1
ENV SYSTEMC_HOME=/opt/systemc-${SYSTEMC_VERSION}
ENV LD_LIBRARY_PATH=$SYSTEMC_HOME/lib-linux64:$LD_LIBRARY_PATH
ENV CPLUS_INCLUDE_PATH=$SYSTEMC_HOME/include

RUN cd /opt && \
    wget https://github.com/accellera-official/systemc/archive/refs/tags/${SYSTEMC_VERSION}.tar.gz && \
    tar -xvzf ${SYSTEMC_VERSION}.tar.gz && \
    cd systemc-${SYSTEMC_VERSION} && \
    mkdir build && cd build && \
    ../configure --prefix=$SYSTEMC_HOME && \
    make -j$(nproc) && make install && \
    rm -rf /opt/systemc-${SYSTEMC_VERSION}.tar.gz

# 设置默认启动 shell
CMD ["/bin/bash"]
WORKDIR /workspace
