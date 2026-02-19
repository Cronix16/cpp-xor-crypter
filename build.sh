#!/bin/bash
echo "Compiling XOR Malware Crypter..."
g++ crypter.cpp -o crypter

if[$? -eq 0]; then
echo "Build successfull! Run with: ./crypter <filename>"
else
echo "Build failed."
fi
