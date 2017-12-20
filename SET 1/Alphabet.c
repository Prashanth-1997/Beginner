#include<stdio.h>
int main()
{
 char word;
 scanf("%c",&word);
 
 if(word>='a'&& word<='z'||word>='A'&&word<='z')
    printf("Alphabet");
  else
    printf("Not an Alphabet");
 return 0;
}
