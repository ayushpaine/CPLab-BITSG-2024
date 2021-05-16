#include<stdio.h>

int main()
{
    int a,b,c;
    int min;
    int max;
    int mid;
    printf("Enter three integers: ");
    scanf("%d %d %d",&a ,&b, &c);
    if(a>=b && a>=c)
    {
        if(b>=c)
        {
            max=a;
            mid=b;
            min=c;
        }
        else
        {
            max=a;
            mid=c;
            min=b;
        }
    }
   else if(b>=a && b>=c)
    {
        if(a>=c)
        {
            max=b;
            mid=a;
            min=c;
        }
        else
        {
            max=b;
            mid=c;
            min=a;
        }
    }
    
   else if(c>=a && c>=b)
    {
        if(a>=b)
        {
            max=c;
            mid=a;
            min=b;
        }
        else
        {
            max=c;
            mid=b;
            min=a;
        }
    }
    

   
    printf("Integers in increasing order: %d %d %d\n",min,mid,max);
    return 0;
}