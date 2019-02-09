#include <stdio.h>
#include<string.h>
int main(void) 
{
	char str1[50],str2[50];
	int num1,num2;
	printf("enter the string1:");
	scanf("%s",str1);
	printf("enter the string2:");
	scanf("%s",str2);
	num1=strlen(str1);
	num2=strlen(str2);
	if(num1>num2)
	{
		printf("\n%s",str1);
	}
	else if(num2>num1)
	{
		printf("\n%s",str2);
	}
	else
	{
		printf("\n %s",str2);
	}
	return 0;
}
