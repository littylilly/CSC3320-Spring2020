
#include <stdio.h> 
//Lilly Parham
//Question 5 Part A on Midterm1
//A. Write a C script that will compute the factorial of a given number (positive integer).
//Factorial function:   
unsigned int factorial(unsigned int n) 
{	
     int f; 
     if(n !=1)
	{	
		f =n*factorial(n-1);
	}
 else
	{	
		f=1;
	}
     return f; 
}
//Main function: 
int main() 
{ 
     int num;
     //Code prompts for user input of a positive integer
     printf("Enter a positive integer: ");
     scanf("%d",&num); 
     //Code prints the facotorial of the positive integer inputted in the previous step
     printf("Factorial of %d is %d", num, factorial(num));
     return 0; 
} 
