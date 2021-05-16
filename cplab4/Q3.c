#include<stdio.h>

int main()
{
    int n;
    char c;
    int o;
    
    printf("Enter Balance: ");
    scanf("%d",&n);
    
    while(1>0)
    {
        printf("Enter Option: ");
        scanf(" %c",&c);
        if(c=='E')
        {
            printf("Exiting...\n");
            break;
        }
        scanf(" %d",&o);
        if(c!='E')
        {
            if(c=='A')
            {
                n+=o;
                printf("Balance: %d\n",n);
            }
            if(c=='S')
            {
                n-=o;
                printf("Balance: %d\n",n);
            }
        }
        
    }
    return 0;
}