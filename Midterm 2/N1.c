#include <stdio.h>
#define MAX_SIZE 100

void inputArray(float * arr, float size);
void printArray(float * arr, float size);

float sortAscending(float * num1, float * num2);
float sortDescending(float * num1, float * num2);

void sort(float * arr, float size, float (* compare)(float *, float *));



float main()
{
    float arr[MAX_SIZE];
    float size;

 printf("Enter array size: ");
    scanf("%d", &size);
    printf("Enter elements in array: ");
    inputArray(arr, size);


    printf("\n\nElements before sorting: ");
    printArray(arr, size);

 printf("\n\nArray in ascending order: ");
    sort(arr, size, sortAscending);
    printArray(arr, size);

  printf("\nArray in descending order: ");
    sort(arr, size, sortDescending);
    printArray(arr, size);

    
    return 0;
}

void inputArray(float * arr, float size)
{
    float * arrEnd = (arr + size - 1);
    while(arr <= arrEnd)
        scanf("%d", arr++);
}

void printArray(float * arr, float size)
{
	float * arrEnd = (arr + size - 1);
   while(arr <= arrEnd)
        printf("%d, ", *(arr++));
}

float sortAscending(float * num1, float * num2)
{
    return (*num1) - (*num2);
}

float sortDescending(float * num1, floatt * num2)
{
    return (*num2) - (*num1);
}

void sort(float * arr, float size, float (* compare)(float *, float *))
{
	 float * arrEnd  = (arr + size - 1);
	 float * curElem = arr;
 	 float * elemToSort;

	    while(curElem <= arrEnd)
    {
        elemToSort = curElem;

	 while(elemToSort <= arrEnd)
        {
	
	  if(compare(curElem, elemToSort) > 0)
            {
                *curElem    ^= *elemToSort;
                *elemToSort ^= *curElem;
                *curElem    ^= *elemToSort;
            }

            elemToSort++;
        }

 curElem++;
    }
}






