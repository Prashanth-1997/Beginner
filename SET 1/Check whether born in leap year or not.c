#include <stdio.h>
int main(void) 
{
int year;	
scanf("%d",&year);
if(year%4==0)	
 {		
  if(year%100==0)
   {
     if(year%400==0)
      printf("leap year");
			else
      printf("not a leap year");
      }
		else
       printf("leap year");
	}
	else
    printf("not a leap year");	
	return 0;
}
