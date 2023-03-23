#include <stdio.h>

void series(int n,int i){
	int y=n,z=n;
	while(z>0){
		y=n-i;
		printf("%d ",y);
		i=i+5;
	z=y;}
	int x=y;
	i=5;
	while(x<n){
		x=x+i;
		printf("%d ",x);
		}
	}
int main()
{
	int num;
	scanf("%d",&num);
	series(num,0);
	return 0;
}

