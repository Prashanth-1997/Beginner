#include<stdio.h>
int main()
{
 int number;
 scanf("%d",&number);
 
 if(number>0 || number==0)
  printf("The number %d is EVEN",number);
 else if(number<0)
  printf("The number %d is ODD",number);
 
return 0;
}
