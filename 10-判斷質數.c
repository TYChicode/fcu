#include <stdio.h>
#include <math.h>

int main(){
	
	int n,i,j,k,num;
	
	scanf("%d",&n);
	for(i=0;i<n;i++){
		k=0;
		scanf("%d",&num);
		if(num==1)
			printf("N\n");
		else if(num==2)
			printf("Y\n");
		else{
			for(j=2;j<=sqrt(num);j++)
				if(num%j==0)
					k++;
			if(k==0)
				printf("Y\n");
			else
				printf("N\n");
		}
	}
	return 0;
}
