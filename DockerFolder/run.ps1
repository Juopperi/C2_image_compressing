# 启动 XQuartz

# Run in wsl
#docker run --rm -it   -e DISPLAY=$DISPLAY   -v /tmp/.X11-unix:/tmp/.X11-unix   -v "$PWD":/workspace   ysyx-env


# 允许 root/local 连接
#Start-Process "/opt/X11/bin/xhost" -ArgumentList "+local:root"

$env:DISPLAY="host.docker.internal:0.0"

# 当前路径变量
#$localPath = Get-Location

# 启动容器（不要挂 /tmp/.X11-unix，macOS/Windows 不支持）
#docker run -it --rm `
#  -e DISPLAY=host.docker.internal:0 `
#  -v "${localPath}:/workspace" `
#  -w /workspace `
#  verilator-env
docker run --rm -it `
-e DISPLAY=$env:DISPLAY `
-v /tmp/.X11-unix:/tmp/.X11-unix `
-v "${PWD}:/workspace" `
ysyx-env