#include<stdio.h>

int main()
{   
    int size1,size2;
    printf("Enter size of A :");
    scanf("%d",&size1);
    int a[size1];
    int temp;
    int counta,countb;
    int flag=1;
    printf("Enter A : ");
    for(int i=0;i<size1;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter size of B :");
    scanf("%d",&size2);
    int b[size2];
    printf("Enter B : ");
    for(int i=0;i<size2;i++)
    {
        scanf("%d",&b[i]);
    }
    for(int i=0;i<size1;i++)
    {
        counta=0;
        countb=0;
        temp=a[i];
        for(int j=0;j<size1;j++)
        {
            if(a[j]==temp)
            {
                counta++;
            }
        }
        for(int j=0;j<size2;j++)
        {
            if(b[j]==temp)
            {
                countb++;
            }
        }
        if(counta>countb)
        {
            flag=0;
            break;
        }
    }
    if(flag==1)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}