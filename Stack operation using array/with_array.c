#include<stdio.h>                       //Stack operations using array
#include<stdlib.h>
#define Size 8 
int Top=-1;
int arr[Size];
void PUSH()
{
	int num;
	if(Top==Size-1)
	{
		printf("\nStack Overflow...");
	}
	else
	{
		printf("\nEnter the element which is to be inserted in the stack:");
		scanf("%d",&num);
		Top=Top+1;
		arr[Top]=num;
	}
}
void POP()
{
	if(Top==-1)
	{
		printf("\nStack Underflow...");
	}
	else
	{
		printf("\nPopped element is:  %d",arr[Top]);
		Top=Top-1;
	}
}
void DISPLAY()
{   if(Top==-1)
	{
		printf("\nStack Underflow...");
	}
	else
	{
		printf("\nElements in the stack are: \n");
		for(int i=Top;i>=0;i--)
		{  printf("%d\n",arr[i]);
		}
	}
}
void PEEK()
{  if(Top==-1)
	{ printf("\nStack Underflow...");
	}
	else
	{
    printf("Top Element is : %d",arr[Top]);	
    } 
}   
int main()
{	int choice;
	while(1)	
	{   printf("\n");
		printf("\n1.PUSH\n2.POP\n3.DISPLAY\n4.PEEK\n5.End");
		printf("\n\nEnter the operation which you wanted to perform:");
		scanf("%d",&choice);
		switch(choice)
		{   case 1: PUSH();
					break;
			case 2: POP();
					break;
			case 3: DISPLAY();
					break;
	        case 4: PEEK();
	                break;
		   case 5: exit(0);
			default: printf("\nWrong choice....");
		}
	}
}
 




