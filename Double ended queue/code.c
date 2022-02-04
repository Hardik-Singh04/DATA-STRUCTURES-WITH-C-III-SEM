#include<stdio.h>                               //Double Ended Queue
#include<stdlib.h>
void input_front(int *a,int *f,int *r,int n)
{
	if( (*f==0 && *r==n-1) || (*f==*r+1) )
	{
  		printf("Que is full\n");
 	}
	else if(*f==-1)
	{
		*f=0;
		*r=0;
		printf("Enter the element:");
		scanf("%d",&a[*f]);
	}
	else
	{
		if(*f==0)
		{
			*f=n-1;
		}
		else
		{
			*f=*f-1;
		}
		printf("Enter the element:");
		scanf("%d",&a[*f]);
   }
}
void input_rear(int *a,int *f,int *r,int n)
{
	if( (*f==0 && *r==n-1) || (*f==*r+1) )
 	{
  		printf("Que is full\n");
 	}
 	else if(*f==-1)        
  	{
  		*f=0;
  		*r=0;
  		printf("Enter the element:");
  		scanf("%d",&a[*r]);
 	}
 	else
 	{
  		if(*r==n-1)
  		{
  			*r=0;
  		}
  		else
  		{
  			*r=*r+1;
  		}
  		printf("Enter the element:");
  		scanf("%d",&a[*r]);
 	}
}
void delete_rear(int *a,int *f,int *r,int n)
{
 	if(*f==-1)
 	{
  		printf("Que is empty\n");
  		return;
 	}
 	printf("The deleted element at index %d that is %d is being deleted\n",*r,a[*r]);
 	if(*f==*r) 
 	{
  		*f=-1;
 		*r=-1;
 	}
 	else
 	{
  		if(*r==0)
  		{
  			*r=n-1;
  		}
   		else
   		{
   			*r=*r-1;
   		}
 	}
}
void delete_front(int *a,int *f,int *r,int n)
{
 	if(*f==-1)
 	{
  		printf("Que is empty\n");
  		return;
 	}
 	printf("The deleted element is : \n",a[*f]);
 	if(*f==*r) 
 	{
  		*f=-1;
  		*r=-1;
 	}
 	else
 	{
  		if(*f==n-1)
  		{
  			*f=0;
  		}
  		else
  		{
  			*f=*f+1;
  		}
 	}
}
void display(int *a,int *f,int *r,int n)
{
    int i=*f;
    if(*f!=-1 || *f!=*r)
    {   
        while(i!=*r)    
        {  
            printf("The element at index %d is %d ",i,a[i]);  
            i=(i+1)%n;  
        }  
        printf("The element at index %d is %d",*r,a[*r]); 
    }
}
int main()
{
	int n,f=-1,r=-1,ch; 
	printf("Enter the size of Que:");
	scanf("%d",&n);
	int *arr=(int*)malloc(n*sizeof(int));
	printf("Enter the number in a menu :\n");
	do
	{
		printf("\n1-Input front\n2-Input rear\n3-Delete front\n4-Delete rear\n5-Display\n6-Exit\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				input_front(arr,&f,&r,n);
				break;
			case 2:
				input_rear(arr,&f,&r,n);
				break;
			case 3:
				delete_front(arr,&f,&r,n);
				break;
			case 4:
				delete_rear(arr,&f,&r,n);
				break;
			case 5:
				display(arr,&f,&r,n);
				break;
			case 6:
				break;
			default:
				printf("You entered the wrong choice\n");
		}
	}while(ch!=6);
	free(arr);
	return 0;
}

