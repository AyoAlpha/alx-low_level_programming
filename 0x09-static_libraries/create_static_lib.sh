#!/bin/bash
gcc -c *.c
ar -rs  liball.a *.o
ar -t liball.a
