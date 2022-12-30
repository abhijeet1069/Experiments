#!/bin/sh

# Author : Abhijeet Kushwaha
# Date Created : 30th Dec 2022, Friday

# Build binary
cc -std=c99 -Wall hello-world.c -o hello-world

#Execute Binary
./hello-world

#Remove binary post execution
rm hello-world