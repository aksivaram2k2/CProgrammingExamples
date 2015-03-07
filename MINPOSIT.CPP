#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	int a[] = {1,1,1,2,2};
	int asize = sizeof(a)/sizeof(a[0]);
	int i = 0;
	while (i < asize)
	{
		while(a[i]<asize && a[i]>0 && a[i]!=i && a[i]!= a[a[i]])
		{
		       int t = a[a[i]];
		       a[a[i]] = a[i];
		       a[i] = t;
		}
		i++;
	}
	for(i = 0; i < asize; i++)
	{
		if(a[i]!=i)
		{
			printf("\n%d",i);
		}
		printf("%d",asize+1);
	}
	getch();
}