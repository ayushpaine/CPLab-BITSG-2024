#include<stdio.h>
 int main()
 {
     int f,g,h,i;
     printf("Enter the number :");
     scanf("%d",&f);
    g=f%1000;
    h=f%100;
    i=f%10;
    printf("%d\n",f);
    printf("%4d\n",g);
    printf("%4d\n",h);
    printf("%4d\n",i);
 }