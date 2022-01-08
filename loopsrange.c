#include<stdio.h>
void main()
{
	int num1,num2,i;
	printf("enter two numbers");
	scanf("%d%d",&num1,&num2);
	i=num1;
	while(i<num2)
	{
		printf("%d ",i);
		i++;
	}
}
