// CREATING AND DISPLAYING DOUBLY LINKED LIST

#include<stdio.h>
#include<stdlib.h>

struct Node 
	{
		struct Node *prev;
		int data;
		struct Node *next;
	}*head=NULL,*tail=NULL;
	
void create()
	{
		int n;
		printf("Enter the Number of Nodes : ");
		scanf("%d",&n);
		for(int i=0;i<n;i++)
			{
				struct Node *temp=(struct Node *)malloc(sizeof(struct Node));
				printf("Enter the data for %d Node : ",i+1);
				scanf("%d",&temp->data);
				temp->next=NULL;
				temp->prev=tail;
				if(head==NULL)
					{
						head=temp;
						tail=temp;
					}
					else
						{
							tail->next=temp;
							temp->prev=tail;
							tail=temp;
						}
					temp->next=NULL;
			}
	}
	
void display(struct Node *p)
	{
		while(p!=NULL)
			{
				printf("%d\t",p->data);
				p=p->next;
			}
	}

int main()
	{
		create();
		display(head);
	}
