#include<stdio.h>
int main()
{
char n;
scanf("%c",&n);
if((n=='a')||(n=='e')||(n=='i')||(n=='o')||(n=='u'))
{
printf("Vowel");
}
else if((n!='a')||(n!='e')||(n!='i')||(n!='o')||(n!='u'))
{
printf("Consonant");
}
else
   {
     printf("Invalid");
   }
return 0;
}
