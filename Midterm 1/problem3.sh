#!/bin/bash
#Lilly Parham
#Problem 3 on Midterm1
#3.Write a shell script to find files in a directory hierarchy (e.g. your home directory)
#that have not been accessed for N days and compress them.
#Here N is a parameter and the user will be asked for that input as the first step of
#the script execution.

#Ask for user input
echo "Enter the number of days." #User asked for input
#Read the user input and stor it in the variable named N as listed in the instructions
read N #N is a parameter

find /home/lparham2 -iname "*" -atime +$N -type f| zip compress -@
#find command we are searching
#-mtime corresponds with date since last accessed
#$N our parameter for days
# | pipe command
# zip compress @ compresses the files into a zip file
