#include<stdio.h>

void swap(int *val1, int *val2);
void printArray(int *array, int size);

int main() { // Main Function
	int *array;
	int type;
	int i,j, size;

	printf("Enter the size of the array you wish to sort: ");
	scanf("%d", &size);

	for(i = 0; i < size; i++) {
		printf("Enter element %d: ", (i + 1));
		scanf("%d", (array + i)); }
        
	printf("The original array is: ");
	printArray(array,size);
	
	printf("Enter 1 to sort in increasing order and 0 in decreasi");
	scanf("%d", &type);
	
	for (i = 0; i < size; i++){
		for (j = i + 1; j < size; j++){
        		if (type == 1){
				if (*(array + j) < *(array + i)) {
                    			swap((array + i), (array + j)); }
			}
			else {
				if(*(array + j) > *(array + i)) {
					swap((array + i), (array + j)); }
			}
		}
	} // End of Outer For Loop

	printf( "Sorted array: ");
	printArray(array,size);
	return 0; }

void swap( int *val1, int *val2){
	int temp = *val1;
	*val1 = *val2;
	*val2 = temp;}

void printArray( int *array, int size){
	int i;
	printf("[ ");
	for( i=0; i< size; i++) {
		printf("%d ", *(array + i));}
	printf("]\n"); }

