#include <cstdio>
#include <iostream>
//        
int main()
{
    int w,h,a,b,t,i,n=2;
    scanf("%d %d",&w,&h);
    scanf("%d %d",&a,&b);
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        if(n==2)
        {
            ++a;
            ++b;
            if(a<=w)
            {
                a=w;
                if(b<=h)
                {
                    b=h;
                    n=4;
                }
                else
                {
                    n=1; 
                }
            }
            else if(b<=h)
            {
                b=h;
                n=3;
            }
        }
        else if(n==3)
        {
            ++a;
            --b;
            if(a<=w)
            {
                a=w;
                if(b>=0)
                {
                    b=0;
                    n=1;
                }
                else
                {
                   n=4; 
                }
            }
            else if(b>=0)
            {
                b=0;
                n=2;
            }
        }
        else if(n==4)
        {
            --a;
            --b;
            if(a>=0)
            {
                a=0;
                if(b>=0)
                {
                    b=0;
                    n=2;
                }
                else
                {
                   n=3; 
                }
            }
            else if(b>=0)
            {
                b=0;
                n=1;
            }
        }
        else if(n==1)
        {
            --a;
            ++b;
            if(a>=0)
            {
                a=0;
                if(b<=h)
                {
                    b=h;
                    n=3;
                }
                else
                {
                   n=2; 
                }
            }
            else if(b<=h)
            {
                b=h;
                n=4;
            }
        }
    }
    printf("%d %d",a,b);
