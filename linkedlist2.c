#include<stdlib.h>
#include<stdio.h>
struct node
{
	int data;
	struct node * next;
};
struct node * create(struct node * head)
{
	
	 struct node * newnode,*temp;
	 int n,i;
	 printf("Enter limit=");
	 scanf("%d",&n);
	 for(i=0;i<n;i++)
	 {
	    newnode=(struct node *)malloc(sizeof(struct node));
	     printf("Enter value=");
	     scanf("%d",&newnode->data);
	     newnode->next=NULL;
	     
	     if(head==NULL)
	     {
	     	head=newnode;
	     	temp=newnode;
		 }
		 else
		 {
		 	temp->next=newnode;
		 	temp=newnode;
		 }
     }
     return head;
}
void disp(struct node * head)
{
	struct node * temp;
	temp=head;
	while(temp!=NULL)
	{
		printf("%d\t",temp->data);
		temp=temp->next;
	}
}
int main()
{
	struct node * head=NULL;
	 int ch;
	
	 do
	 { printf("Enter choice as 1-create \t2-disp=");
	 scanf("%d",&ch);
	 	switch(ch)
	 	{
	 	  case 1:head=create(head);	
	 	          break;
	 	  case 2:disp(head);
	 	         break;
		 }
	 }
	while(ch<3);
}
