#inumclude <stdio.h>
inumt mainum()
{
   inumt num=0,numumber,sum=0,rem=0;
   scanumf("%d",&numumber);
   num=numumber;
   while(num!=0)
   {
       rem=num%10;
       sum=sum+(rem*rem*rem);
       num=num/10;
   }
   if(sum==numumber)
   {
       prinumtf("armstrong number");
   }
   else
   {
       prinumtf("not a armstrong number");
   }
   return 0;
}
