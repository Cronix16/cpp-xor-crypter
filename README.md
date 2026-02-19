# XOR Malware Crypter
- A beginner-friendly offensive security tool written in C++ to demonstrate payload obfuscation and Antivirus evasion.

# Overview
- I originally built a 'Static Malware Scanner' to hunt for malicious byte signatures. However, it can be easily bypassed, so I built this 'XOR Crypter' to prove it.
- This tool reads a target file into a dynamic memory vector and applies a bitwise XOR operation using a secret key. This scrambles the payload, making it completely invisible to my 'Static Scanner', while allowing the malware to easily decrypt itself during runtime.

# How to run it
1. Run: './build.sh'.
2. Encrypt a file: './crypter <filename>'. Or use the 'malware.txt' file in the 'Static Scanner' i built.
3. Run the 'Static Scanner' against the output file to see how it successfully evaded it.
