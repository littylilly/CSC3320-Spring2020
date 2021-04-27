#!/bin/bash
#Lilly Parham
#Part 2 of Question2 on Midterm 1
#Write a shell script that will find the number of occurrences of a particular keyword typed by the user. Present evidence of your testing with at least 5 trials (different keywords each time)

#Display Hello w/ user name for a pretty greeting 
echo "Hello "$USER" !"
#Prompt for user input of desired keyword that is wanted to be searched and counted for the number of occurences in a specific file, which in this case is the myexamfile.txt
echo "Enter keyword:"
#Code reads the user's input and stores the user's input in a variable keyword
read keyword
#grep command filters basic expressions, the command below also includes a pipeline that displays the word count of the specified keyword in the file
grep -o -i $keyword myexamfile.txt | wc -l;

