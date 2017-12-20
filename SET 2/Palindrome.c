#include<stdio.h>
int main()
{
 int number=121;
 int r,revnum=0,result=1,temp=0;
 temp=number;
 while(number>0)
 {
   r=number%10;
   revnum=revnum*10+r;
   number=number/10;
 }

 if(temp==revnum)
   printf("Palindrome");
 else
   printf("Not a Palindrome"); 
 return 0;
}
