/* Programmer: Lilly Parham
 * Due Date: Sunday, April 4, 2021
 * Course: CSC 3320 System Level Programming
 * Assignment: Homework 4 Problem 2
 * Purpose: 2.	Similar to above question, update the C program checkPasswd.c to check if a 
 * password is safe or by not by checking only the evaluation criteria below. It will still
 * print out the final score, and "safe" or "unsafe" when deduction is more than 30 points.
 * 	● Missing lower case 				      -20 points
 * 	● Lack of capital letters 	    	              -20 points
 * 	● Missing numbers 				      -20 points
 * 	● More than 2 consecutive characters (e.g. 123 or abc)  -20 points
 */

#include<stdio.h>
#include<string.h>
#include<ctype.h>

void checkpass(char *pass);

int main() // Main Function
{

	printf("Hello!\n Thankyou for using the UPDATED newcheckPasswd.c program!\n"); // User greeting

	char str[100];
	int i = 0;	 
	printf("Please, Enter your password: \n"); // Requests user input
	scanf("%s", str); // Reads user input & stores in ch
	checkpass(str); // Calls scorelength function
	return 0; //exit
} // End of Main Method

void checkpass(char *pass){

	// Declare variables: 
	int pts  = 0; // Declares decremented score variable
	int upper = 0; // Variable to test for capital letters in the string
	int lower = 0; // Variable to test for lowercase letters in the string
	int digit = 0; // Variable to test for numbers in the string
	int cons = 0; // Varibale for consecutive characrers in the string
	int len = strlen(pass);

	int i =0;
	// For loop that iterates through each character
	for (int i = 0; pass[i] != 0; i++) {

		// If loop - If character is capital or a digit
		if (islower(pass[i])) {
		// Increment lower case variable because it is not present
			lower = 1; 
			} // End of lower case if loop

		// If loop - If character is lowercase or a digit  
		if (isupper(pass[i])) {
		// Increment upper case variable because a capital letter is not present
			upper = 1;
			} // End of upper case if loop

		// If loop - If character is not a digit
		if (isdigit(pass[i])) {
			digit = 1;
			}

		if ( i + 2 < len && pass[i+1] - pass[i] == 1 && pass[i+2] - pass[i+1] == 1) {
			cons = 1;
 } }
if (lower == 0) {
pts += 20;
}
if (upper == 0) {
pts += 20;
}
if (digit == 0) {
pts += 20;	
}
if (cons == 0) {
pts += 20;
}
	// Final Outputs:
	if(pts > 30){ // if loop - if the deducted score is more than 30 points, BAD
		printf("Your password is unsafe! Please reset your password\n"); 
	} // End of Unsafe Password if loop

	else{  // Otherwise
        	printf("Great! Your passowrd is safe!\n");
	} // End of Safe Password else
} // End of scorelength Function

// End of newcheckPasswd.c - Lilly Parham
       
