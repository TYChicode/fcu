#include <stdio.h>

int main(){
	
	int n,pro=1;
	
	scanf("%d",&n);
	do{
		pro*=n;
		n--;
	}while(n>=1);
	printf("%d",pro);
	
	return 0;
} 
