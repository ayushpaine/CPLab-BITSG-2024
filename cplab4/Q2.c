#include<stdio.h>

int main()
{   int n;
    printf("Enter an integer: ");
    scanf("%d",&n);
    int i,j;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i==j||i+j==n+1)
            {
                printf("*");
            }
            else if((j>i&&j<(n+1-i))||(i>j&& j>(n+1-i)))
            {
            printf("-");    
            }
            else
            {
                printf(" ");
            }
        }
         printf("\n");
    }
    return 0;
}