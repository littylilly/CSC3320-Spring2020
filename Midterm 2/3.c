/* Programmer: Lilly Parham
 * Program: Midterm 2 Problem 2
 * Course: CSC 3320 System Level Programming
 * Date: Thursday, April 5, 2021
 * Purpose: 3.	Repeat Question 1 or Question 2, considering that the number of elements can potentially increase. That is, the size of the array will be unknown at the start of the program. Note that the requirement of using pointers still holds.
 * Show proof of evaluation of your program being able to work for more than 10 entries. Show 5 evaluation trials in your submission. You can pick any number of entries between 10 and 30 for your trials.
 * (Hint: To solve this, use dynamic memory allocation, where you will NOT treat the input array as a known or finite size. Allocate memory space (e.g. malloc()) as and when the number of elements in the list increases). 
 */

#include <stdio.h>

// Sort Function:
void sort_numbers_ascending(int number[], int count)
{
   int temp, i, j, k;
   for (j = 0; j < count; ++j)
   {
      for (k = j + 1; k < count; ++k)
      {
         if (number[j] > number[k])
         {
            temp = number[j];
            number[j] = number[k];
            number[k] = temp;
         }
      }
   }
   printf("Sorted List of Numbers:\n"); // Prints Answer
   for (i = 0; i < count; ++i)
      printf("%d\n", number[i]);
}

// Main Function:
void main()
{
   // Defines variables of integer type
   int i, count, number[20];

   // Requests for user input
   printf("How many numbers do you want to enter?");
   scanf("%d", &count); // Scans user input
   printf("\nEnter the numbers individually");
   
// For Loop iterates through each number
   for (i = 0; i < count; ++i)
      scanf("%d", &number[i]);
 
   sort_numbers_ascending(number, count);
} // End of Main Function
// End of 3.c Code - Lilly Parham
