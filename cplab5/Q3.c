#include<stdio.h>
int main()
{
	int n;
	printf("Enter integer : ");
	scanf("%d",&n);
	int len=1;
	printf("Subsets : \n");
	while(len<=n)
	{
		int a[len];
		for(int i=0;i<len;i++)
		{
			a[i]=i+1;
		}
		int k=1;
		while(a[0]<=n-len+1)
		{
			for(int j=0;j<len;j++)
			{
				printf("%d ",a[j]);
			}
			printf("\n");
			a[len-k]++;
			while(a[len-k]>n-k+1)
			{
				if(len-k==0)
				{
					break;
				}
				k++;
				a[len-k]++;
				if(a[len-k]<=n-k+1)
				{
					for(int j=len-k+1;j<len;j++)
					{
						a[j]=a[j-1]+1;
					}
					k=1;
				}
			}
		}
		len++;
	}
}