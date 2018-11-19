#include <stdio.h>

int main(){
	
	int n,i,j;
	char M;
	
	scanf("%d %c",&n,&M);
	switch(M){
		case 'A':
			for(i=1;i<=n;i++){
				for(j=1;j<=i;j++)
					printf("*");
				printf("\n");
			}
		case 'B':
			for(i=1;i<=n;i++){
				for(j=n-i+1;j>=1;j--)
					printf("*");
				printf("\n");
			}
		
/*		case 'C':
			for(i=1;i<=n;i++)
				
		
		case 'D': 
*/		

	}
	
	
	
	return 0;
}  
