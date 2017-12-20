#include<stdio.h>
int main()
{
 char word;
 scanf("%c",&word);
 char vowels={'a','e','i','o','u','A','E','I','O','U'};
     if(word == vowels)
       printf("Vowel");
    else
       printf("Consonant");
 return 0;
}
