#include<stdio.h>
void main()
{
	int num1,num,i;
	scanf("%d%d",&num,&num1);
	for(i=num;i<=num1;i++)
	{
		if(i%2==0)
		{
			printf("%d ",i);
		}
	}
}
