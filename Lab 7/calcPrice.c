#include <stdio.h>
// Lilly Parham
// Lab 7 #2 (Even though still labeled 1
// calcPrice.c

int main()
{
	//Defining variables:
	int item; // Variable item = item number, stored as an integer
	int quantity; // Variable quantity means how many purchased
	double price; // Price is per item, stored as a double for decimals
	char date[12]; // Date of purchase, stored as a character

	//Requesting user input:
	printf("Please enter the item number: "); //Requests the item number
	scanf("%d", &item); //Reads the user input & stores in item variable
	printf("Please enter the unit price $: "); //Requests the unit price of the item
	scanf("%lf", &price); //Reads the user input & stores in price variable
	printf("Please enter the item quantity: "); //Requests the item quantity
	scanf("%d", &quantity); //Reads the user input & stores in quantity variable
	printf(" Please enter the date of purchase in this format: MM/DD/YYYY "); //Requests purchase date with formatting requirements
	scanf("%s", &date); //Reads the user inptu & stores it in the date variable

	//Print the data obtained organized:
	printf("Item\tUnit Price\tQTY\tPurchase Date\tTotal Amount\n"); //Headers
	printf("%d\t$%9.2lf\t%d\t%s\t$%9.2lf\n\n", item, price, quantity, date, price * quantity); //Calculates values

	return 0;
} //End of main
// End of Code
