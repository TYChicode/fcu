#include <stdio.h>
#include <string.h>

int main(){
	
	int n,num,i,j,sum=0;
	int id[26]={10,11,12,13,14,15,16,17,34,18,19,20,21,22,35,23,24,25,26,27,28,29,32,30,31,33};
	char a;
	
	scanf("%d%*c",&n);
	for(i=0;i<n;i++){
		scanf("%c%d%*c",&a,&num);
		sum=(id[a-65]%10)*9+(id[a-65]/10);
		sum+=num%10;
		num/=10;
		for(j=1;j<=8;j++){
			sum+=(num%10)*j;
			num/=10;
		}
		if(sum%10==0)
			printf("real\n");
		else
			printf("fake\n");
	}

	return 0;
} 
