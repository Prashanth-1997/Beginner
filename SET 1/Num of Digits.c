#include<stdio.h>
int main()
{
 int number[]={5,4,8};
 int size;

 size=sizeof(number)/sizeof(number[0]);

 printf("%d",size);
 return 0;
}
