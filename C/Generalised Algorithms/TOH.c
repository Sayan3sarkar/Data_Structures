//Tower of Hanoi
#include <stdio.h>
#include <conio.h>

void TOH(char a, char b, char c, int n){
	if(n==1)
		printf("%c->%c \n",a,c);
	else{
		TOH(a,c,b,n-1);
		TOH(a,b,c,1);
		TOH(b,a,c,n-1);
	}
}
int main()
{
	int n;
	while(1)
	{
		printf("Enter the number of disks:");
		scanf("%d",&n);
		if(n>=1)
			break;
		else
			printf("\n Number of disks must be positive. Please Enter again by pressing any key.");
			getch();
			continue;
	}
	TOH('A','B','C',n);
	return 0;
}