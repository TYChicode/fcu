#include <stdio.h>

int calc(N){
	
	int i,pro=1;
	for(i=1;i<=N;i++)
		pro*=i;

	printf("%d\n",pro);
	
	return pro;
}


int main(){
	
	int N;
	
	scanf("%d",&N);
	calc(N);
	
	return 0;
} 
