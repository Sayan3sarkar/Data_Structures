//Queue using Array
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define MAX 5

int queue[MAX], f= -1, r = -1, num, pos;

void insert(){
	//Check for overflow
	if(r == MAX-1)
		printf("\nOverflow");
	else if(r == -1){
		f = r = 0;
		queue[r] = num;
		printf("\nInserted %d to queue\n",num);
	}
	else{
		queue[++r] = num;
		printf("\nInserted %d to queue\n",num);
	}
}

void del(){
	//Check for underflow
	if(f == -1)
		printf("\nUnderflow");
	else if(f==r){
		printf("\n %d deleted from CQ", CQ[f]);
		f = r = -1;
	}
	else
		printf("\n %d deleted from queue", queue[f++]);
}

void display(){
	pos = f;
	if(pos == -1)
		printf("\nEmpty queue");
	else{
		while(pos<=r)
			printf("%d->", queue[pos++]);
	}
}

int main()
{
	int ch,n;
	char opt;
	do
	{
		printf("\nPress 1 to insert to queue.\nPress 2 to delete from queue.\nPress 3 to view queue.\nPress any other key to exit.\nEnter your choice:");
		scanf("%d",&ch);
		switch(ch){
			case 1:
				printf("\nEnter number to be inserted: ");
				scanf("%d",&num);
				insert();
				break;
			case 2:
				del();
				break;
			case 3:
				printf("\nUpdated Queue:\n");
				display();
				break;
			default:
				exit(1);
		}
		printf("\nDo you want to continue(y/n?):");
		opt = getch();
	}while(opt=='y'||opt=='Y');
	return 0;
}