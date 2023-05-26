#include <iostream>
#include <cstdio>

int main()
{
	int n,m,i,j,k,a=0,b=0,arr[100]={0,};
	scanf("%d %d",&n,&m);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n-2;i++)
	{
		for(j=i+1;j<n-1;j++)
		{
			for(k=j+1;k<n;k++)
			{
				a=(arr[i]+arr[j])+arr[k];
				if(m>=a)
				{
					if(a>=b)
					{
						b=a;
					}
				}
			}
		}
	}
	printf("%d",b);
	return 0;
}
