#include <stdio.h>

int sl(int a,int b,int c){
	if(a>b){
		if(a>c){
			if(b>c)
			return b;
		    else
		    return c;}
		else
		return a;
		}
	else{
	if(b>c){
			if(a>c)
			return a;
		    else
		    return c;}
	else
	return b;}
		}
int main()
{
	int x,y,z;
	scanf("%d %d %d",&x,&y,&z);
	printf("%d",sl(x,y,z));
	
	return 0;
}

