#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
	char str[100];
	printf("\n Enter the input string");
	scanf("%s",&str);
	printf("\n Entered string is %s", str);
	int sum=0;
	for(int i = 0; i< strlen(str); i++)
	{
		if(str[i]>'0' && str[i] < '9')
		{
			sum = sum+str[i]-'0';
		}
	}
	printf("\n sum is %d\n",sum);
	getch();
}
