#include<stdio.h>
int main()
{
	float num1,num2,Result;
	int ch;
	printf("Enter the first and second number respectively:");
	scanf("%f%f",&num1,&num2);
	printf("Select any option\n 1)Addition\n 2)Substraction\n 3)Multiplication\n 4)Division");
	printf("\n Enter choice:");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			Result=num1+num2;
			printf("Addition of the numbers is %f",Result);
			break;
		case 2:
			Result=num1-num2;
			printf("Substraction of the numbers is %f",Result);
			break;
		case 3:
			Result=num1*num2;
			printf("Multiplication of the numbers is %f",Result);
			break;
		case 4:
			Result=num1/num2;
			printf("Division of the numbers is %f",Result);
			break;
	}
	return 0;
}
