//Queue using Array
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define MAX 5

int CQ[MAX], f= -1, r = -1, num, pos;

void insert(){
	//Check for overflow
	if((f == 0 && r == MAX-1) || (f == r+1))
		printf("\nOverflow");
	else if(f == -1){	//Queue is empty
		f = r = 0;
		CQ[r] = num;
		printf("\nInserted %d to queue\n",num);
	}
	else if(r == MAX-1){
		r = 0;
		CQ[r] = num;
		printf("\nInserted %d to queue\n",num);
	}
	else{
		CQ[++r] = num;
		printf("\nInserted %d to CQ\n",num);
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
	else if(f == MAX-1){
		printf("\n %d deleted from CQ", CQ[f]);
		f = 0;
	}
	else
		printf("\n %d deleted from CQ", CQ[f++]);
}


void display(){
	pos = f;
	if(pos == -1)
		printf("\nEmpty CQ");
	else{
		while(pos<=r)
			printf("%d->", CQ[pos++]);
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