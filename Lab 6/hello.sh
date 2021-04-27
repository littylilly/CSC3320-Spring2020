#!/bin/sh
# Step 1: Greet user
echo 'Hello and welcome to Lab 6 Part 2!'
# Step 2 Contain a comment section w/ your name & date
# Lilly Parham
# lparham2@student.gsu.edu
# Step 3: Print the date
echo "Current date =  $(date)"
# Step 4: Print the number of directories in home
echo "Printing number of directories in home:"
echo */|wc
# Step 5: Print the value of variables PATH, USER & SHELL
echo "Printing PATH variable:"
echo $PATH
echo "Printing USER variable:"
echo $USER
echo "Printing SHELL variable:"
echo $SHELL
# Step 6: Print your disk usage (df)
echo "Printing disk usage"
df;
# Step 7: Print Please could you loan me $25.00?
echo "Please could you loan me "\$"25.00?"
# Step 8: Print if x=2, x*/x=4, x`/2=1
echo "If x=2, x*x=4, x/2=1"
# Step 9: List all the .sh files with c at the beggining of the file name in the current working directory
echo "List all the .sh files with c at the begginging of the file name in the current working directory:"
find $pwd -type f -name "*.sh"|find $pwd -type f -name "c*";
echo "This working directory is Lab 6 and only contains Lab 6 files, none of which begin with c."
# Step 10: Tell the user good bye and the current hour
echo "See you later alliagator!!"
echo "Current hour = $(date +%H)"
#End of Script :)
