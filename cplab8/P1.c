#include <stdio.h>

// Define the type alias 'FType' here.
// FType should be a function type similar to that of linSearch,binSearch
typedef int Ftype(int[],int,int,int);


int linSearch(int A[],int x, int y, int k)
{
    int flag=0;
    for(int i=x;i<y;i++)
    {
        if(A[i]==k)
        {
            flag=1;
            break;
        }
    }
}

int binSearch(int A[],int x, int y, int k)
{
    int mid=(x+y)/2;
    if(x>y)
    {
        return 0;
    }
    if(A[mid]==k)
    {
        return 1;
    }
    if(A[mid]<k){
        return binSearch(A,mid+1,y,k);
    }
    else
    {
        return binSearch(A,x,mid-1,k);
    }
}

int search(Ftype f,int A[],int n, int k)
{
    if(f(A,0,n,k)!=0)
    {
        for(int i=0;i<n;i++)
        {
            if(A[i]==k)
            {
                return i;
                break;
            }
        }
    }
    else
    {
        return -1;
    }
}

int isSort(int A[],int n)
{
    int flag=1;
    for(int i=0;i<(n-1);i++)
    {
        if(A[i]>A[i+1])
        {
            flag=0;
             break;
        }
       
    }
    return flag;
}

int main()
{
    int n,k,A[100],i=0;
    printf("Enter n and k:");
    scanf("%d %d",&n,&k);
    printf("Enter the numbers:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    printf("Index is:");
    if(isSort(A,n))
    {
        printf("%d",search(binSearch,A,n,k));
    }
    else{
        printf("%d",search(linSearch,A,n,k));
    }
    return 0;
}
