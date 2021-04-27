/* Programmer: Lilly Parham
 * Due Date: Sunday, April 4, 2021
 * Course: CSC 3320 System Level Programming
 * Assignment: Homework 4 Problem 4
 * Purpose: Write a program that will swap two variables without the use of any third variable. Utilize this
 * program to write a program that reads two sentences that contain alphanumeric characters and the program 
 * must swap all the numerics in sentence1  with alphabet characters from sentence 2 and vice-versa. Keep the
 *  lengths of the sentences as identical.
 */

#include <stdio.h>

// Swap Function
void Swap(int*v1,int*v2) {
	int temp = *v1;
	*v1 = *v2;
	*v2 = temp;
} // End of Swap Function

int main() // Main Function
{
	// Initializing variables:
	int var1 = 0;
	int var2 = 0;
	
	printf("Enter two variables you wish to swap: \n"); // Asks for user input
	scanf("%d %d", &var1, &var2); // Scans user input saving the data into var1 & var2 

	printf("Before Swapping: x= %d, y=  %d\n", var1, var2); // Prints before swap data

	// Swap var1 and var2:        
	Swap(&var1, &var2); // Calls the Swap function

	printf("After Swapping: x = %d, y = %d\n", var1, var2); // Prints after swap data
                  
	return 0; // Exit

} // End of Main Function
// End of variableswap.c code - Lilly Parham
