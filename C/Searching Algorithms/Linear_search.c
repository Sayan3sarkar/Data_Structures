#include <stdio.h>
#include <conio.h>
#define MAX 20

int Linear_Search(int a[], int n, int item){
	int i;
	for(i = 0; i < n; i++){
		if(a[i] == item)
			return i;
	}
	return -1;
}

int main()
{
	int i,n, a[MAX],item, pos;
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
	printf("\nArray Elements are:\n");
	for (i = 0; i < n; i++)
		printf("%d \t", a[i]);
	printf("\nEnter number to be searched:");
	scanf("%d", &item);
	pos = Linear_Search(a, n, item);
	if(pos == -1)
		printf("\n%d is not present in array", item);
	else
		printf("\n%d is present at postion %d of array", item, pos+1);
}