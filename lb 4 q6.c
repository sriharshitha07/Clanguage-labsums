#include <stdio.h>
int f=1;
int fact(int n){
	for(int i=n;i>=1;i--){
		f=f*i;
		}
		return f;}

int main()
{
	int x;
	scanf("%d",&x);
	printf("%d",fact(x));
	return 0;
}

