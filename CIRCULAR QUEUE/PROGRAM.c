#include<stdio.h>                    //circular queue
#define MAX 5
void enqeue(int *q,int *f,int *r)
{
	if ((*f== 0 && *r== MAX-1) ||(*r== (*f-1)%(MAX-1)))
    {
        printf("Queue is Full\n");
        return;
    }
    else if (*f== -1)
    {
        *f=*r= 0;
        printf("Enter the element:");
        scanf("%d",&q[*r]);
    }
    else if (*r==MAX-1 && *f!= 0)
    {
        *r= 0;
        printf("Enter the element:");
        scanf("%d",&q[*r]);
    }
    else
    {  (*r)++;
        printf("Enter the element:");
        scanf("%d",&q[*r]);
    }
}
void deqeue(int *q,int *f,int *r)
{
    if (*f==-1)
    {
        printf("Queue is Empty\n");
        return ;
    }
    if (*f==*r)
    {
        *f= -1;
        *r= -1;
    }
    else if (*f==MAX-1)
    {
        *f= 0;    	
    }
    else
    {
    	printf("The dequeued element is : %d",q[*f]);
    	(*f)++;
    }    
}
void peek(int *q,int *f,int *r)
{
	if(*f==-1||*f==*r)
	{
		printf("Queue is empty\n");
	}
	else
	{
		printf("The front element  is : %d\n",q[*f]);
	}
}
void display(int *q,int *f,int *r)
{
	if (*f== -1)
    {
        printf("Queue is Empty\n");
        return;
    }
    if (*r>=*f)
    {
        for (int i=*f; i<=*r; i++)
        {
        	printf("%d  ",q[i]);
        }
    }
    else
    {    for (int i =*f; i<MAX; i++)
        {
        	printf("%d  ",q[i]);
        }
 
        for (int i = 0; i <= *r; i++)
        {
        	printf("%d  ",q[i]);
        }
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


