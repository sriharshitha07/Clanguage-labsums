#include <stdio.h>
#include <math.h>
int main()
{
	int z,n=0,x,w=0;
	float y;
	scanf("%d",&z);
	int i=z;
	while(i>=1){
		n+=1;
		i=i/10;}
		y=z/pow(10,n-1);
		x=y;
		
	while(y<=z){
		if(x-w==1)
		printf(" one");
		else if(x-w==2)
		printf(" two");
		else if(x-w==3)
		printf(" three");
		else if(x-w==4)
		printf(" four");
		else if(x-w==5)
		printf(" five");
		else if(x-w==6)
		printf(" six");
		else if(x-w==7)
		printf(" seven");
		else if(x-w==8)
		printf(" eight");
		else if(x-w==9)
		printf(" nine");
		else
		printf(" zero");
		w=x*10;
		y=y*10;
		x=y;
		}
	return 0;
}
