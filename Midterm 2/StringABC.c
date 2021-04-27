/* Programmer: Lilly Parham
 *  Program: Midterm 2 Problem 2
 *  Course: CSC 3320 System Level Programming
 *  Date: Thursday, April 5, 2021
 *  Purpose: 2.	Consider the list of names given below. Write a C program that will first create a string array that will contain this list and then sort the elements in the array as per alphabetical order. You must use pointers in your code to work with the arrays. The sort functionality must be implemented as a separate function named “sort_alphabetic()”. The program can be case insensitive (i.e. capital or small letters are treated the same). 
 *  List for your evaluation:
 *  Systems
 *  Programming
 *  Deep
 *  Learning
 *  Internet
 *  Things
 *  Robotics Course
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static int comparator(const void* str1, const void* str2) {
 
  	if(strcmp(*(const char**)str1, *(const char**)str2) >= 0)
      		return 1;
   	else 	
		return 0;
}

// Main Function:
int main() {
	int i; 
	// Pre-Defined Array List:  
	const char* arr[] = {"Systems", "Programming", "Deep", "Learning", "Internet", "Things", "Robotics", "Course"};
   	int n = sizeof(arr) / sizeof(arr[0]); // Calculates number of elements of the array
   	printf("\nOriginal Array List: \n"); // Tells the user what information is being displayed - orignal array
   	for (i = 0; i < n; i++) 
		printf("%s \n", arr[i]); // Prints the original array
      	qsort(arr, n, sizeof(const char*), comparator); // Quick Sort method to sort the array
   		printf("\nSorted Array List: \n"); // Tells the user what infomration is being displayed - ABC sorted array
   	for (i = 0; i < n; i++)
      		printf("%s \n", arr[i]); // Prints the ABC sorted array list
   	return 0; // Exits the Code
} // End of Main Function

// End of StringABC.c Code - Lilly Parham
