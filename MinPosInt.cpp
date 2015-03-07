/**
 * Given an unsorted integer array, find the first missing positive integer.
 * For example,
 *   [1, 2, 0] return 3.
 *   [3, 4, -1, 1] return 2.
 *   [-1, -2, 1, 4] return 2.
 *   [-1, 1, 4, 3, 6] return 2.
 *   [-2, 3, 6] return 1.

 First Input them all in a[20] - Store data
 Get User Input data - Assuming its less than 20 elements
 Sort these elements to know the sequence
 check from min onwards by increment 
 if nothing found then add 1 and it is next missing
 if it finds something within sorted range then first one would be our answer
 Need to be fixed for case  
 **/
 
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    int a[20], n, i, j, temp, min, tempinput, count = 0;
    printf("\n Enter number of elements");
    scanf("%d",&n);
    printf("Enter the number of elements %d\n",n);
    for(i =0; i < n; i++)
    {
        printf("Enter element %d\n",i);
        scanf("%d",&tempinput);
        if(tempinput > 0)
        {
            a[count] = tempinput;
            count++;
        }    
    }
    
    for(i = 0; i < count; i++)
    {
        for(j = i+1; j < count; j++)
         {
               if(a[i]>a[j])
               {
                   temp = a[i];
                   a[i] = a[j];
                   a[j] = temp;      
               }
         }
    }   

	//After Sort Remove Duplicates, This ensures postion is valid
	//This step need to be added
	
    if(min > 1)
    {
          printf("Missing element is 1");
          break;
    }
    for(i=1; i< n; i++)
    {
        if((a[i] == min+1)))
        {
            //its correct
            min = min+1;
        }
        else
        {
            printf("Missing element is %d", min+1);
            break;
        }
    }
    printf("Missing element is %d", min);
    getch();
}
