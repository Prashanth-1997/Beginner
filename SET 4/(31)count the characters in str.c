#include <stdio.h>
#include<string.h>
int main()
{
	char b[100];
	int n,i,count=0;
	scanf(" %[^\t\n]s",a);
	n=strlen(a);
	for(i=0;i<n;i++)
	{
	 if(b[i]>='a'&&b[i]<='z'||b[i]>='A'&&b[i]<='Z')
	 {
	     count++;
	 }
	}
	printf("%d",count);
	return 0;
}
