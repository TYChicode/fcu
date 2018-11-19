#include <stdio.h>

int main(){
	
	int m,n,x,i,sum=0;
	scanf("%d %d %d",&m,&n,&x);
	for(i=m;i<=n;i++)
		if(i%x==0)
			sum+=i;
	
	printf("%d",sum);
	
	
	return 0;
} 
