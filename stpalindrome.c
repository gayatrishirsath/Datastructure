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
  } 
}
char peek()
{
	char val=s.a[s.top];
	return val;
}
char pop()
{
  char val=s.a[s.top];
  s.top--;
  return val;
}
int precedance (char ch)
{
	if(ch=='+'||ch=='-')
	   return 1;
	else if(ch=='*'||ch=='/')
	   return 2;
	else if(ch=='$'||ch=='^')
	   return 3;
}
int main()
{ char infix[100];
   int i;
   printf("Enter infix string=");
   gets(infix);
   init();
   for(i=0;s1[i]!='\0';i++)
   {
    ch=infix[i];
      if(ch=='(')
        push(ch);
     else if(isalpha(ch))
         printf("%c",ch);
    else if((!isempty)&&precedance(peek())>=precedance(ch))
    {
    	while(precedance(peek()>=precedance(ch))&&!isempty())
    	{
    		printf("%c",pop());
		}
		push(ch);
	}
 else
   {
    push(ch);
  }
}
  while(!isempty())
  {
  	printf("%c",pop());
  }
}
   

