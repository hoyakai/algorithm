#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int n,i,a=9,b=5;
    scanf("%d",&n);
    if(n<2013)
    {
        for(i=2013;i!=n;i--)
        {
            if(a==0)
            {
                a=9;
            }
            else
            {
                a--;
            }
            if(b==0)
            {
                b=11;
            }
            else
            {
                b--;
            }
        }
    }
    else
    {
        for(i=2013;i!=n;i++)
        {
            if(a==9)
            {
                a=0;
            }
            else
            {
                a++;
            }
            if(b==11)
            {
                b=0;
            }
            else
            {
                b++;
            }
        }
    }
    if(b==0)
    {
        printf("A%d",a);
    }
    else if(b==1)
    {
        printf("B%d",a);
    }
    else if(b==2)
    {
        printf("C%d",a);
    }
    else if(b==3)
    {
        printf("D%d",a);
    }
    else if(b==4)
    {
        printf("E%d",a);
    }
    else if(b==5)
    {
        printf("F%d",a);
    }
    else if(b==6)
    {
        printf("G%d",a);
    }
    else if(b==7)
    {
        printf("H%d",a);
    }
    else if(b==8)
    {
        printf("I%d",a);
    }
    else if(b==9)
    {
        printf("J%d",a);
    }
    else if(b==10)
    {
        printf("K%d",a);
    }
    else if(b==11)
    {
        printf("L%d",a);
    }
    return 0;
}
