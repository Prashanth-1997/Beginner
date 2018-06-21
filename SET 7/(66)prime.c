#include <stdio.h>
int main()
{
  int n,flag=0,i;
  scanf("%d\n",&n);
  for(i=2;i<=(n/2);i++)
  {
      if((n%i)==0)
      {
         flag=1; 
         break;
      }
  }
  if(flag==0)
  {
      printf("prime");
  }
  else 
  {
      printf("not a prime");
  }
   return 0;
}
