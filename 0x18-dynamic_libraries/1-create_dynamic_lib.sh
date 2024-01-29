#!/bin/bash

all_c=$(ls *.c)

gcc -fPIC -shared -o liball.so $all_c
