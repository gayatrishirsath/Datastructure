#include<stdio.h>
#include<stdlib.h>
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
struct node * delend(struct node * head)
{
	  struct node * temp,*temp1;
	  for(temp=head;temp->next->next!=NULL;temp=temp->next);
	   temp1=temp->next;
	    temp->next=NULL;
	  free(temp1);
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
	int ch,num,pos;
	 do
	 { printf("Enter choice as 1-create \n2-disp \n3-delete begining=");
	 scanf("%d",&ch);
	 	switch(ch)
	 	{
	 	  case 1:head=create(head);	
	 	          break;
	 	  case 2:disp(head);
	 	         break;
	     case 3:head=delend(head);
	 	         break;
		 }
	 }
	while(ch<4);
}
