int main()
{
	int p,i;
	int P[1001];
	P[0]=0;
	P[1]=0;
	int n;
	scanf("%d",&n);
	p=n-1;
	for(i=2;i<=n;i++)
	{
		P[i]=i;
	}
	for(i=2;i<=n;i++)
	{
		if(i%2==0)
		{
			if(i!=2)
			{
				P[i]=0;
				p--;
			}
		}
		else if(i%3==0)
		{
			if(i!=3)
			{
				P[i]=0;
				p--;
			}
		}
		else if(i%5==0)
		{
			if(i!=5)
			{
				P[i]=0;
				p--;
			}
		}
		else if(i%7==0)
		{
			if(i!=7)
			{
				P[i]=0;
				p--;
			}
		}
	}
	printf("1부터 %d 까지의 소수의 개수 : %d개\n",n,p);
	for(i=1;i<=n;i++)
	{
		if(P[i]!=0)
		{
			printf(" %d ",i);
		}
		else
		{
			printf(" -  ");
		}
		if(i%10==0)
		{
			printf("\n");
		}
	}
}
