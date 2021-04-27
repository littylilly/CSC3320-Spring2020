/* Programmer: Lilly Parham
 * Date: March 25, 2021, Thursday
 * Due Date: March 26, 2021 Friday 11:59 PM
 * Program: Lab 10 In-Lab CSC 3320: System Level Programming 
 * Purpose: Learn how to use the pointers in a C function. 
 * The following program splitTime.c is used to split a time in seconds into 
 * the equivalent time in hours (0-23), minutes (0-59), and seconds (0-59),
 * respectively. But it is incomplete. Please complete the program.
 *
 * My code specifically requests a positive integer within int range and then
 * converts such into the requested format. If the number is not within the 
 * desired range (Ex. The number is negative), the code tells the user the 
 * number is invalid. After the code succesfully executes or provides the user
 * with the "OPERATION FAILED!" message the program asks the user if they would 
 * like to repeat the program or quit it. Until an acceptable Y/y or n/n response
 * is inputted, the code continues to ask the user. 
 *
 * Sample Output:
 * Enter seconds:2345 
 * Converted format 0 hour 39 mins 5 secs 
 * Enter seconds:3601 
 * Converted format 1 hour 0 mins 1 secs
 */

// Start of Code:
#include<stdio.h> 

// Write the declaration of function split_time
void split_time(long, int*, int*, int*);

// Main:
int main() {
	int n, hr, min, sec, b; // Defining our variables of the integer data type
	char ch; // Defining character variable named ch

	print: // Print loop
	printf("\nPlease, input the number of seconds: "); // Requests User input
	scanf("%d", &n); // Scans user input
	
	// Desired Case:
	if(n > 0 && n <  2147483647) { // If the user inputs a postive integer value within the int range
	
		// Write the statement to call split_time
		split_time(n, &hr, &min, &sec); 
		// Write the corresponding expressions --> hr, min, sec
		// Prints the converted format of the seconds inputted by the user
		printf("\nThe converted format is: %d hours %d mins %d secs\n", hr, min, sec);

	} // End of if --> If this is true, then the code completes the time conversion

	// Else the user enters anything other than the desired case/range of numbers accepted
	else {	
		// Tells  user to reenter their input to a postive value: 
		printf("\nOPERATION FAILED! You need to input a postive number between 0 and 2147483647.\n");
	} // End of else

	again: // Again loop 
	// Asks user if they want to repear the program:
	printf("\nDo you wish to repeat the program?\nEnter Y for YES or N for NO:\n");
	scanf(" %c", &ch); // Scans user input

	// If the user wants to repeat the program & entered the correct response to repeat:
	if(ch == 'y' || ch == 'Y'){
		printf("\nRestarting program...\n"); // Tells user program is loading
		goto print; // Restarts program
	}

	// If the user does NOT want to repeat the program & entered the correct response:
	else if(ch == 'n' || ch == 'N'){
		// Program thanks user & quits:
		printf("\nThankyou for using splitTime.c program. Goodbye!\n");
		return 0;
	}

	// If the user enters an invalid input:
	else{
		printf("INVALID INPUT! MUST enter Y or N.\n");
			// Repeats again loop until user enter Y/y or N/n
			goto again;
	}

	return 0; // Returns 0 Exit Code

	} // End of Main

void split_time(long total_sec, int *hr, int *min, int *sec) { // Contains pointers
	// Write the statements to calculate hr, min and sec:
	
	/* Create a new variable to minimize calculation confusion
	   Ex. This variable will get us the seconds remaining after we have
 	   converted the majority of seconds into hours. The remaining
	   seconds will then be converted into minutes. If we didn't create such
	   we could develop an error where the minutes is equivalent to the
	   total seconds rather than remaining.	*/
	int remaining_sec = 0; // Intialize remaining_sec variable to 0

	// Hour Calculation:
	// 1 hour = 3600 seconds
	*hr = (total_sec/3600);
	
	// Caculate remaining seconds we need to convert:
	remaining_sec = total_sec%3600; // % is MOD operator which outputs remainders

	// Minute Caculation:
	// 1 minute = 60 seconds
	*min = (remaining_sec/60);

	// Second Calcuation:
	// MOD operation gives us the remaining seconds
	// Seconds not needed to be converted because we are already using such unit
	*sec = remaining_sec%60;

} // End of split_time class --> This class completes the calculations

// End of Code
