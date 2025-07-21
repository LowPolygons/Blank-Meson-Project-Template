#!/bin/bash

meson setup --wipe build --buildtype="debug"
meson test -C build
