#!/bin/bash
#Lilly Parham
#Problem 4 on Midterm 1
#4.Build a phone-book utility that allows you to access and modify an alphabetical list of names, addresses and telephone numbers. 
#Use utilities such as awk and sed, to maintain and edit the file of phone-book information.
#The user (in this case, you) must be able to read, edit, and delete the phone book contents. 
#The permissions for the phone book database must be such that it is inaccessible to anybody other than the user.

#This specific shell script: DeleteContact.sh , deletes a specific contact from the PhoneBook.txt file.

#Asks user to provide the name of the contact they want to delete
echo "Please enter the name of the contact you wish to delete:" 
read name

sed -i '/$name/d' PhoneBook.txt
