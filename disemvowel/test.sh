#!/bin/bash

# Run the compiled output
g++ -Wall -g -o disemvowel_test disemvowel.c disemvowel_test.cpp -lgtest -pthread -std=c++0x

# Check if the execution was successful
if [ $? -eq 0 ]; then
    echo "Test Compiled."
else
    echo "Test compile failed."
    exit 1
fi