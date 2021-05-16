#include<stdio.h>
int main()
{
    int p;
    printf("Enter precision value:");
    scanf("%d",&p);
    float temp;
    float a,b,c,d,e,f;
    
    a=(5.0/9.0)*(-32);
    b=(5.0/9.0)*(20-32);
    c=(5.0/9.0)*(40-32);
    d=(5.0/9.0)*(60-32);
    e=(5.0/9.0)*(80-32);
    f=(5.0/9.0)*(100-32);
    printf("Fahrenheit                 Celcius\n");
    printf("   0                       %.*f\n",p,a);
    printf("  20                        %.*f\n",p,b);
    printf("  40                         %.*f\n",p,c);
    printf("  60                        %.*f\n",p,d);
    printf("  80                        %.*f\n",p,e);
    printf(" 100                        %.*f\n",p,f);
    return 0;
}