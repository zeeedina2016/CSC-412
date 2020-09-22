#!/bin/bash
#created a script that compiles, runs executable and tests out program to see if the right amount of arguments are given.
#compiled program
command gcc prog01.c -o "$1"
#script tested out one argument
command ./"$1"
#script tested out 2 arguments
command ./"$1" one
#script tested out 3 arguments( and succeeded)
command ./"$1" one two
#script tested out 4 arguments
command ./"$1" one two three
#script tested out 5 arguments
command ./"$1" one two three four


