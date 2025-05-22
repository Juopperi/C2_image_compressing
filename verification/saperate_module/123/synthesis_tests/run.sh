#!/bin/bash

# 启动 XQuartz（如果尚未启动）
if ! pgrep -x "XQuartz" > /dev/null; then
  echo "Starting XQuartz..."
  open -a XQuartz
  sleep 2  # 等待 XQuartz 完全启动
fi

# 设置允许本地访问 X server（更安全方式）
/opt/X11/bin/xhost +localhost

# 启动 Docker 容器
docker run --rm -it \
  -e DISPLAY=host.docker.internal:0 \
  -v "$PWD":/workspace \
  -v /tmp/.X11-unix:/tmp/.X11-unix \
  ysyx-env
