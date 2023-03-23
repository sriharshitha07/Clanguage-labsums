#include <stdio.h>
float sum=0;
void series(int n){
	for (int i=1;i<=n;i++){
		float fact=1,pow=1;
		for(int j=i;j>=1;j--){
			fact=fact*j;}
		for(int k=1;k<=i;k++){
			pow=pow*i;}
		float y=pow/fact;
		sum=sum+y;}
		printf("%f",sum);
	}

int main()
{
	int x;
	scanf("%d",&x);
	series(x);
	return 0;
}

