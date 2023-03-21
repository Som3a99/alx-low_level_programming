#!/bin/bash
wget -P /tmp https://github.com/Som3a99/alx-low_level_programming/tree/master/0x18-dynamic_libraries/random_check.so
export LD_PRELOAD=/tmp/random_check.so
