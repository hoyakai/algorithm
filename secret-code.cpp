#include <iostream>
#include <cstdio>
#include <cstring>

char arr[5000];
int c = 0;

int function(int a)
{
	if(a<=0)
	{
		c++;
		return 0;
	}
	if(arr[a-1] == '1' || arr[a-1] == '2')
	{
		function(a-2);
		function(a-1);
		return 0;
	}
	function(a-1);
	return 0;
}

int main()
{
	int a;
	scanf("%s",arr);
	a = strlen(arr)-1;
	function(a);
	printf("%d",c);
	return 0;
}
