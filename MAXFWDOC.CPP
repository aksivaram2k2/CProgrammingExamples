#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	int a[100];
	printf("Enter the number of elements \n");
	int n;
	scanf("%d",&n);
	for(int i = 0; i < n; i++)
	{
		scanf("%d",&a[i]);
	}
	//Find Max fwd increasing sequence
	int minpos = 0;
	int incsum = 0;
	int minstart =0, minend = 0;
	for(i = 0; i < n; i++)
	{
		for(int j = i+1; j < n; j++)
		{
			if((a[j]-a[i]) > minpos)
			{
			  minstart = i;
			  minend = j;
			  minpos = a[j]-a[i];
			}
		}
	}
	printf("\nlong running sequence is %d startpos",minstart+1);
	printf("\nlong running sequence is %d endpos",minend+1);
	printf("\n sum sequence is %d",minpos);
	getch();
}