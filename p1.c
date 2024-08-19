//implementation stack

#include<stdio.h>
#define MAXSIZE 20

int arr[MAXSIZE];
int top=-1;
void push(int n)
{
	if(top+1==MAXSIZE)
	{
		printf("OVERFLOW");
		return;
	}
	arr[++top]=n;
}
void pop()
{
	if(top==-1)
	{
		printf("STACK IS EMPTY");
		return;	
	}
	printf("Pop element = %d\n",arr[top]);
	top--;
}
void peek()
{
	if(top==-1)
	{
		printf("STACK IS EMPTY");
		return;	
	}
	printf("peek element = %d",arr[top]);
}
void display()
{
	if(top==-1)
	{
		printf("STACK IS EMPTY");
		return;	
	}
	printf("PRINTING STACK FROM BOTTOM TO TOP : ");
	int i;
	for(i=0;i<=top;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
}
int main()
{
	int ch,item;
	while(1)
	{
		printf("1. PUSH\n2. POP\n3. PEEK\n4. DISPLAY\n5. Exit\n");
		printf("Enter your choice: ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: printf("Enter number to be inserted: ");
			scanf("%d",&item);
			push(item);
			break;
			case 2: pop();
			break;
			case 3: peek();
			break;
			case 4: display();
			break;
			case 5:
				printf("Thank you\n");
				return 0;
			default:printf("INVALID INPUT");
		}
	}
	return 0;
}
