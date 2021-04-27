#!/bin/bash
#Lilly Parham
#Question 4 on Midterm 1
#4.Build a phone-book utility that allows you to access and modify an alphabetical
#list of names, addresses and telephone numbers.
#Use utilities such as awk and sed, to maintain and edit the file of phone-book
#information.
#The user (in this case, you) must be able to read, edit, and delete the phone
#book contents.
#The permissions for the phone book database must be such that it is inaccessible
#to anybody other than the user.

#Greet User for pretty & polite greeting with a description of the code's purpose.
echo "Hello "$USER" ! Thank you for using the Phone Book Utility! The purpose of the PhoneBook Utility is to be able to maintain, edit, and delete phone book information. Enjoy!"

while true; 
do
#Asks user if they want to add a contact a person to their contact list and reads
#the response. Answer must be in y(yes)/n(no) format.
read -p  "Do you want to add a person to your contact list? (y/n)" RESP

#If the user replies they want to add a person to their contact list:
if [[ $RESP = y ]];
   #The first parts of this shell script adds a contact to the PhoneBook.txt file,
   #while updating the new sorted list of the contacts in the file.
   then
	#Adding contacts to the Phone Book:
	#Asks user to provide the first and last name of the contact needed to be
	#added to the Phone Book
	echo "Please enter the first and last name of the new contact:"
	#Stores the contact name in the name variable and reads it
	read name
	#Asks user to provide the corresponding address of the new contact:
	echo "Please enter the corresponding address of $name:"
	read address
	#Asks user to provide the corresponding phone number of the new contact:
	echo "Please enter the corresponding phone number of $name:"
	read phonenumber

	#Stores the information into the PhoneBook.txt file:
	echo "$name;$address;$phonenumber" >> PhoneBook.txt

	#Sorts all the names in the PhoneBook in alphabetical order and writes
 	#the result to the file instead of standard output.
	sort PhoneBook.txt -o PhoneBook.txt

	#Displays goodbye greeting to User & confirms that the person's contact
	#has been created in the PhoneBook.txt
	echo "Congrats on making a new friend "$USER"! You have added $name to your contact list!"
	
#Otherwise
else
 
   #If the user inputs the letter representing no, meaning they do not want to add
   #someone to the PhoneBook list, we assume they must want to do something else so:
   if [[ $RESP = n ]];

	#This is the second portion of the code that signifies a contact being
	#deleted from the PhoneBook.txt file.
	then
	#Asks for user input to see if the user wants to delete someone from their
	#contact list and reads the input from the user:
	read -p "Do you want to delete a person from your contact list? (y/n)" RESP
	
	#If the user replies y, for yes they want to delete a person from their
	#contact list:
	if [[ $RESP = y ]];
	    then
		#Tell user to enter the name of the contact desired to be deleted:
       		echo "Please enter the first and last name of the contact you wish to delete:"
		read name
        
		#Delete the line in the PhoneBook.txt file containing the name the
		#user entered to be deleted, because that deletes the contact:
		sed -i "/$name/d" /home/lparham2/Midterm1/PhoneBook.txt
		#Tells the user a personalized congratulations, with a sign of relief.
		echo "Congrats on deleting your contact $name! You didn't need them anyways!"
	#Otherwise
	else
		#Tells user goodbye to signify the utility has completed its tasks:
		echo "Goodbye!"
 		exit
    fi
   fi
  fi
done
exit 0
