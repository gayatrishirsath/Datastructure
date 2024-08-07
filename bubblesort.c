#include<stdio.h>
int main()
{
	int a[100],n,i,t,pass;
	printf("Enter limit=");
	scanf("%d",&n);
	printf("Enter n numbers=");
	for(i=0;i<n;i++)
	{
	  scanf("%d",&a[i]);
    }
    for(pass=0;pass<n;pass++)
    {
    	for(i=0;i<n;i++)
    	{
    		if(a[i]>a[i+1])
    		   {
    		   	t=a[i];
    		   	a[i]=a[i+1];
    		   	a[i+1]=t;
			   }
		}
	}
	printf("\nSorted array=");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}
