#include<stdio.h>
# define MAX 5
struct stack
{ 
  int a[MAX];
int top;
}s;
void init()
{
  s.top=-1;
}
int isempty()
{
  if(s.top==-1)
       return 1;
else
       return 0;
}
int isfull()
{
  if(s.top==MAX-1)
     return 1;
else 
     return 0;
}
void push(int num)
{
  if(isfull())
    {
       printf("Stack is full..!");
     }
else
   {
    s.top++;
    s.a[s.top]=num;
    printf("push succ..");
    } 
}
void pop()
{
  int val;
   if(isempty())
        {
            printf("Stack is empty");
         }
 else
   {
      val=s.a[s.top];
      s.top--;
      printf("\npoped value=%d",val);
   }
}
void disp()
{
  int i;
 for(i=s.top;i>=0;i--)
{
  printf("%d\n",s.a[i]);
}
}
int main()
{
   int ch,num;
   init();
   do
      { printf("\n1-push\n2-pop\n3-disp\n");
          printf("Enter choice");
          scanf("%d",&ch);
         switch(ch)
{ case 1:printf("Enter number");
                 scanf("%d",&num);
                 push(num);
                 break;
case 2:pop();
             break;
case 3:disp();
              break;
default:printf("\nInvalid choice");
               break;
}
}while(ch<4);
}

