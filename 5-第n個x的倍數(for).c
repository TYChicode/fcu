#include <stdio.h>

int main(){
	
	int m,n,x,num,i;
	scanf("%d %d %d",&m,&n,&x);
	
	for(i=m;i%x!=0;i++)
		m++;
	num=m+(n-1)*x;

	printf("%d",num);
	
	
	return 0;
} 
