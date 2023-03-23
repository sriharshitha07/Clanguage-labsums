#include <stdio.h>
int main()
{
	int a=1,b=1,c;
	printf("%d %d",a,b);
	while(a+b<=150){
		printf(" %d",a+b);
		c=a+b;
		a=b;
		b=c;
		}
	return 0;
}

