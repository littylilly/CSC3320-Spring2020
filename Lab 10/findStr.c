/* Programmer: Lilly Parham
 * Date: Wednesday, March 31, 2021
 * Program: findStr.c
 * Course: CSC 3320 System Level Programming 
 * Assignment: Lab Assignment 10 - Post Lab Part 2
 * Purpose: Write a program findStr.c that finds the "smallest" and "largest"
 * in a series of words. After the user enters the words, the program will
 * determine which words would come first and last if the words were listed 
 * in dictionary order. The program must stop accepting input when the user 
 * enters a four-letter word. Assume that no word is more than 20 letters long.
 * An interactive session with the program might look like this: 
 * 	Enter word: dog 
 *	Enter word: zebra 
 *	Enter word: rabbit 
 *	Enter word: catfish 
 *	Enter word: walrus 
 *	Enter word: cat
 *	Enter word: fish 
 *	Smallest word: cat 	
 *	Largest word: zebra 
 * Hint: Use two strings named smallest_word and largest_word to keep track
 * of the "smallest" and "largest" words entered so far. Each time the user
 * enters a new word, use strcmp to compare it with smallest_word; if the 
 * new word is "smaller", use strcpy to save it in smallest_word. Do a 
 * similar comparison with largest_word. Use strlen to determine when the 
 * user has entered a four-letter word. 
*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

// Main Function:
int main()
{
	// Defining variables
	// Instructed to use a word no longer than 20 letters, we input 21 for a null character
	char input[21], smallest_word[21], largest_word[21];
	
	// Code greets user hello! :
	printf(" Hello ! Thank you for using findStr.c ! Let's begin!\n");
	// Requests user input for a word
	printf("Enter word: ");
	// Scans users input storing it in the variable input
	scanf("%s", input);
	// Saves first word entered as the smallest word
	strcpy(smallest_word, input);
	// Saves first word entered as the largest word
	strcpy(largest_word, input);

	// While loop that executes as long as a four letter word is NOT entered
	// If (strlen(input)==4) the while loop breaks;
	while(strlen(input)!=4)
	{
		// If the new input is smaller than the smallest word
		if (strcmp(input,smallest_word)<0)
		// Then copy the new input as the new smallest word
		strcpy(smallest_word,input);

		// Otherwise if the new input is larger than the largest word
		else if (strcmp(input,largest_word)>0)
		// The copy the new input as the new largest word
		strcpy(largest_word,input);

		printf("Enter Word: "); // Asks user for more words
		scanf("%s",input); // Scans the new input to continue the loop

	} // End of while loop

	// Prints the smallest word:
	printf("Smallest word: %s\n", smallest_word);
	// Prints the largest word:
	printf("Largest word: %s\n", largest_word);
	// Goodbye greeting:
	printf("Goodbye! Thank you for using findStr.c !\n");
	return 0; // Exits function
} // End of Main Function
// End of findStr.c code Lab 10 Out Part 2 - Lilly Parham
	
