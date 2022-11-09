/*Queue Implementation through Array*/

#include <stdio.h>
#include<conio.h>

int queue[5];
int front=0;
int rear=0;

void addq()
{
     int num;
     if(rear==5)
       {
	    printf("\nQueue Full\n");
	    return;
       }
     else
       {
	    printf("\nEnter a number...: ");
	    scanf("%d",&num);
	    queue[rear]=num;
	    printf("\n%d added to Queue at %d Position\n",num,rear);
	    rear++;

       }
}


void delq()
{
     int a;
     if(front==rear)
     {
	    printf("\nQueue Empty\n");
     }
     else
     {
	    a=queue[front];
	    printf("\n%d deleted from queue from %d Position",a,front);
	    front++;

     }
}

void display()
{
     int i;

     if(front==rear)
     {
	 printf("\nQueue Empty\n");
     }
     else
     {
	printf("\n\n\nContents of the queue are : \n");
	for(i=front;i<rear;i++)
	{
		printf("%d", queue[i]);
		if(front == i)
			printf("\t<--- Front\n");
		else
		{
		   if((rear-1) == i)
			printf("\t<--- Rear\n");
		   else
			printf("\n");
		}
	}
     }
}


void main()
{

     int i,num,menuselect;
     clrscr();
     printf("\n\t\tProgram for queue using array\n");
     do
     {
	printf("\n\n\tMain Menu: \n1.Add element \n2.Delete element\n3.Display Queue\n4.Exit");
	printf("\nSelect menu : ");
	scanf("%d",&menuselect);

	switch(menuselect)
	{
	  case 1 : addq();
		   break;

	  case 2 : delq();
		   break;

	  case 3 : display();
		   break;

	  case 4 : printf("\nExiting the program");
		   break;

	  default: printf("Invalid menu item selected.");
	}
     } while(menuselect != 4);
}

