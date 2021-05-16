#include<stdio.h>

int main()
{
    int dob,birth_month,birth_year;
    printf("Enter your date of birth in dd:mm:yyyy format:-");
    scanf("%2d:%2d:%4d",&dob,&birth_month,&birth_year);
    printf("Day %d, month %d and year %d",dob,birth_month,birth_year);
    return 0;
}