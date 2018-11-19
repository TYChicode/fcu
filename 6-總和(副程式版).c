#include <stdio.h> 

int sum(M,N){
	
	int sum1,i,a;
	if(M>N){
		a=M;
		M=N;
		N=a;
	}
	for(i=M;i<=N;i++)
		sum1+=i;

	printf("%d\n",sum1);
	
	return sum1;
}

int main(){
	
	int M,N;
	
	scanf("%d %d",&M,&N);
	sum(M,N);	
	return 0;
}

