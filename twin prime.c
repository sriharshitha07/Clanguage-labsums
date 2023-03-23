#include <stdio.h>

int main()
{
	int c=0,m,n,y,z;
	scanf("%d %d",&n,&m);
	for(int i=n;i<=m;i++){
		for(int x=1;x<=i;x++){
			if(i%x==0){
			c+=1;}}
		if (c==2){
			z=i;
			if(z-2==y)
			printf("%d %d\n",i-2,i);
			y=i;}
	c=0;
	}
	
	return 0;
}

