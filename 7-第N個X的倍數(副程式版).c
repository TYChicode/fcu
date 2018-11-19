#include <stdio.h>

int theXthNumber(M,N,X){
	
	int i,num;
	for(i=M;i%X!=0;i++)
		M++;
	num=M+(N-1)*X;

	printf("%d\n",num);

	return num;
}

int main(){
	
	int M,N,X;
	scanf("%d %d %d",&M,&N,&X);
	theXthNumber(M,N,X);
	
	
	return 0;
}

