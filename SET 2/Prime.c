#include<stdio.h>
int main()
{
 int number=7;
 int count=0,index;

 for(index=1; index<=number; index++)
 {
     if(number%index==0)
     count++;
 }
 if(count==2)
  printf("Prime");
 else
  printf("not a prime");

 return 0;
}
