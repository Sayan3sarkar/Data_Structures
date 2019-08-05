//Stack using Array
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define MAX 5

int stack[MAX], top=-1, pos, num;

void push(){
	//Check for overflow
	if(top == MAX-1)
		printf("\nOverflow\n");
	else if(top == -1){
		top = 0;
		stack[top] = num;
		printf("\n %d pushed\n", num);
	}
	else{
		stack[++top] = num;
		printf("\n %d pushed\n", num);
	}
}

void pop(){
	//Check for underflow
	if(top == -1)
		printf("\nUnderflow");
	else if(top == 0){
		printf("\nElement deleted: %d\n", stack[top]);
		top = -1;
	}
	else
		printf("\nElement deleted: %d\n", stack[top--]);
}

void display(){
	pos = top;
	if(pos == -1)
		printf("\nEmpty Stack");
	else{
		while(pos>=0)
			printf("%d->",stack[pos--]);
	}
}
int main()
{
	int ch,n;
	char opt;
	do
	{
		printf("\nPress 1 to push to stack.\nPress 2 to pop from stack.\nPress 3 to view stack.\nPress any other key to exit.\nEnter your choice:");
		scanf("%d",&ch);
		switch(ch){
			case 1:
				printf("\nEnter number to be pushed: ");
				scanf("%d",&num);
				push();
				break;
			case 2:
				pop();
				break;
			case 3:
				printf("\nUpdated Stack:\n");
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