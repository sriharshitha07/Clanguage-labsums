#include <stdio.h>
void fib(int n)
{
	int a=1,b=1,c;
	printf("%d %d",a,b);
	for(int i=1;i<=n;i++){
		printf(" %d",a+b);
		c=a+b;
		a=b;
		b=c;
		}
	
}

int main()
{
	int x;
	scanf("%d",&x);
	fib(x);
	return 0;
}

