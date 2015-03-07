#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	int a[20], i, pos, item,n;
	printf("Enter number of elements\n");
	scanf("%d",&n);
	printf("Number of Elements is %d\n",n);
	printf("Input Elements\n");
	for(i=0; i<n;i++)
	{
		printf("Enter element %d\n",i);
		scanf("%d",&a[i]);
	}
	printf("Enter Element to insert \n");
	scanf("%d",&item);
	pos=0;
	i=0;
	while(a[i]<item && i <n)
	{
		pos++;
		i++;
	}
	printf("Position to insert is %d",pos);
	for(i = n; i >= pos; i--)
	{
	   a[i+1] = a[i];
	}
	a[pos] = -1;
	printf("The modified array is \n");
	for(i=0; i < n+1; i++)
	{
		printf("Element is %d\n",a[i]);
	}
	for(i =0; i < n+1; i++)
	{
		if(a[i] == -1)
		{
			a[i] = item;
		}
	}
	printf("Results \n");
	for(i=0; i < n+1; i++)
	{
		printf("%d\n",a[i]);
	}
	getch();

}