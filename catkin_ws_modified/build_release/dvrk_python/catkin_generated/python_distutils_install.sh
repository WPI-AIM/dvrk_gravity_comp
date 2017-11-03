#!/bin/sh

if [ -n "$DESTDIR" ] ; then
    case $DESTDIR in
        /*) # ok
            ;;
        *)
            /bin/echo "DESTDIR argument must be absolute... "
            /bin/echo "otherwise python's distutils will bork things."
            exit 1
    esac
    DESTDIR_ARG="--root=$DESTDIR"
fi

echo_and_run() { echo "+ $@" ; "$@" ; }

echo_and_run cd "/home/davincic2/catkin_ws/src/dvrk-ros/dvrk_python"

# snsure that Python install destination exists
echo_and_run mkdir -p "$DESTDIR/home/davincic2/catkin_ws/install_release/lib/python2.7/dist-packages"

# Note that PYTHONPATH is pulled from the environment to support installing
# into one location when some dependencies were installed in another
# location, #123.
echo_and_run /usr/bin/env \
    PYTHONPATH="/home/davincic2/catkin_ws/install_release/lib/python2.7/dist-packages:/home/davincic2/catkin_ws/build_release/dvrk_python/lib/python2.7/dist-packages:$PYTHONPATH" \
    CATKIN_BINARY_DIR="/home/davincic2/catkin_ws/build_release/dvrk_python" \
    "/usr/bin/python" \
    "/home/davincic2/catkin_ws/src/dvrk-ros/dvrk_python/setup.py" \
    build --build-base "/home/davincic2/catkin_ws/build_release/dvrk_python" \
    install \
    $DESTDIR_ARG \
    --install-layout=deb --prefix="/home/davincic2/catkin_ws/install_release" --install-scripts="/home/davincic2/catkin_ws/install_release/bin"
