#include <iostream>
#include <cstdio>
#include <algorithm>
#include <utility>
using namespace std;

int n,m,t,k,x,y,i,j,a=0,b=-1,arr[100][100]={0,};
int p,q;

int main() 
{
	scanf("%d %d %d %d",&n,&m,&t,&k);
	k=k/2;
	for(i=0;i<t;i++)
	{
		scanf("%d %d",&x,&y);
		arr[x][y]=1;
	}
	for(i=0;i<=n;i++)
	{
		for(j=0;j<=m;j++)
		{
			
			for(p=i-k;p<=i+k;p++)
			{
				for(q=j-k;q<=j+k;q++)
				{
					if(p-i+q-j<k)
					{
						if(p>=0 && p<=n)
						{
							if(q>=0 && q<=m)
							{
								a=a+arr[p][q];
							}
						}
		
					}
				}
			}
			if(a>b)
			{
				b=a;
				x=i;
				y=j;
			}
			a=0;
		}
	}
	printf("%d %d\n%d",x,y,b);
	return 0;
}
