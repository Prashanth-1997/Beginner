#include<stdio.h>
#include<math.h>
int main()
{
    int number1,number2,sum=0,count=0,temp=0,extra=0,i,rem=0;
    scanf("%d %d",&number1,&number2);
    for(i=number1;i<number2;i++)
    {
        temp=i;
        extra=i;
        while(temp!=0)
        {
            count++;
            temp=temp/10;
        }
        while(extra!=0)
        {
            rem=extra%10;
            sum=sum+pow(rem,count);
            extra=extra/10;
        }
        if(sum==i)
        {
            printf("%d",sum);
        }
       sum=0;
       count=0;
    }
	return 0;
}
