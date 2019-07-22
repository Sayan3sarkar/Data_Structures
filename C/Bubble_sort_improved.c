#include <stdio.h>
#include <conio.h>
#define MAX 20

void BubbleSortImproved(int *a, int n){/* If there's no swapping of elements in one iteration,
										  there will be no swapping of those elements in consecutive iterations.
										  This enhances performance, significantly*/
	int i=1,j,temp,flag=1;
	while  ((i < n) && flag)
	{
		flag = 0;
		for(j = 0; j< n-i; j++)
		{
			if(a[j]>a[j+1])
			{
				flag = 1;
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
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
	BubbleSortImproved(a, n);
	printf("\n Sorted array is:\n");
	for (i = 0; i < n; i++)
		printf("%d \t", a[i]);
	return 0;
}