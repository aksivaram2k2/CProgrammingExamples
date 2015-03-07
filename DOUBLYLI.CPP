#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct list
{
	struct list *blink;
	struct list *flink;
	int data;
};
typedef struct list LIST;
LIST* add(LIST *);
LIST * display(LIST *);
LIST * del(LIST *);

int main()
{
	LIST *head = NULL;
	int choice;
	clrscr();
	while(1)
	{
		clrscr();
		printf("\n 1.Add a Node");
		printf("\n 2.Delete a Node");
		printf("\n 3. Display a List");
		printf("\n 4.Quit");
		printf("\n Enter the choice");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				head = add(head);
				break;
			case 2:
				head = del(head);
				break;
			case 3:
				head = display(head);
				getch();
				break;
			case 4:
				exit(0);
			default:
				break;
		}
	}
}

LIST *display(LIST *head)
{
	LIST *p;
	p = head;
	if(p == NULL)
	{
		printf("\n No Elements to display");
		return head;
	}
	while(p!=NULL)
	{
		printf("%d",p->data);
		p = p->flink;
	}
	return head;
}
LIST *add(LIST *head)
{
	LIST *p, *t;
	int temp;
	printf("Enter the element");
	scanf("%d",&temp);
	p = head;
	if(p == NULL)
	{
		t = (LIST *)malloc(sizeof(LIST));
		t->data = temp;
		t->flink = NULL;
		t->blink = NULL;
		return t;
	}
	while (p->flink !=NULL && p-> data <=temp)
	{
		p = p->flink;
	}
	if(p->data == temp)
	{
		printf("Element already found ");
		getch();
		return head;
	}
	if(temp < p->data)
	{
		t = (LIST *)malloc(sizeof(LIST));
		t->data = temp;
		t->flink = p;
		t->blink = p->blink;
		p->blink = t;
		t->blink->flink = t;
		if(p == head)
		{
			return t;
		}
		else
		{
			return head;
		}
	}
	if(p->flink ==NULL)
	{
		t = (LIST *)malloc(sizeof(LIST));
		t->data = temp;
		p->flink = t;
		t->blink = p;
		t->flink = NULL;
		return head;
	}
	return head;
}
LIST *del(LIST *head)
{
	LIST *p;
	int temp;
	p = head;
	printf("\n. Enter the element to be deleted");
	scanf("%d",&temp);
	if(p->data ==temp)
	{
		head = p->flink;
		free(p);
		return head;
	}
	while(p!=NULL && p->data < temp)
	{
		p = p-> link;
	}
	if(p == NULL || p->data > temp)
	{
	   printf("\n Element not found");
	}
	if(p->data == temp)
	{
		p->blink->flink = p->flink;
		p->flink->blink = p->blink;
		free(p);

	}
	return head;
}
