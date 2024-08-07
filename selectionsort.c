#include<stdio.h>
int main()
{
	int a[100],n,i,pass,max,index;
	printf("Enter limit=");
	scanf("%d",&n);
	printf("Enter n numbers=");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(pass=0;pass<n;pass++)
	{
		max=a[pass];
		index=pass;
		for(i=pass+1;i<n;i++)
		{
		
	    	if(a[i]>max)
		   {
			max=a[i];
			index=i;
		   }
		a[index]=a[pass];
		a[pass]=max;
     	}
    }
	printf("\nDisplay elements=");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}
