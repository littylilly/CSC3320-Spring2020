/* Programmer: Lilly Parham
 * Program: Midterm 2 Problem 1
 * Course: CSC 3320 System Level Programming
 * Date: Thursday, April 5, 2021
 * Purpose: 1.	Consider the array given below. Write a C program that must be able to sort the elements in the array. You must use pointers in your code to work with the arrays. The sort functionality must be implemented as a separate function named “sort_numeric()”
 * 	Array for your evaluation
 * 	[10, 0.25, -2342, 12123, 3.145435, 6, 6, 5.999, -2, -5, -109.56]
 * 	If given user input A or a: sort in Ascending order
 * 	If given user input D or d: sort in Descending order
 */

#include<stdio.h>

// Sort Functionality:
void sort_ascending(int n, int* arr){
	//
	int i,j; 
	int temp;
	for(i = 0 ; i < n; i++){
		for(j = i + 1; j < n; j++){
			if(*(arr + j) > *(arr + i)){	
				temp = *(arr + i);
				*(arr + i) = *(arr + j);
				*(arr + j) = temp; }
			} // End of Inner For Loop
		} // End of Outer For Loop
	for(i=0; i < n; i++)
		printf("%d", *(arr + i));
} // End of Sort Ascending

void sort_descending(int n, int* arr){
	//
	int i,j;
	int temp;
	for(i = 0 ; i < n; i++){
		for(j = i + 1; j < n; j++){
			if(*(arr + j) < *(arr + i)){
				temp = *(arr + i);
				*(arr + i) = *(arr + j);
				*(arr + j) = temp;}
			} // End of Inner For Loop
		} // End of Outer Loop
	for(i=0; i < n; i++) 
                printf("%d", *(arr + i));
} // End of Else Loop - Sorting in Descending Order

// Main Function:
int main(){
	int n = 11;
	int arr[] = {10, 0.25, -2342, 12123, 3.145435, 6, 6, 5.999, -2, -5, -109.56};
	printf("Hello! Thankyou for using the Sorting Program!\n");
	printf("The Original Array is 10, 0.25, -2342, 12123, 3.145435, 6, 6, 5.999, -2, -5, -109.56\n");	
	char ch;
	printf("Enter A or a to sort in Ascending Order OR d or D to sort in Descending Order\n");
	scanf("%c", &ch);

	if(ch == 'A' || 'a'){
		sort_ascending(n,arr);}
	else if(ch == 'D' || 'd'){
		sort_descending(n,arr);}
	
	return 0;
} // End of the Main Function

// End of M2P1.c Code - Lilly Parham
