#include <iostream>
#include <cstdio>
using namespace std;

int n,m,arr[101][101];

int main()
{
    int i,j,k,a,b,c=0;
    scanf("%d",&n);
    scanf("%d",&m);
    for(i=1;i<=m;i++)
    {
        scanf("%d %d",&a,&b);
        arr[a][b]=1;
        arr[b][a]=-1;
    }
    for(k=1;k<=n;k++)
    {
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
                if(arr[i][j]==1)
                {
                    if(arr[j][k]==1 || arr[k][j]==-1)
                    {
                        arr[i][k]=1;
                        arr[k][i]=-1;
                    }
                    if(arr[k][i]==1 || arr[i][k]==-1)
                    {
                        arr[k][j]=1;
                        arr[j][k]=-1;
                    }
                }
                else if(arr[i][j]==-1)
                {
                    if(arr[j][k]==-1 || arr[k][j]==1)
                    {
                        arr[i][k]=-1;
                        arr[k][i]=1;
                    }
                    if(arr[k][i]==-1 || arr[i][k]==1)
                    {
                        arr[k][j]=-1;
                        arr[j][k]=1;
                    }
                }
            }
        }
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i!=j)
            {
                if(arr[i][j]==0)
                {
                    c++;
                }
            }
        }
        printf("%d\n",c);
        c=0;
    }
    return 0;
}
