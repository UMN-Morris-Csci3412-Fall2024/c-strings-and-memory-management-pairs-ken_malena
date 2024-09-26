#!/bin/bash

# Compile all .cpp files in the current directory
gcc -Wall -g -o palindrome palindrome.c main.c

# Check if the compilation was successful
if [ $? -eq 0 ]; then
    echo "Compilation successful."
else
    echo "Compilation failed."
    exit 1
fi