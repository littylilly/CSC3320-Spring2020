include<stdio.h>
#define N 11 

void sort(float *, int);
void main() {
	float a[N], *p;
	printf("Enter the 11 values in the array.");
	for(p = a; p < a + N; p++) {
		scanf("%f", p) }
	sort(a,N);
	printf( " Sorted samll to large: ");
		for(p=a;p<a+N;printf("%-3.f",*p++)); 
}
void sort(float *s,int n)
{
	float *i,*j,t;
	for(i=s;i<s+n;i++)
	{
		for(j=i+1;j<s+n;*i>*j?t=*i,*i=*j,*j=t,j++:j++);
	}
}
