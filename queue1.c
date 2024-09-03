#include<stdio.h>
#include<stdlib.h>  // for malloc
#define MAX 5

struct queue {
    int a[MAX];
    int front, rear;
} *q;

void initq() {
    q->front = -1;
    q->rear = -1;
}

int isempty() {
    if (q->rear == -1 || q->front > q->rear)
        return 1;
    else
        return 0;
}

int isfull() 
{
    if (q->rear == MAX - 1)
        return 1;
    else
        return 0;
}

void insertq(int num)
 {
    if (isfull())
	 {
        printf("Queue is overflow...!");
    } else 
	{
        if (q->front == -1)
		 {
            q->front = 0;
        }
        q->rear++;
        q->a[q->rear] = num;
        printf("Insert successful...!");
    }
}

void delq()
 {
    if (isempty()) 
	{
        printf("Queue is underflow...!");
    } else 
	{
        int val = q->a[q->front];
        q->front++;
        printf("\nDeleted %d successfully....!", val);
    }
}

void dispq() 
{
    int i;
    for (i = q->front; i <= q->rear; i++)
	 {
        printf("%d\t", q->a[i]);
    }
}

int main() 
{
    int ch, num;

    initq();
    do {
        printf("\n1-insert \n2-del \n3-disp\n");
        scanf("%d", &ch);
        switch (ch) 
		{
            case 1:
                printf("\nEnter value to insert=");
                scanf("%d", &num);
                insertq(num);
                break;
            case 2:
                delq();
                break;
            case 3:
                dispq();
                break;
            default:
                printf("\n Invalid choice..!");
        }
    } while (ch <= 3);

}

