/* Programmer: Lilly Parham
 * Date: Wednesday, March 31, 2021
 * Program: strcpy.c
 * Course: CSC 3320 System Level Programming
 * Assignment: Lab Assignment 10 - Post Lab
 * Purpose: Write a function about string copy, the strcpy prototype
 * 	    "char* strcpy (char* strDest, const char* strSrc);". Here 
 * 	    strDest is destination string, strSrc is source string. 
 *  1)	Write the function strcpy, don't call C string library. 
 *  2)	Here strcpy can copy strSrc to strDest, but why we use char*
 *  	as the return value of strcpy? 
 */

#include<stdio.h>
#include<stdlib.h>

// strcpy Function: 
char* strcpy (char* strDest, const char* strSrc) // Given source code
{
	int i; // Initializtion of integer i variable

	// Main code that copies the Src string to the Dest string:
	for ( i=0; strSrc[i] != '\0'; ++i)
		strDest[i] = strSrc[i]; // Sets them equal/both contain the same

	strDest[i] = '\0';

	return strDest; // Returning pointer to the Destination string
} // End of strcpy function

// Main Function:
int main()
{
	// Defining variables:
	char src[] = "Apple Bottom Jeans."; // Declaring Src string contents
	char dest[100]; /* Declaring the Destination (dest) string which must
	be large enough to hold the contents of the Source (src) string */
	
	// Print statements to show the outputs/contents of the src & dest str
	printf("Source string: %s\n", src); // Prints the src String
	printf("Original Destination String: %s\n", dest); // Prints dest str
	printf("Original Destination String is empty.\n"); // Explains dest str
	printf("Updated Desintation String (after function executed): %s\n",strcpy(dest,src)); // Prints the updated dest String
	return 0; // Exits program
} // End of Main Function

// End of strcpy.c Code - Lilly Parham Lab 10 OUT
