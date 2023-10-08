#include <iostream>
#include <cstdio>
#include <queue>
#include <algorithm>
using namespace std;

int main()
{
    priority_queue<int> pq,ab;
    int n,c=0,x,a,b,i;
    cin >> n;
    for(i=0;i<n;i++)
    {
        cin >> x;
        pq.push(-x);
    }
    for(i=0;i<n-1;i++)
    {
        a=-pq.top();
        pq.pop();
        b=-pq.top();
        pq.pop();
        pq.push(-a-b);
        c=c+a+b;
    }
    printf("%d",c);
    return 0;
}
