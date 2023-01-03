#!/bin/sh

# Author : Abhijeet Kushwaha
# Date Created : 30th Dec 2022, Friday

# Build binary
cc -std=c99 -Wall ../../mpc/mpc.c parsing.c -ledit -lm -o parsing

#Execute Binary
./parsing

#Remove binary post execution
rm parsing