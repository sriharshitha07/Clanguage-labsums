#include <stdio.h>

int main()
{
	int x,p=0,n=0,z=0;
	while(x!=999){
		scanf("%d",&x);
		if (x>0)
		{
		p+=1;}
		else if (x==0)
		{
		z+=1;}
		else
		{
		n+=1;}
		}
	printf("%d %d %d",p,n,z);
	return 0;
}

