#include <stdio.h>

int main(){

	int n,i,j;
	
	scanf("%d",&n);
	
	if(n==1)
		printf("*");
	else{
		n=(n+1)/2;
		i=1;
		do{
			j=0;
			do{
				if(n-1!=0)
					printf(" ");
				j++;
			}while(j<n-1);
		
			j=0;
			do{
				printf("*");
				j++;
			}while(j<i*2-1);
			printf("\n");
			i++;
		}while(i<=n);
	
		i=n-1;
		do{
			if(i==0)
				break;
			j=0;
			do{
				if(n-1!=0)
					printf(" ");
				j++;
			}while(j<n-1);
			
			j=0;
			do{
				printf("*");
				j++;
			}while(j<i*2-1);
			printf("\n");
			i--;
		}while(i>0);
	}
	
	return 0;
}
