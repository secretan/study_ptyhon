#!/bin/sh

mips-linux-gnu-gcc sdl_test.c -o sdl_test -I/home/ham/osdprj/sdl/SDL2-2.0.4/out_cross/test/../include -L/home/ham/osdprj/sdl/SDL2-2.0.4/out_cross/test/../lib -lSDL2
cp sdl_test /home/share/ham/

