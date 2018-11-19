#include <stdio.h> 

int main(){
	
	int n,i,num=1;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		num*=i;
		
	printf("%d",num);
	
	return 0;
}
