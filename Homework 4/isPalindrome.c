/* Programmer: Lilly Parham
 * Due Date: Sunday, April 4, 2021
 * Course: CSC 3320 System Level Programming
 * Assignment: Homework 4 Problem 3
 * Purpose: Write a program that reads a message (can be characters, numeric or alphanumeric)
 * and checks whether it is a palindrome (the characters in the message are the same when
 * read from left-to-right or right-to-left). THIS CODE IS FOR STRING CHARACTERS.
 */

#include<stdio.h>
#include<string.h>

// checkpalindrome Function
int checkpalindrome(char *str)
{
	int i, n, count=0; // Interger variables including counter to calculate string length
	n=strlen(str);
	
	for(i=0; i<n/2; i++)
        {
                if(str[i]==str[n-i-1]) // Compares if the elements are true if so:
                count++; // Iterates count variable
        }
        
	if(count==i)
                return 1;
        else
        	return 0;

} // End of checkplaindrome Function

int main() // Main Function
{
	char str[1000];	// Defines str as characters w/ 1000 limit (plenty of space)
	
	printf("Enter the string: \n"); // Requests user for input
	scanf("%s", str); // Scans user input under str
	
	if(checkpalindrome(str)) // Runs checkPalindrome function & if true: 
 
		printf("Congrations, %s is a Palindrome!\n", str); // Tells user true

	else // Otherwise

		printf("Sorry, %s is NOT a Palindrome!\n", str); // Tells user false

} // End of Main Function
// End of isPlaindrome.c code - Lilly Parham
