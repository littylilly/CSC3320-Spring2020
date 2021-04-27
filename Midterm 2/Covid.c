/* Programmer: Lilly Parham
 * Program: Midterm 2 Problem 4
 * Course: CSC 3320 System Level Programming
 * Date: Thursday, April 5, 2021
 * Program: Date	of	previous	dose,	Type	of	vaccine	(Pfizer,	Moderna,
 * Johnson&Johnson),  Residential zipcode.
 * Upon registration, the system must output a 8 letter alphanumeric code that will be unique to that user. The code is generated as <First letter of First Name><First Letter of Last Name><current age of user -as of registration date><First letter of Vaccine type><last 3 numbers of zipcode>
 * Add functionality in your program such that it will display all the user’s information on the screen (one item in each line).
 * Show an evaluation trial for registering at least 10 users. For registration, ,for relevant questions, users must choose values based on the options provided (e.g. sex; options must be Male/Female/Do not wish to identify 
 */

#include <stdio.h>
#include <string.h>
#include <time.h>

struct user {
	char firstname[20];
	char lastname[20];
	int dd, mm, yy;
	char sex[20];
	int dose;
	int pdd, pmm, pyy;
	char vaccine[20];
	char zipcode[10]; };

int getage(int pdate, int pmonth, int pyear, int bdate, int bmonth, int byear) {
  	int month[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
   	if (bdate > pdate) {
      	pdate = pdate + month[bmonth - 1];
      	pmonth = pmonth - 1;
  	}
  	if (bmonth > pmonth) {
      	pyear = pyear - 1;
     	pmonth = pmonth + 12;
  	}
   	int final_date = pdate - bdate;
   	int final_month = pmonth - bmonth;
   	int final_year = pyear - byear;
  
   	return final_year;
	} // End of getage

// Main Function:
int main(void) {
 	struct user u1[10]; // 10 user maximum
 	int choice; // Choice variable defined as integer type - often used 1, 2, & 3
	char id[8]; // Our ID's are just 8 characters long
  	char age[2];
	int i;

	for(i = 0; i < 10; i++) { // For Loop iterates through each person, with a maximum of 10
	printf("\nPlease Enter details for %d  :\n", i+1); // Instructs user to enter input
	printf("\nFirst Name : ");
	scanf("%s", u1[i].firstname); // Scans user input & saves user First Name into such variable of the ith iteration
	printf("\nLast Name : "); 
	scanf("%s", u1[i].lastname); // Scans & saves the Last Name same process
	printf("\nDate of Birth (dd/mm/yy) format : ");
	scanf("%d/%d/%d", &u1[i].dd,&u1[i].mm,&u1[i].yy); // Scans & saves birthday

	// Gender preferences:
	printf("Choose sex : \n"); // Instructs user to select the gender option
   	printf("\t1. Male\n");
   	printf("\t2. Female\n");
	printf("\t3. Not Preffered\n Enter choice : ");
   	scanf("%d", &choice); // Saves user input of gender option choice 
  
	// Correlatinf Gender Displays to save to the user id
	if(choice == 1)
     		strcpy(u1[i].sex, "Male");
   	else if(choice == 2)
      		strcpy(u1[i].sex, "Female");
	else if(choice == 3)
		strcpy(u1[i].sex, "Not Preffered");
    	else{
      		printf("Please choose valid sex.\n");
      		return 1;

	} // End of For Loop

	// Determines the Dose Number the Patient is on, if 1 data is saved, if this is the 2nd dose, program requires the user to enter the rpvious dose date
	printf("Enter Dose Number : "); // Requests user input for dose number
    	scanf("%d", &u1[i].dose); // Saves user's dose number
    	if(!(u1[i].dose == 1 || u1[i].dose == 2)){ // User must enter 1 or 2 for their dose number (taken after registration)
      		printf("Please enter valid dose number.\n");
      		return 1;
   	}

    	if(u1[i].dose == 2){
      		printf("Enter Previous Dose Date(mm/dd/yyyy) : ");
      		scanf("%d/%d/%d",&u1[i].dd,&u1[i].mm,&u1[i].yy);  
   	}
	
	// Instructs user input & displays various Vaccine options
	printf("Choose type of vaccine : \n");
    	printf("\t1. Pfizer\n");
    	printf("\t2. Moderna\n");
    	printf("\t3. Johnson&Johnson\n\tEnter choice : ");
    	scanf("%d", &choice); // Scans & saves the user's input to determine the correct vaccine brand to display

	// Saves Vaccine Brand based off correlating user pick of the number choices
    	if(choice == 1)
      		strcpy(u1[i].vaccine, "Pfizer");
    	else if(choice == 2)
      		strcpy(u1[i].vaccine, "Moderna");
    	else if(choice == 3)
      		strcpy(u1[i].vaccine, "Johnson&Johnson");
    	else{
      		printf("Please choose a valid vaccine.\n"); // Means the user did not enter any of the options 1, 2 & 3 listed & they must repeat such and input 1, 2, or 3.
      	return 1;
   	 }

 	printf("Enter Zip Code : ");
    	scanf("%s", u1[i].zipcode);

	// id per 10 maximum entries/ 10 people inputted
	// 8 id digits - meaningful
    	id[0] = u1[i].firstname[0]; // First digit is the first name letter
    	id[1] = u1[i].lastname[0]; // Second digit is first letter of last name

	// Calculates time:
  	time_t t = time(NULL);
    	struct tm tm = *localtime(&t);
 	int ageTemp = getage( tm.tm_mday,tm.tm_mon + 1,tm.tm_year + 1900,u1[i].dd,u1[i].mm,u1[i].yy);
    
   	id[2] = (char)(ageTemp/10+ '0');
    	id[3] = (char)(ageTemp%10+ '0');
	id[4] = u1[i].vaccine[0]; // Digit for vaccine type
    	id[5] = u1[i].zipcode[3]; // Last 3 digiits of zip code
    	id[6] = u1[i].zipcode[4];
    	id[7] = u1[i].zipcode[5];

	// Prints all of the user's information after all the input has been recieved for each i patient:
  	printf("\nFirst Name : %s\n",u1[i].firstname);
    	printf("Last Name : %s\n",u1[i].lastname);
    	printf("Birthdate : %d/%d/%d\n",u1[i].mm,u1[i].dd,u1[i].yy);
    	printf("Sex : %s\n",u1[i].sex);
    	printf("Dose Number : %d\n",u1[i].dose);
    	if(u1[i].dose == 2){
      		printf("Previous Dose Date : %d/%d/%d\n",u1[i].pmm,u1[i].pdd,u1[i].pyy);
   	}
    	printf("Vaccine Brand : %s\n",u1[i].vaccine);
    	printf("Zip : %s\n",u1[i].zipcode);
    	printf("Code : %s\n\n",id);
 	}
	return 0; // Code Exits
 } // End of Main
// End of Covid.c Code - Lilly Parham
