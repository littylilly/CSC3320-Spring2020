#!/bin/bash
#Lilly Parham
#Part 2 of Question 1 on Midterm 1
#Write a shell script helpme.sh that will ask the user to type in a command
#Prompt user for command input:
echo "Enter a command"
#Read user's input:
read cmd_in
#and then print the manual's text associated with that corresponding command
if
	grep -q $cmd_in mandatabase.txt;
then
	grep $cmd_in mandatabase.txt;
#If the command the user types is not in the database then the script must print Sorry, I cannot help you.
else
	echo "Sorry, I cannot help you." 
fi
#End of shell script
