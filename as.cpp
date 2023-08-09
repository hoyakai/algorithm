#include <cstdio>
const int Lim = 105;
int N, A[Lim], st[Lim], ball[Lim];
int res;

int check(int a,int b,int c)
{
  int i,d,e,f,ss,bb;
  for(i=0;i<N;i++)
    d=A[i] / 100, e=(A[i]/10)%10,f=A[i]%10;
    ss = (a==d) + (b==e) + (c==f);
    bb = (a==e||a==f) + (b==d||b==f) + (c==d||c==e);
    if (st[i] != ss||ball[i] != bb) return 0;
return 1;
}

int main()
{
  scanf("%d",&N);
  int i,j,k;
  for(i=0;i<N;i++) scanf("%d%d%d",A+i,st+i,ball+i);
  for(i=1;i<10;i++){
    for(j=1;j<10;j++){
      for(k=1;k<10;k++){
        if(i!=k && j!=k){
          res += check(i,j,k);
        }
    }
}
}
printf("%d",res);
return 0;
}
