#include <cstdio>

int main()
{
    int n,m,arr[10]={0,},i,a=0;
    scanf("%d %d",&n,&m);
    for(i=n-1;i>=0;i--)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        while(arr[i]<=m)
        {
            if(arr[i]/2>arr[i+1])
            {
                m=m-arr[i];
                a++;
            }
            else if(arr[i]%m!=0)
            {
                m=m-arr[i];
                a++;
            }
            else if(arr[i-1]%m==0)
            {
                i--;
                m=m-arr[i];
                a++;
            }
            else
            {
                m=m-arr[i];
                a++;
            }
        }
        if(m==0)
        {
            break;
        }
    }
    printf("%d",a);
}
