#include<stdio.h>

int main()
{
    int n;
    printf("Enter an integer: ");
    scanf("%d",&n);
    int i,j;
    for(int i=1;i<=n;i++)
    {
        for(j=n;j>=i;j--)
        {
            printf("* ");
        }
        printf("\n");
    }
    for(int i=1;i<=n;i++)
    {
        if(i==1)
        {
            continue;
        }
        for(j=1;j<=i;j++)
        {
             printf("* ");
        }
        printf("\n");
    }
    return 0;
}