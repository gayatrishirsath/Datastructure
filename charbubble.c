#include<stdio.h>
#include<string.h>
void bubblesort(char a[][100], int n) 
{
    int pass, i;
    char t[100];
    for(pass = 1; pass < n; pass++)
	 {
        for(i = 0; i < n - pass; i++) 
		{
            if(strcmp(a[i], a[i+1]) > 0)
			 {
                strcpy(t, a[i]);
                strcpy(a[i], a[i+1]);
                strcpy(a[i+1], t);
            }
        }
    }
}

int main()
 {
    char a[100][100];
    int i, n;
    printf("Enter limit: ");
    scanf("%d", &n);
    printf("Enter strings in array:\n");
    for(i = 0; i < n; i++) 
	{
        scanf("%s", a[i]);
    }
    bubblesort(a, n);
    printf("Sorted Array:\n");
    for(i = 0; i < n; i++) 
	{
        printf("%s\t", a[i]);
    }
}

