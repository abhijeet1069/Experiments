#!/bin/sh

# Author : Abhijeet Kushwaha
# Date Created : 30th Dec 2022, Friday

# Build binary
cc -std=c99 -Wall -ledit prompt.c -o prompt

#Execute Binary
./prompt

#Remove binary post execution
rm prompt