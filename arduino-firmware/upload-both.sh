#!/bin/sh

set -e

SERIALDEV=/dev/ttyACM0 make upload
SERIALDEV=/dev/ttyACM1 make upload
