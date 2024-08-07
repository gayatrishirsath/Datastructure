#include<stdio.h>
int main()
{
	char a[20][20],city[20];
	int i,n,f=0,top,mid,bottom;
	printf("Enter limit=");
	scanf("%d",&n);
	printf("Enter city names=");
	for(i=0;i<n;i++)
	{
	  scanf("%s",&a[i]);
    }
    printf("Enter city name to serach=");
    scanf("%s",&city);
   top=0;
   bottom=n-1;
   while(top<=bottom)
   {
   	 mid=(top+bottom)/2;
   	 if(strcmp(a[mid],city)==0)
   	 {
   	 	f=1;
   	 	break;
     }
     if(strcmp(a[mid],city)>0)
     {
     	top=mid+1;
	 }
	 else
	 {
	 	bottom=mid-1;
	 }
   }
   if(f==1)
     printf("City found..");
    else
       printf("City not found...");
}
