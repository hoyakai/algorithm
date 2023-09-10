#include <iostream>
#include <cstdio>
using namespace std;

int p[201];

int find(int x)
{
    if(x==p[x])
    {
        return x;
    }
    else
    {
        return p[x] = find(p[x]);
    }
}

void u(int x,int y)
{
    x=find(x);
    y=find(y);
    p[y] = x;
}

int main()
{
    int n,m,i,j;
    int arr[1000];
    int check[200][200];
    for(i=0;i<=200;i++)
    {
        p[i]=i;
    }
    scanf("%d",&n);
    scanf("%d",&m);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            scanf("%d",&check[i][j]);
            if(check[i][j]==1)
            {
                u(j,i);
            }
        }
    }
    for(i=0;i<m;i++)
    {
        scanf("%d",&arr[i]);
    }
    i=m;
    while(i>1)
    {
        if(find(arr[m-i])==find(arr[m-i+1]))
        {
            i--;
        }
        else
        {
            break;
        }
    }
    if(i==1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}
