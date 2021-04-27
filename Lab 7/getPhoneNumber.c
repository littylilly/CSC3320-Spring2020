#include <stdio.h>
// Lilly Parham
// Lab 7 #1

int main (void)
 {
   int i, j; //Setting integer variables 
   // i - number of elements in the string
   // arr contains the user input
   // phone contains the new string being translated
   char arr[13], phone[12];
   printf("Enter phone number [(999)999-9999]: ");
   scanf ("%s", arr); //Scans and reads the user input
   j = 0; // Setting intial values

   for (i = 0; i < 13; i++)
      {
	  // If
          if (arr[i] != '(' && arr[i] != ')')  
                {
		    // Set them equal to each other
                    phone[j]=arr[i];
		    // Iterate i
                    j++; 
                } // End of if loop
	  // If we have a closing parethesis, then we insert a hyphen
          else if (arr[i] == ')')
                {      
		     phone[j]='-';
		     // Iterate j
      		     j++;                                                                       } // End of else if loop
        } // End of for loop
   // Displays the user input modified to the new format:
   printf("You entered %s\n", phone);
   return 0;
} //End of main
