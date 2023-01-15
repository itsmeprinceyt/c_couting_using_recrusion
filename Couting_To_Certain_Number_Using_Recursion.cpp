#include <stdio.h>
int loop(int,int);
main()
{
	printf("To Print Number Using Recursion~\n\n");
	int i,t;
	printf("From: ");
	scanf("%d",&i);
	printf("To: ");
	scanf("%d",&t);
	printf("\n");
	loop(i,t);
}
int loop(int x,int y)
{
	if(x==y)
	{
		return 1;
	}
	if(x<=y && x!=y)
		printf("%d ",x);
	if(x==(y-1))
	{
		printf("%d",x+1);
	}
	int sum=x+1;
	int z=loop(sum,y);
	return z;
	
}
