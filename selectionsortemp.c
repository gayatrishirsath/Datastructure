#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,pass,index,max;
    struct emp
    {
    	int eno,sal;
    	char ename[20];
	}e1[100],t;
    printf("Enter limit = ");
    scanf("%d", &n);
    printf("Enter emp info:\n");
    for(i=0;i<n;i++)
    { 
        printf("Enter empno emp name emp sal :\n");
        scanf("%d%s%d",&e1[i].eno,&e1[i].ename,&e1[i].sal);
    }

    for(pass=0;pass<n;pass++)
    {
        max=e1[pass].sal;
        index=pass;
        for(i=pass+1;i<n;i++)
        {
            if(e1[i].sal>max)
            {
                max=e1[i].sal;
                index=i;
            }
       }
            t=e1[index];
            e1[index]=e1[pass];
            e1[pass]=t;
    }

    printf("\ndisplay sorted emp:\n");
    for(i=0;i<n;i++)
    {
        printf("\n%d\t%s\t%d",e1[i].eno,e1[i].ename,e1[i].sal);
    }
}

