// malloc()
#include<stdlib.h>
#include<conio.h>
main()
{
	int n,i;
	int *ptr;
	printf("enter the number of integers to be taken:");
	scanf("%d",&n);
	ptr=(int*)malloc(n*sizeof(int));
	printf("enter the numbers");
	for(i=0;i<n;i++)
	{
		scanf("%d",ptr+i);
	}
	printf("numbers:");
	for(i=0;i<n;i++)
	{
		printf("%d \t",*(ptr+i));
	}
	printf("\naddress:");	
	for(i=0;i<n;i++)
	{
		printf("%p \t",ptr+i);
	}
}


//--------------------------------------------//
//  Calloc()
#include<stdlib.h>
#include<conio.h>
main()
{
	int n,i;
	int *ptr;
	printf("enter the number of integers to be taken:");
	scanf("%d",&n);
	ptr=(int*)calloc(n,sizeof(int));
		printf("enter the numbers");
		for(i=0;i<n;i++)
	{
		scanf("%d",ptr+i);
	}
	printf("numbers:");
	for(i=0;i<n;i++)
	{
		printf("%d \t",*(ptr+i));
	}
	printf("\naddress:");	
	for(i=0;i<n;i++)
	{
		printf("%p \t",ptr+i);
	}	
}
//----------------------------------------------------------//
//LINKEDLIST
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct node
{
	int num;
	struct node *ptr;
};
typedef struct node Node;
int main()
{
	Node *head,*last,*temp=0,*temp2=0;
	int count=0,choice=1,location=0;
	last=0;
	while(choice==1)
	{
		temp=(Node*)malloc(sizeof(Node));
		printf("enter the data:");
		scanf("%d",&temp->num);
		if(last==0)
		{
			last=head=temp;
		}
		else
		{
			last->ptr=temp;
			last=temp;
		}
		printf("do you want to continue [enter 0 or 1]:");
		scanf("%d",&choice);
	}
	last->ptr=0;
	temp=head;
	while(temp!=0)
	{
		printf("\ndata item:%d",temp->num);
		temp=temp->ptr;
		count++;
	}
	printf("\n");
	printf("number of nodes:%d",count);
	count=0;
	printf("\nenter the location:");
	scanf("%d",&location);
	temp=(Node*)malloc(sizeof(Node));
	printf("\nenter the data:");
	scanf("%d",&temp->num);
	temp2=head;
	while(location-1>0)
	{
		location--;
		temp2->ptr=temp2->ptr;
		temp2=temp2->ptr;
	}
	temp->ptr=temp2->ptr;
	temp2->ptr=temp;
	temp=head;
	while(temp!=0)
	{ printf("\ndata items:%d",temp->num);
	 temp=temp->ptr;
	 count=count+1;
	}
	printf("\n");
	printf("no of nodes:%d",count);
	
//--------------------------------------------------------------------------//
