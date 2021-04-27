/* Programmer: Lilly Parham
 * Due Date: Sunday, April 4, 2021
 * Course: CSC 3320 System Level Programming
 * Assignment: Homework 4 Problem 5
 * Purpose: 5.	Write a program that asks the user to enter an international dialing 
 * code and then looks it up in the country_codes array (see Sec 16.3 in C textbook).
 * If it finds the code, the program should display the name of the corresponding
 * country; if not, the program should print an error message. For demonstration
 * purposes have at least 20 countries in your list.
 * (Programming Project 1 on pg412 in C textbook)
 */

#include<stdio.h>

struct countryCode{
	char*country;
	int code; };

// Main Function:
int main(int argc, char* argv[]) {
	int intlcode, i; // Declaring varibales
	const struct countryCode countryCodes[] = {
	{"Argentina",  54}, {"Bangladesh",        880},
        {"Brazil",     55}, {"Burma (Myanmar)",    95},
        {"China",      86}, {"Colombia",           57},
        {"Congo,Dem.",243}, {"Egypt",              20},
        {"Ethiopia",  251}, {"France",             33},
        {"Germany",    49}, {"India",              91},
        {"Indonesia",  62}, {"Iran",               98},
        {"Italy",      39}, {"Japan",              81},
        {"Mexico",     52}, {"Nigeria",           234},
        {"Pakistan",   92}, {"Philippines",        63},
        {"Poland",     48}, {"Russia",              7}
        }; // End of country codes being defined, 22 total
	
	int entries = sizeof(countryCodes) / sizeof(*countryCodes);
	
	printf("Hello! Welcome to countryCodes.c!\n"); // Greet user

	// Do loop:
	do {
	int found = 0; // Initializing variable
	printf("Please input the international code(or type -1 to exit): \n"); // Requests user input
	scanf("%d", &intlcode); // Scans user input & saves it to intlcode
	
	if(intlcode == -1) // If user types -1, they want to exit
	break; // If the user enters -1 that means they want to exit the program, so do such

	for(i = 0; i < entries; i++) {
		if(countryCodes[i].code == intlcode) {
		printf("The country is: %s\n", countryCodes[i].country);
		found = 1;
	} // End of inner if loop
      } // End of for loop
	if(!found) // If the code not located
	printf("Sorry, the code you enetered was not found.\n"); // Tell user code N/A
      } // End of do loop
	while(1);
	return 0; // Exit
   } // End of Main Function
// End of countryCodes.c - Lilly Parham 
