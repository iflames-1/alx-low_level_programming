#!/bin/bash
gcc -fPIC -c GM/test.c

gcc -shared -o libtest.so test.o
