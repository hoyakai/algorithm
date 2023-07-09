#include <cstdio>
#include <vector>
#include <cstring>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int m,n,i,j,i2,j2,k,a,b=0;
    vector<int> v[2000],v2[2000];
    scanf("%d %d",&m,&n);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%1d",&a);
            v[i].push_back(a);
            v2[i].push_back(0);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(i==0)
            {
                v2[j][i]=v[j][i];
            }
            else
            {
                i2=i-1;
                for(j2=max(0,j-1);j2<min(m,j+2);j2++)
                {
                    if(abs(j-j2) <= i-i2 && i>i2)
                    {
                        if(v2[j2][i2]>v2[j][i])
                        {
                            v2[j][i]=v2[j2][i2];
                            if(b<v2[j][i])
                            {
                                b=v2[j][i];
                            }
                        }
                    }
                }
                v2[j][i]=v2[j][i]+v[j][i];
            }
        }
    }
    printf("%d",b);
}
