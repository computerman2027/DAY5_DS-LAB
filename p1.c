//implementation stack

#include<stdio.h>
#define MAXSIZE 20

int arr[MAXSIZE];
int top=-1;
void push(int n)
{
	if(top+1==MAXSIZE)
	{
		printf("OVERFLOW\n");
		return;
	}
	arr[++top]=n;
}
void pop()
{
	if(top==-1)
	{
		printf("UNDERFLOW\n");
		return;	
	}
	printf("Pop element = %d\n",arr[top]);
	top--;
}
void peep()
{
	if(top==-1)
	{
		printf("STACK IS EMPTY\n");
		return;	
	}
	printf("peek element = %d\n",arr[top]);
}
void display()
{
	if(top==-1)
	{
		printf("STACK IS EMPTY\n");
		return;	
	}
	printf("PRINTING STACK FROM TOP TO BOTTOM : ");
	int i=top;
	//for(i=0;i<=top;i++)
	//{
	//	printf("%d ",arr[i]);
	//}
	while(i!=-1)
	{
		printf("%d ",arr[i]);
		i--;
	}
	printf("\n");
}
int main()
{
	int ch,item;
	while(1)
	{
		printf("MENU\n1. PUSH\n2. POP\n3. PEEP\n4. DISPLAY\n5. Exit\n");
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
			case 3: peep();
			break;
			case 4: display();
			break;
			case 5:
				printf("Thank you\n");
				return 0;
			default:printf("INVALID INPUT\n");
		}
	}
	return 0;
}

