FROM ubuntu:22.04

ENV DEBIAN_FRONTEND=noninteractive

RUN apt-get update && apt-get install -y \
    build-essential \
    git \
    curl \
    wget \
    ca-certificates \
    libfl2 \
    libfl-dev \
    zlib1g-dev \
    help2man \
    autoconf \
    automake \
    libtool \
    g++ \
    python3 \
    python3-pip \
    make \
    sudo \
    micro \
    gtkwave \
    cmake \
    pkg-config \
    flex \
    bison \
    ccache \
    x11-apps \
    gdb \
    libreadline-dev \
    vim \
    tmux && \
    apt-get clean && \
    rm -rf /var/lib/apt/lists/*

# 安装 verilator（推荐版本 5.008）
WORKDIR /opt
RUN git clone https://github.com/verilator/verilator.git && \
    cd verilator && \
    autoconf && \
    ./configure && \
    make -j$(nproc) && \
    make install

ENV VERILATOR_ROOT=/usr/local/share/verilator
ENV PATH="$PATH:/usr/local/bin"

WORKDIR /workspace
COPY .vimrc /root/.vimrc

CMD ["/bin/bash"]
