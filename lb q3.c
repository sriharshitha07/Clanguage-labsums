#include <stdio.h>

int main()
{
	int num,numr=0;
	scanf("%d",&num);
	while(num>0){
		int ld=num%10;
		numr=numr*10+ld;
		num=num/10;
		}
	printf("%d",numr);
	return 0;
}

