#include<stdio.h>

int main()
{
	char name,branch,hobbies;
	int regd_no;
	
	printf("Enter your name:");
	scanf("%s",&name);
	printf("Enter your regd no.:");
	scanf("%d",&regd_no);
	printf("Enter your branch:");
	scanf("%s",&branch);
	printf("Enter your hobbies:");
	scanf("%s",&hobbies);
	
	printf("Name is %s\n Regd no. is %d\n Branch is %s\n Hobby is %s",name,regd_no,branch,hobbies);
	
	return 0;
}
