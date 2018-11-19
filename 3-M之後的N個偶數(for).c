#include <stdio.h> 

int main(){
	
	int m,n,i;
	scanf("%d %d",&m,&n);
	if(m%2==0)
		for(i=1;i<=n;i++){
			printf("%d ",m);
			m+=2;			
		}
	else{
		m++;
		for(i=1;i<=n;i++){
			printf("%d ",m);
			m+=2;
		}
	}
		
	return 0;
}
