#include<stdio.h>
#include<stdlib.h>
struct st{
	int data;
	struct st *link;
};
struct st * add_first(struct st *ptr)
{
	struct st *newnode=NULL;
	newnode=malloc(sizeof(struct st));
	if(newnode==NULL)
	{
		printf("node not created\n");
	}
	else
	{
		printf("enter the data\n");
		scanf("%d",&newnode->data);
		newnode->link=NULL;
		newnode->link=ptr;
		ptr=newnode;
	}
	return ptr;
}
void display(struct st *ptr)
{
	if(ptr==NULL)
	{
		printf("list is empty\n");
	}
	else 
	{
		while(ptr)
		{
			printf("%d\n",ptr->data);
			ptr=ptr->link;
		}
	}
}
int main()
{
	struct st *head=NULL;
	int choice;
	while(1)
	{
		printf("1.add_first 2.display 3.exit\n");
		printf("enter ur choice\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:head=add_first(head);
			       break;
			case 2:display(head);
			       break;
			case 3:exit(0);
		}
	}
}			       
