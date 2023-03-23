#include <stdio.h>
#include <math.h>
int ln(int num){
	int n=0,x,w=0,m=0,v;
	float y;
	int i=num;
	while(i>=1){
		n+=1;
		i=i/10;}
		y=num/pow(10,n-1);
		x=y;
		
	while(y<=num){
		v=x-w;
		if(v>m){
			m=v;}
		w=x*10;
		y=y*10;
		x=y;
		}
	return m;}
int main()
{
	int z;
	scanf("%d",&z);
	printf("%d",ln(z));
	return 0;
}

