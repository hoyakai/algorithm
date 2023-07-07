#include <cstdio>
#include <algorithm>
#include <vector>
#include <utility>
using namespace std;

int main()
{
    int n,x,y,i,a=0,b=0;
    vector<pair<int,int>> v;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&x,&y);
        v.push_back({y,x});
    }
    sort(v.begin(),v.end());
    for(i=0;i<n;i++)
    {
        if(v[i].second>=b)
        {
            a++;
            b=v[i].first;
        }
    }
    printf("%d",a);
}
