#include<stdio.h>
int main()
{
	int f=0,mid,begin=0,end,key;
	int n,a[100],i;
	printf("Enter limit=");
	scanf("%d",&n);
	printf("Enter n elements=");
	for(i=0;i<n;i++)
	{
	  scanf("%d",&a[i]);
    }
    printf("Enter num or key to search=");
    scanf("%d",&key);
    end=n-1;
    while(begin<=end)
    {
    	mid=begin+end/2;
	}
	if(key==a[mid])
	{
		f=1;
	    
	}
	if(key<a[mid])
	{
		mid=mid-1;
		f=1;	}
	else
	{
		mid=mid+1;
		f=1;

	}
	if(f==1)
	  printf("Key is found...");
	else
	  printf("Key is not found");
}
