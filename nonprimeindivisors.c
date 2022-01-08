#include<stdio.h>
void main()
{
	int i,num,count=0,num1;
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		if(num%i==0)
		{
		num1=i;
		}
	}
	printf("%d",num1);
}
