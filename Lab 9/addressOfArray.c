// Main Function:
#include <stdio.h>
int main()
{
// Initialize an array of ints
int numbers[5] = {1,2,3,4,5};
int i=0;

// Print the address of the array variable
printf("numbers = %p\n", numbers);

// Print addresses of each array index 
do {
	printf("numbers[%u] = %p\n", i, (void *)(&numbers[i]));
	i++;
} while (i<5);

// Print the size of the array
printf("sizeof(numbers) = %lu\n", sizeof(numbers));
printf("lengthof(numbers) = %lu\n", sizeof(numbers)/sizeof(numbers[0]));
}
