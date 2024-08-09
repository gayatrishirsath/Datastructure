#include<stdio.h>
void bubblesort(int a[],int n)
{
	int pass,i,t;
	for(pass=1;pass<n;pass++)
      {
      	for(i=0;i<n-pass;i++)
      	{
      		if(a[i]>a[i+1])
      		{
      		   t=a[i];
      		   a[i]=a[i+1];
      		   a[i+1]=t;
      	    }
		  }
	  }
}
int main()
{
	int a[100],i,n;
	printf("Enter limit=");
	scanf("%d",&n);
	printf("Enter elements in array=");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	 bubblesort(a,n);
	printf("Sorted Array=");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}
