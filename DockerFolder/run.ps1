# ============================================
# PowerShell Script to Start Docker Container
# for ysyx-env with GUI (X11 forwarding)
# ============================================

# 设置 DISPLAY 环境变量（Windows/macOS Docker Desktop）
$env:DISPLAY = "host.docker.internal:0.0"

# 允许 XQuartz 或 VcXsrv 接受本地连接
# (如果你需要的话，Windows下一般不需要xhost)

# 获取当前工作目录
$localPath = Get-Location

# 启动 Docker 容器
docker run --rm -it `
  -e DISPLAY=$env:DISPLAY `
  -v /tmp/.X11-unix:/tmp/.X11-unix `
  -v "${localPath}:/workspace" `
  -w /workspace `
  ysyx-env

# ============================================
# 说明：
# - DISPLAY 指向 host.docker.internal:0.0
# - /tmp/.X11-unix 共享（macOS 必须，Windows 有时不需要）
# - 当前工作目录挂载到容器内 /workspace
# - 使用 ysyx-env 镜像
# ============================================
