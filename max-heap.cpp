#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int heap[100001];
int hn;

void push(int x)
{
    int i;
    heap[++hn] = x;
    for(i=hn;i>1;i/=2)
    {
        if(heap[i/2] < heap[i])
        {
            swap(heap[i/2],heap[i]);
        }
        else
        {
            break;
        }
    }
}

int pop()
{
    int i;
    int ans = heap[1];
    heap[1] = heap[hn];
    heap[hn--] = 0;
    for(i=1;i*2 <= hn;)
    {
        if(heap[i] > heap[i*2] && heap[i] > heap[i*2+1])
        {
            
        }
        else if(heap[i*2] > heap[i*2+1])
        {
            swap(heap[i],heap[i*2]);
            i=i*2;
        }
        else
        {
            swap(heap[i],heap[i*2+1]);
            i=i*2+1;
        }
    }
    return ans;
}

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int x;
        scanf("%d"&x);
        if(x == 0)
        {
            if(hn==0)
            {
                printf("0\n");
            }
            else
            {
                printf("%d\n",pop());
            }
        }
        else
        {
            push(x);
        }
    }
    return 0;
}
