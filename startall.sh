#!/usr/bin/env bash

bash /apollo/scripts/bootstrap.sh
supervisorctl start canbus control gps localization perception planning prediction routing
bash /apollo/scripts/velodyne.sh
bash /apollo/scripts/usb_camera.sh
