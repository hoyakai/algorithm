#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
	int n[100],i,j,k,a=0;
	n[0]=1;
	for(i=1;n[i-1];i++)
	{
		scanf("%d",&n[i]);
	}
	for(i=1;n[i];i++)
	{
		if(a==1)
		{
			break;
		}
		for(j=3;j<n[i];j++)
		{
			for(k=2;k<j;k++)
			{
				if(j%k==0)
				{
					a=0;
					break;
				}
				a=1;
			}
			if(a!=0)
			{
				for(k=2;k<n[i]-j;k++)
				{
					if((n[i]-j)%k==0)
					{
						a=0;
						break;
					}
					a=1;
				}
				if(a==1)
				{
					printf("%d = %d + %d\n",n[i],j,n[i]-j);
					a=0;
					break;
				}
			}
		}
	}
}
