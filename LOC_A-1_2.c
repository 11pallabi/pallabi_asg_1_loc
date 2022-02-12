#include<stdio.h>
int main()
{
	int num1,num2;
	printf("Enter the value of num1 and num2:");
	scanf("%d %d",&num1,&num2);
	if(num1>num2)
	{
		printf("num1 is maximum");
	}
	else
	{
		printf("num2 is maximum");
	}
	return 0;
}
