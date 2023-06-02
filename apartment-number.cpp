#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int n=0,a=0,b=0;
char arr[27][27];

int function(int i,int j)
{
    if(arr[i][j]=='1')
    {
        a++;
    	arr[i][j]='2';
    }
	if(arr[i+1][j]=='1')
	{
		function(i+1,j);
	}
	if(arr[i-1][j]=='1')
	{
		function(i-1,j);
	}
	if(arr[i][j+1]=='1')
	{
		function(i,j+1);
	}
	if(arr[i][j-1]=='1')
	{
		function(i,j-1);
	}
	return 0;
}

int main()
{
	int i,j;
	vector <int> v;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n+1;j++)
		{
			scanf("%c",&arr[i][j]);
		}
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
		    if(arr[i][j]=='1')
		    {
		        function(i,j);
			    b++;
			    v.push_back(a);
			    a=0;
		    }
			
		}
	}
	printf("\n%d\n",b);
	//sort(v.begin(),v.end());
	for(i=0;i<b;i++)
	{
		printf("%d\n",v[i]);
	}
	return 0;
}
/*
7
0110100
0110101
1110101
0000111
0100000
0111110
0111000



*/
