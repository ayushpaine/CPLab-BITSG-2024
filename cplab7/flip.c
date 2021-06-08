#include <stdio.h>
int main()
{
    int row,col;
    printf("Enter number of rows and columns: \n");
    scanf("%d",&row);
    scanf("%d", &col);
    int A[row][col];
    for(int i =0; i < row; i++)
    {
        printf("Enter row %d \n",i+1);

        for(int j=0; j <col;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }

    printf("\nDiagonal flip of the matrix is: \n");

        for(int k=col;k>0;k--)
        {
            for(int l=row;l>0;l--){
                printf("%d ", A[l-1][k-1]);
            }
                    printf("\n");

        }
}


