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
struct node * insertmid(struct node * head,int num,int pos)
{   int i;
	struct node * newnode,*temp;
	newnode=(struct node *)malloc(sizeof(struct node));
	newnode->data=num;
	newnode->next=NULL;
    for(temp=head,i=1;i<pos-1&&temp->next!=NULL;i++,temp=temp->next);
    newnode->next=temp->next;
    temp->next=newnode;
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
	 { printf("Enter choice as 1-create \n2-disp \n3-insert middle=");
	 scanf("%d",&ch);
	 	switch(ch)
	 	{
	 	  case 1:head=create(head);	
	 	          break;
	 	  case 2:disp(head);
	 	         break;
	     case 3:printf("Enter value to insert=");
	            scanf("%d",&num);
	            printf("Enter psition=");
	            scanf("%d",&pos);
		        head=insertmid(head,num,pos);
	 	         break;
		 }
	 }
	while(ch<4);
}
