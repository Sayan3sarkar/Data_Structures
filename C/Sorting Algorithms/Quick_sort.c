#include <stdio.h>
#include <conio.h>
#define MAX 20

int split(int *, int, int);

void QuickSort(int *a, int lower, int upper){
	int i;
	if(lower<upper){
		i = split(a, lower, upper);
		QuickSort(a, lower, i-1);
		QuickSort(a, i+1, upper);
	}
}

int split(int *a, int lower, int upper){
	int p,q,pivot,temp;
	pivot = a[lower];
	p = lower+1;
	q = upper;
	while(p <= q){
		while(a[p] < pivot)
			p++;
		while(a[q] > pivot)
			q--;
		if(p<q){
			temp = a[p];
			a[p] = a[q];
			a[q] = temp;
		}
	}
	temp = a[lower];
	a[lower] = a[q];
	a[q] = temp;
	return q;
}
int main()
{
	int i,n, a[MAX];
	while(1)
	{
		printf("Enter the size of array:");
		scanf("%d",&n);
		if(n>=1 && n<=MAX)
			break;
		else
			printf("\n Size of array must be positive and within 20. Please Enter again by pressing any key.");
			getch();
			continue;
	}
	//printf("Hello");
	printf("\n Enter array elements:");
	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);
	printf("\n Unsorted array is:\n");
	for (i = 0; i < n; i++)
		printf("%d \t", a[i]);
	QuickSort(a, 0, n-1);
	printf("\n Sorted array is:\n");
	for (i = 0; i < n; i++)
		printf("%d \t", a[i]);
	return 0;
}