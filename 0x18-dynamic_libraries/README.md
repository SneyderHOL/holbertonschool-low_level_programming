# Project 0x18 C Dynamic libraries

Project containing severall programs using dynamic libraries in C

Concepts:

    What is a dynamic library, how does it work, how to create one, and how to use it
    What is the environment variable $LD_LIBRARY_PATH and how to use it
    What are the differences between static and shared libraries
    Basic usage nm, ldd, ldconfig


Describing each program:

libholberton.so, dynamic library containing function in holberton.h header file.

1-create_dynamic_lib.sh is a script that creates a dynamic library called liball.so from all the .c files that are in the current directory.

100-operations.so dynamic library that contains C functions that can be called from Python.

101-make_me_win.sh is a script that modify the program gm.
