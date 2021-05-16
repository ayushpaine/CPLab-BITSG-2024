#include<stdio.h>
 int main()
 {
     char c;
     printf("Enter a consonant:");
     scanf("%[^aeiouAEIOU\n]",&c);
     printf("%c",c);
     return 0;
 }