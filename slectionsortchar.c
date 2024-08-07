#include<stdio.h>
#include<string.h>
int main()
{
    char a[20][20],max[20],t[20];
    int n,i,pass,index;
    printf("Enter limit = ");
    scanf("%d", &n);
    printf("Enter city names:\n");
    for(i=0;i<n;i++)
    {
        scanf("%s",a[i]);
    }

    for(pass=0;pass<n-1;pass++)
    {
        strcpy(max,a[pass]);
        index=pass;
        for(i=pass+1;i<n;i++)
        {
            if(strcmp(a[i],max)>0)
            {
                strcpy(max,a[i]);
                index=i;
            }
       }
            strcpy(t,a[pass]);
            strcpy(a[pass],a[index]);
            strcpy(a[index],t);
    }

    printf("\nSorted city names:\n");
    for(i=0;i<n;i++)
    {
        printf("%s\t",a[i]);
    }
}

