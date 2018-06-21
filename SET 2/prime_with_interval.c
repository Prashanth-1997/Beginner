#include <stdio.h>
int main()
{
  int number,number2,i,j,target=0;
  scanf("%d %d",&number,&number2);
  for(i=number;i<=number2;i++)
  {
      for(j=2;j<=(number/2);j++)
      {
          if((i%j)==0)
          {
              target=1;
              break;
          }
          else
          {
              target=0;
          }
      }
       if(target==0)
        {
            printf("%d\n",i);
        }
  }
   return 0;
}
