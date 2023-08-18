#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int main()
{
    int i,a,b,arr[21];
    for(i=1;i<=20;i++)
    {
        arr[i]=i;
    }
    for(i=0;i<10;i++)
    {
        scanf("%d %d",&a,&b);
        reverse(arr+a,arr+b+1);
    }
    for(i=1;i<=20;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
