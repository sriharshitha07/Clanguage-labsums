#include <stdio.h>
int s=0;
int sum(int n){
	for(int i=1;i<=n;i++){
		s=s+i;
	}
	return s;
	}
int main()
{
	int x;
	scanf("%d",&x);
	printf("%d",sum(x));
	return 0;
}

