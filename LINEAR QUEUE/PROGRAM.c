#include<stdio.h>                          //linear queue
#define MAX 10
void enqeue(int *q,int *f,int *r)
{
	if(*r==-1)
	{
		*r=0;
		*f=0;
	}
	if(*r==MAX)
	{
		printf("Que is full\n");
	}
	else
	{
		printf("Enter the number:");
		scanf("%d",&q[*r]);
		(*r)++;
	}
}
void deqeue(int *q,int *f,int *r)
{
	if(*f>=*r||*f==-1)
	{
		printf("Queue is empty\n");
	}
	else
	{
		printf("The dequeued element is : %d\n",q[*f]);
		(*f)++;
	}
}
void peek(int *q,int *f,int *r)
{
	if(*f==-1||*f>=*r)
	{
		printf("Queue is empty\n");
	}
	else
	{
		printf("The top most element is : %d\n",q[*f]);
	}
}
void display(int *q,int *f,int *r)
{    
    printf("The elements are :");
	for(int i=*f;i<*r;i++)
	{
		printf(" %d  ",q[i]);
	}
}
int main()
{
	int front=-1,rear=-1,arr[MAX],n;
	do
	{
		printf("\n1-ENQUEUE\n2-DEQUEUE\n3-PEEK\n4-DISPLAY\nEnter your choice:");
		scanf("%d",&n);
		switch(n)
		{
			case 1:
				enqeue(arr,&front,&rear);
				break;
			case 2:
				deqeue(arr,&front,&rear);
				break;
			case 3:
				peek(arr,&front,&rear);
				break;
			case 4:
				display(arr,&front,&rear);
				break;
			case 5:
				break;
			default:
				printf("You entered the wrong choice\n");
		}
	}while(n!=5);
	return 0;
}




