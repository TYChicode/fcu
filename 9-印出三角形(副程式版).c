#include <stdio.h>

void printTriangle(){

	int i,j,k,N;
	char M,a='A',b='B',c='C',d='D';
	scanf("%d %c",&N,&M);
	
	if(M==a){
		for(i=1;i<=N;i++){
			for(j=1;j<=i;j++)
				printf("*");
			printf("\n");
		}
	}
	if(M==b){
		for(i=N;i>=1;i--){
			for(j=i;j>=1;j--)
				printf("*");
			printf("\n");
		}
	}
	if(M==c){
		for(i=N;i>=1;i--){
			for (k=i;k>=1;k--)
				printf("*");
			printf("\n");
			for (j=0;j<=N-i;j++)
				printf(" ");
		}
	}
	if(M==d){
		for(i=1;i<=N;i++){
			for(j=1;j<=N-i;j++)
				printf(" ");
			for(k=1;k<=i;k++)
				printf("*");
			printf("\n");
		}
	}
	
}

int main()
{
	printTriangle();
	return 0; 
}



