#include <stdio.h>
int main() 
{
    int n=10,a[10];
    int min=999,i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(min>a[i])
        {
            min=a[i];
        }
    }
    printf("%d",min);
	return 0;
}
