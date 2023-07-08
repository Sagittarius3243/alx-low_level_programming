#!/bin/bash

# Compile all .c files into .o object files
gcc -c *.c

# Create the static library liball.a
ar rcs liball.a *.o

# List the contents of the static library
ar -t liball.a
