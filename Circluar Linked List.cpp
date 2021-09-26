// CIRCULAR LINKED LIST

#include<stdio.h>
#include<stdlib.h>
struct Node
	{
		int data;
		struct Node *next;
	}*head=NULL,*tail;
	
void create()
	{
		int n;
		printf("Enter the number of nodes : ");
		scanf("%d",&n);
		for(int i=0;i<n;i++)
			{
				struct Node *temp=(struct Node *)malloc(sizeof(struct Node));
				printf("Enter data for Node %d : ",i+1);
				scanf("%d",&temp->data);
				if(head==NULL)
					{
						head=temp;
						tail=temp;
						tail->next=head;
					}
				else
					{
						tail->next=temp;
						tail=temp;
						tail->next=head;
					}
			}
	}
	
void display(struct Node *p)
	{
		if(head==NULL) printf("Linked List is Empty");
		else
			{
				while(p!=tail)
					{
						printf("%d ",p->data);
						p=p->next;
					}
					printf("%d",p->data);
			}
	}

int main()
	{
		create();
		display(head);
	}
