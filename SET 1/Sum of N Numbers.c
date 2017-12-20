#include<stdio.h>
int main()
{
 int number;
 int index,sum=0;
 scanf("%d",&number);
 
 for(index=1; index<=number; index++)
   {
     sum=sum+index;
   }
   printf("%d",sum);
return 0;   
}
