#include <stdio.h>

int sum(int a, int b){
	 int sum=a+b;
	 return sum;}
int main()
{
	int x,y;
	scanf("%d %d",&x,&y);
	printf("%d",sum(x,y));
	
	return 0;
}

