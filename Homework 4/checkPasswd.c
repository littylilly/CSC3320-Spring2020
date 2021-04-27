/* Programmer: Lilly Parham
 * Due Date: Sunday, April 4, 2021
 * Course: CSC 3320 System Level Programming
 * Assignment: Homework 4 Problem 1
 * Purpose: Write a C program checkPasswd.c to check if the length of a given password string is 
 * 10 characters or not. If not, deduct 5 points per missing character. If the total deduction is
 * greater than 30 points, print out the deduction and message "The password is unsafe! Please
 * reset."; otherwise, print out "The password is safe.
 */

#include<stdio.h>

int main() // Main
{
	printf("Hello!\nThankyou for using checkPasswd.c program!\n"); // User greeting
	char ch[100]; // Define character named ch w/ a mamixmum of 100 characters
	printf("Enter your password: "); // Tells user to input a password
	int count = 0; // Initializes count to 0 so we can determine the user's password length

// Do loop:
do {
	ch = getchar(); // Reads the characters
	count ++; // Increments the count

   } // End of do loop

while( ch != '\n');
	int score = -(10 - count + 1) * 5; // Score calculation
	printf("Score = %d\n", score); // Prints the score of the password entered by the user

if(score < -30) // If the total deductions is greater than 30 points, print out the the deduction 
	printf("Your password is unsafe! Please reset your password!\n"); // & print the password is unsafe

else // Otherwise...
	printf("Great! Your password is safe!\n"); // Print out the password is save

return 0;
} // End of Main Function
// End of checkPasswd.c code - Lilly Parham
