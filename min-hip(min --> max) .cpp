#include <iostream>
#include <cstdio>
#include <queue>
using namespace std;

int main()
{
    priority_queue<int> pq;
    int n,c,x;
    cin >> n;
    c=n;
    while(c--)
    {
        cin >> x;
        pq.push(-x);
    }
    c=n;
    while(c--)
    {
        printf("%d ",-1* pq.top());
        pq.pop();
    }
    return 0;
}
