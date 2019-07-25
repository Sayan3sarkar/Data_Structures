#include <stdio.h>
#include <conio.h>
#define MAX 20

void heapify(int *a, int n, int i){
	int largest, l, r, temp;
	largest = i; //largest is root
	l = 2*i +1; //left child
	r= 2*i +2; //right child

	//If left child is larger than root
	if((l<n) && (a[l]>a[largest]))
		largest = l;

	//If right child is larger than root
	if((r<n) && (a[r]>a[largest]))
		largest = r;

	//If largest is not root
	if(largest != i){
		temp = a[i];
		a[i] = a[largest];
		a[largest] = temp;

		heapify(a, n, largest);//Subtree is heapified
	}
}

void HeapSort(int *a, int n){
	//Build heap
	int i, temp;
	for(i = (n/2)-1; i>=0; i--)
		heapify(a, n, i);

	//One by one element extraction from heap
	for(i=n-1;i>=0;i--){
		//move current root to last
		temp = a[0];
		a[0] = a[i];
		a[i] = temp;

		//max heapify reduced heap
		heapify(a, i, 0);
	}
}

int main()
{
	int i,n, size, a[MAX];
	while(1)
	{
		printf("Enter the size of array:");
		scanf("%d",&size);
		if(size>=1 && size<=MAX)
			break;
		else
			printf("\n Size of array must be positive and within 20. Please Enter again by pressing any key.");
			getch();
			continue;
	}
	printf("\n Enter array elements:");
	for (i = 0; i < size; i++)
		scanf("%d", &a[i]);
	printf("\n Unsorted array is:\n");
	for (i = 0; i < size; i++)
		printf("%d \t", a[i]);
	HeapSort(a, size);
	printf("\n Sorted array is:\n");
	for (i = 0; i < size; i++)
		printf("%d \t", a[i]);
	return 0;
}