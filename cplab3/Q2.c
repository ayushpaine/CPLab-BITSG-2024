#include<stdio.h>

int main()
{
    int a,b,c,d;
    printf("Enter four integers: ");
    scanf(" %d%d%d%d",&a,&b,&c,&d);
    int max;
    max=(a>=b)?(a>=c)?(a>=d)?(a):(d):(c>=d)?(c):(d):(b>=c)?(b>=d)?b:d:(c>=d)?c:d;
    printf("Maximum: %d\n",max);


   
    return 0;
}