#include <stdio.h>

int ci(int P,int r,int t){
	int y=1+r,z=1;
	for(int i=1;i<=t;i++){
		z=z*y;
		}
	int cp=P*z-P;
	return cp;
	}

int main()
{
	int P,r,t;
	scanf("%d %d %d",&P,&r,&t);
	printf("%d",ci(P,r,t));
	return 0;
}

