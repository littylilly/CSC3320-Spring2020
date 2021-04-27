#include<stdio.h>

main()
{
int i,n,a,j;
float temp=0.0f;

float a[11] = {10, 0.25, -2342, 12123, 3.145435, 6, 6, 5.999, -2, -5, -109.56};

printf("\n Hello! Welcome to the Sort Program! \n");

printf("\n The array list before sorting is:  \n");

for(i= 0; i<n; i++) 
{
    printf("%.2f  ", a[i]);
}

printf("\n");

printf("\n\nElement After Sorting \n\n");

for(i=0;i<n;i++)
{
    for(j=0;j<n-i-1;j++)
    {
        if(a[j]>a[j+1])
        {
            temp=a[j+1];
            a[j+1]=a[j];
            a[j]=temp;
        }
    }
}

// Print the Program Output: 
for(i= 0; i< 11; i++) 
{
    printf("%.2f  ", a[i]);    }
    printf("\n\n");    }
