#include<stdio.h>
int main()
{
 int number=5;
 int power=3;
 int index,result=1;
 for(index=1; index<=power; index++)
   {
    result=result*number;
   }
   printf("%d",result);
return 0;
}
