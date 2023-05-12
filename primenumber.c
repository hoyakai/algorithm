#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
	int m,n,arr[10001]={0,},i,j;
	scanf("%d %d",&m,&n);
	arr[0]=1;
	arr[1]=1;
	for (i=2;i*i<=10000;i++)
	{
		if(arr[i]==0)
  		{
   			 for (j=i*i; j<=10001;j=j+i)
    		{
    			arr[j]=1;
    		}
    	}
  	}
  	arr[1]=0;
 	for (i=m;i<=n;i++)
  	{
    	if(arr[i]==0)
    	{
      		printf("%d\n",i);
    	}
  	}
}
