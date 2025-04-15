#docker run -it --rm   -v "$PWD:/workspace"   -w /workspace   systemc-dev

xhost +local:root
docker run --rm -it \
    -e DISPLAY="$DISPLAY" \
    -v /tmp/.X11-unix:/tmp/.X11-unix \
    -v "$PWD":/workspace \
    systemc-dev
