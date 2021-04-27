/* Programmer: Lilly Parham
 * Program: Midterm 2 Problem 1
 * Course: CSC 3320 System Level Programming
 * Date: Thursday, April 5, 2021
 * Purpose: Consider the array given below. Write a C program that must be able to sort the elements in the array. You must use pointers in your code to work with the arrays. The sort functionality must be implemented as a separate function named “sort_numeric()”
 *         Array for your evaluation
 *         [10, 0.25, -2342, 12123, 3.145435, 6, 6, 5.999, -2, -5, -109.56]
 *         If given user input A or a: sort in Ascending order
 *         If given user input D or d: sort in Descending order
 */

#include<stdio.h>

void swap_float(float *a, float *b) {  // swap_float Function swaps 2 elements using pointers
       
	float t = *a;
        *a = *b;
        *b = t; }

void sort_numeric(float *a, float ch) {  // sort_numeric Function sorts the elements in the array

	// Declare varibales:
        int i, j;
 	int size = 11; // Defines our array to be length of 11 elements

	// For loop to iterate through each element
 	for(i = 0; i < size; i++) {
        	for(j = 1; j < size - i;j++) {
   			if((*(a + j - 1)) > (*(a + j)) && (ch== 'A' || ch == 'a')) // Sorts in ascending order
                		swap_float( (a + j - 1), (a + j) );
			else if(( *(a + j - 1)) < (*(a + j)) && (ch == 'D' || ch == 'd')) // Sorts in descending order
                		swap_float( (a + j - 1), (a + j) ); }
        } // End of Outer  For Loop
} // End of sort_numeric Function

// Main Function:
int main() {
	// Defines the array we want to sort:
	float arr[11]={10, 0.25, -2342.0, 12123, 3.145435, 6, 6, 5.999, -2, -5, -109.56};
	printf("Hello! Welcome to PM2.c - To sort a float array Program!"); // Greet User
    	printf("To sort in Ascending Order, Input A or a\n");
    	printf("To sort in Descending Order, Input D or d\n"); // Tells user to input based on sort preference
    	char ch;
    	scanf("%c",&ch); // Scan user input & store in ch variable
    	sort_numeric(arr,ch); // Calls the sort numeric function
    	printf("The sorted function is:\n");
    	int i;

    	for(i=0;i<11;i++)
        	printf("%1f",arr[i]); // Prints the sorted array 
} // End of Main Function

// End of PM2.c Code - Lilly Parham
