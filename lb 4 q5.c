#include <stdio.h>

int larg(int a,int b,int c){
	if(a>b){
		if(a>c)
		return a;
		else
		return c;}
	else{
		if (b>c)
		return b;
		else
		return c;}}
int main()
{
	int x,y,z;
	scanf("%d %d %d",&x,&y,&z);
	printf("%d",larg(x,y,z));
	return 0;
}

