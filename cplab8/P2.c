#include <stdio.h>

typedef int Arr1D[2];
typedef Arr1D Arr2D[3];

void set(int *n)
{
    *n=1;
}
void reset(int *n)
{
    *n=-1;
}

int main(){
    Arr2D A;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<2;j++)
        {
            reset(&A[i][j]);
        }
    }
    
    int i,j;
    printf("enter i and j:");
    scanf("%d%d",&i,&j);
    set(&A[i-1][j-1]);
    
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<2;j++)
        {
            printf("%d",A[i][j]);
        }
        printf("\n");
    }
    
}