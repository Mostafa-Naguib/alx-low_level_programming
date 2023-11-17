#!/bin/bash

for file in *.c
do
	gcc -c "$file" -o "${file%.c}.o"
done


for file in *.o
do
	ar rc liball.a "$file"
done

