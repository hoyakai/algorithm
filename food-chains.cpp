#include <iostream>
#include <cstdio>
#include <utility>
#include <algorithm>
using namespace std;

pair<int,int> p[100];
int n,o,b=-1;
	
int function(int a)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(i!=a)
		{
			if(p[a].first < p[i].first && p[a].second > p[i].second)
			{
				o++;
				function(i);
			}
			else if(p[a].first == p[i].first && p[a].second > p[i].second)
			{
				o++;
				function(i);
			}
			else if(p[a].first < p[i].first && p[a].second == p[i].second)
			{
				o++;
				function(i);
			}
		}
	}
	if(o>b)
	{
		b=o;
	}
	return o;
}

int main()
{
	int i,j,num;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&num);
		scanf("%d %d",&p[num].first,&p[num].second);
	}
	for(i=0;i<n;i++)
	{
		function(i);
	}
	printf("%d",o);
	return 0;
}
