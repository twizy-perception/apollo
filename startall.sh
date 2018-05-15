#!/usr/bin/env bash

bash /apollo/scripts/bootstrap.sh
supervisorctl start canbus control gps usb_camera velodyne localization perception planning prediction routing 
source /apollo/ros/devel/setup.bash
#rosrun security twizySecurity&
