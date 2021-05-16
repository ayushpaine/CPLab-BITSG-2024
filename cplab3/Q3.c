#include<stdio.h>

int main()
{
    int a,b; 
    int c;
    double d;
    printf("Enter two integers: ");
    scanf("%d%d",&a,&b);
    char ch;
    printf("Enter operation: ");
    scanf(" %c",&ch);
    switch(ch)
    {
    case '+':
        c=a+b;
        printf("Output: %d\n",c);
        break;
    case '-':
        c=a-b;
        printf("Output: %d\n",c);
        break;
    case '*':
        c=a*b;
        printf("Output: %d\n",c);
        break;
    case '/':
        d=(double)a /b;
        (b==0)?printf("ERROR: Divide by zero\n"):printf("Output: %lf\n",d);
        break;
    
    default:
        break;
    }
    
  
    return 0;
}