#include <stdio.h>

int main()
{
	int n,k,p=0,q=0,r=0,m1=0,m2=0,m3=0;
	scanf("%d %d",&n,&k);
	for(int a=1;a<=n-1;a++){
		for(int b=a+1;b<=n;b++){
			p=a&b;
			q=a|b;
			r=a^b;
			if(p<k && p>m1)
			m1=p;
			if(q<k && q>m2)
			m2=q;
			if (r<k && r>m3)
			m3=r;
			}}
	printf("%d\n%d\n%d",m1,m2,m3);
	return 0;
}

