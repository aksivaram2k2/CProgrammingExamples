#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char a[100] = "test is a space";
	char b[100] = "";
	int j = 0;
	for(int i =0; a[i]!= '\0';i++)
	{
		if(a[i] ==  ' ')
		{
		  b[j++] = '%';
		  b[j++] = '2';
		  b[j++] = '0';
		}
		else
		{
		  b[j++] = a[i];
		}
	}
	b[j] = '\0';
	printf("New string is %s",b);
	getch();
}