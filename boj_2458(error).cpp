#include <iostream>
#include <cstdio>
#include <vector>
#include <utility>
using namespace std;

bool arr[501][501]={0,};
int check[501];

int main()
{
    int i,j,n,m,a,b,h=0;
    scanf("%d %d",&n,&m);
    for(i=0;i<m;i++)
    {
        scanf("%d %d",&a,&b);
        arr[a][b]=1;
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(arr[i][j]==1)
            {
                check[i]++;
            }
            if(arr[j][i]==1)
            {
                check[i]++;
            }
        }
    }
    for(i=1;i<=n;i++)
    {
        printf("%d\n",check[i]);
        if(check[i]==(n-1))
        {
            h++;
        }
    }
    printf("\n%d",h);
}

/*
for(int k=1;k<=n;k++)
{
    for(int i = 1;i<=n;i++)
    {
        for(int j = 1;j<=n;j++)
        {
            dist[i][j]=min(dist[i][j],dist[i][k]+dist[k][j]);
        }
    }
}
*/
