#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int main()
{
    
    int n,s,i,a=1,b,m=0,c=0,h=0;
    int arr[21];
    scanf("%d",&n);
    scanf("%d",&s);
    b=n;
    for(i=1;i<=n;i++)
    {
        scanf("%d",&arr[i]);
    }
    sort(arr+1,arr+n+1);
    while(a<b)
    {
        for(i=a;i<b;i++)
        {
            m=m+arr[i];
        }
        if(s-m==0)
        {
            c++;
            if(arr[a]==0 || arr[b-1]==0)
            {
                while(1)
                {
                    if(arr[a]==0)
                    {
                        a++;
                        c++;
                    }
                    else if(arr[b-1]==0)
                    {
                        b--;
                        c++;
                    }
                    else
                    {
                        break;
                    }
                }
            }
            else
            {
                a++;
            }
            if(h==1)
            {
                c++;
            }
        }
        else if(s-m<0)
        {
            b--;
            h=0;
            if((2*s)-m==0)
            {
                h=1;
            }
        }
        else
        {
            a++;
            h=0;
            if((2*s)-m==0)
            {
                h=1;
            }
        }
        m=0;
        //printf("1");
    }
    printf("%d",c);
    return 0;
}
