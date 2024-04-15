#include<stdio.h>
#include<stdlib.h>
#define MAX 50
int queue_arr[MAX];
int rear=-1;
int front=-1;
int isempty();
void enqueue()
{
	int added_item;
	if(rear==MAX-1)
	{
		printf("\nqueue is overflow\n");
	}
	else
	{
		if(isempty()==1)
		{
			printf("queue is empty, you are going to creat a queue\n");
			front=0;
		}
		printf("\n input the element for adding in queue:");
		scanf("%d", &added_item);
		rear=rear+1;
		queue_arr[rear]=added_item;
	}
}
void dequeue()
{
	if(isempty()==1)
	{
		printf("\nqueue is underflow or queue is empty\n");
	}
	else
	{
		printf("\nelement deleted from queue is : %d\n",queue_arr[front]); 
		
		front=front+1;
	}
}
void traverse()
{
	int i;
	if(isempty()==1)
	{
	printf("\nqueue is emmpty\n");
	}
	else
	{
		printf("\nfront is %d and queue is :\n",front);
		for(i=front;i<=rear;i++)
		printf("%d",queue_arr[i]);
		printf("\n");
	}
}
int isempty()
{
	if(front==-1 && rear==-1)
	{
		return 1;
	}
	else{
		return 0;
	}
}
int main()
{
	int choice;
	while(1)
	{
		printf("\n1.enqueue\n");
		printf("2.dequeue\n");
		printf("3.traverse\n");
		printf("4.size\n");
		printf("5.quit");
		printf("\nenter your choice:");
		scanf("%d",&choice);
		switch(choice)
		{
	     case 1:
		 enqueue();
		 break;
	   	 case 2:
		 dequeue();
		 break;
		 case 3:
		 traverse();
		 break;
		 case 4:
	     printf("the size of the queue is %d\n",rear-front+1);
		 break;
		 case 5:
		 exit(1);
		 deafault:
		 printf("\nwrong choice\n");					
		}
	}
	return 0;
}