#include <stdio.h>
#include <conio.h>
#define MAX 20

void merge(int *, int, int, int, int);

void MergeSort(int *a, int lower, int upper){
	int mid;
	if(lower<upper){
		mid = (lower+upper)/2;
		MergeSort(a, lower, mid);
		MergeSort(a, mid+1, upper);
		merge(a, lower, mid, mid+1, upper);
	}
}
void merge(int *a, int lb, int lr, int rb, int rr){ //lb= lower index of left sub-array, lr= upper index of left sub-array, rb = lower index of right sub-array, rr= upper index of right sub-array
	int n1, n2, n3, i, c[rr];
	n1 = n3 = lb;
	n2 = rb;
	while((n1<=lr)&&(n2<=rr)){
		if (a[n1]<a[n2])
			c[n3++] = a[n1++];
		else
			c[n3++] = a[n2++];
	}
	if(n1>lr){
		while(n2<=rr)
			c[n3++] = a[n2++];
	}
	else{
		while(n1<=lr)
			c[n3++] = a[n1++];
	}
	for (i = lb; i <= rr; i++)
		a[i] = c[i];
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
	MergeSort(a, 0, n-1);
	printf("\n Sorted array is:\n");
	for (i = 0; i < n; i++)
		printf("%d \t", a[i]);
	return 0;
}