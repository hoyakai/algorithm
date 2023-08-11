#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int n,i,b=9,s=0,h=0,a=0,z=0;
    char c[10]={0,};
    int bb[10]={0,},ss[10]={0,};
    scanf("%d",&n);
    getchar();
    for(i=0;i<n;i++)
    {
        scanf("%c",&c[i]);
        getchar();
    }
    for(i=0;i<n;i++)
    {
        if(c[i]=='<')
        {
            while(c[i+h]=='<')
            {
                h++;
            }
            z=i+h;
            while(h>=0)
            {
                bb[i+h]=b;
                b=b-1;
                h--;
            }
        }
        else if(c[i]=='>')
        {
            while(c[i+h]=='>')
            {
                h++;
            }
            z=i+h;
            while(h>a)
            {

                bb[i+a]=b;
                b=b-1;
                a++;
            }
        }
        i=z;
        h=0;
        a=0;
    }
    h=0;
    z=0;
    a=0;
    for(i=0;i<n;i++)
    {
        if(c[i]=='<')
        {
            while(c[i+h]=='<')
            {
                h++;
            }
            z=i+h;
            while(h>=a)
            {
                ss[i+a]=s;
                s=s+1;
                a++;
            }
        }
        else if(c[i]=='>')
        {
            while(c[i+h]=='>')
            {
                h++;
            }
            z=i+h;
            while(h>0)
            {
                ss[i+h]=s;
                s=s+1;
                h--;
            }
        }
        i=z;
        h=0;
        a=0;
    }
    for(i=0;i<=n;i++)
    {
        printf("%d",bb[i]);
    }
    printf("\n");
    for(i=0;i<=n;i++)
    {
        printf("%d",ss[i]);
    }
    return 0;
}
