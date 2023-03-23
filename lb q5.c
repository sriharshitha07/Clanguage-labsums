#include <stdio.h>

int main()
{
	int num,fact=1;
	scanf("%d",&num);
	for (int i=num;i>=1;i--){
		fact=fact*i;}
		printf("%d",fact);
	return 0;
}

