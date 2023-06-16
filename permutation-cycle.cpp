#include <cstdio>
using namespace std;

int arr[1001]={0,},print[10]={0,},a=0,b=0;
bool check[1001]={0,};

int function(int i)
{
    if(check[i]==0)
    {
        check[i]=1;
        a++;
        function(arr[i]);
    }
    return 0;
}

int main()
{
    int t,n,i,k,j=0;
    
    scanf("%d",&t);
    for(k=0;k<t;k++)
    {
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
            scanf("%d",&arr[i]);
            check[i]=0;
        }
        for(i=1;j<n;i++)
        {
            function(i);
            j=j+a;
            if(a!=0)
            {
                b++;
            }
            a=0;
        }
        print[k]=b;
        b=0;
        j=0;
        a=0;
    }
    for(i=0;i<t;i++)
    {
        printf("%d\n",print[i]);
    }
}
