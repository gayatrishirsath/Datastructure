#include<stdio.h>
#define MAX 5

struct stack {
    int a[MAX];
    int top;
} s; 

void init() 
{
    s.top = -1;  
}
int isfull()
 {
   if(s.top==MAX-1)
      return 1;
    else
     return 0;
}

void push( char c)
 {
    if (isfull()) {
        printf("Stack is full..!\n");
    } else {
        s.top++;
        s.a[s.top] = c;
       // printf("Push successful..\n");
    }
}
void disp() 
{ int i;
   for (i = s.top; i >= 0; i--) 
		{
            printf("%c", s.a[i]);
        }
}
int main()
 {  char s1[20];
    int i;
    printf("Enter string: ");
    scanf("%s", &s1);
          init();
    for(i=0;s1[i]!='\0';i++)
     {
     	 push(s1[i]);
	 }
    printf("\n Reverse string= ");
     disp();
              
}

