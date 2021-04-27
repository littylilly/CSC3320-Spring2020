#include<stdio.h>
//Lilly Parham
//Code finds the new integer value of an original integer when it is bit-shifted left by 3 bits and adds it to its one complement value.
//Main Function:
main(){
	//Initializing variables
	unsigned int x = 2; // 2 =
	unsigned int y = 3; // 3 =
	int z = 0;

	//Print original vaule:
	printf("Original value is: %d\n", x);

	//Calculating Left Shift
	z = x << 3;
	//Print calculate value of a 3 unit left shift:
	 printf("Bitwise Left Shift Operator x << 2= %d\n", z );

	//One's Compliment Operator
	z = ~x;
	printf("Bitwise One's Complement Operator - ~x = %d\n", z);
	
	//Addition
	z = (x << 3) + ~x;
	printf("Solution is = %d\n", z);

} //End of Main
