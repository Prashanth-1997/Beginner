#include <stdio.h>
#include<math.h>
int main() 
{
    int n,i,a;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	    a=pow(2,i);
	    if(a>n)
	    {
	        printf("%d",a);
	        break;
	    }
	}
	return 0;
}
