#!/usr/bin/env bash

supervisorctl stop all
supervisorctl shutdown
bash /apollo/scripts/velodyne.sh stop
bash /apollo/scripts/usb_camera.sh stop
rosnode kill -a
killall -9 roscore
killall -9 rosmaster


