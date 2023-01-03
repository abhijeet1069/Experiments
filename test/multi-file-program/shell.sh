#!/bin/sh

# Build binary
cc -std=c99 -Wall hello.c fun.c -o hello

#Execute Binary
./hello

#Remove binary post execution
rm hello