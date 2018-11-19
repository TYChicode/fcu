#include <stdio.h>

int main(){

	int num,quantity;
	float sum=0;
	
	do{
		scanf("%d %d",&num,&quantity);
		switch(num){
			case 1:
				sum+=quantity*2.98;
				break;
			case 2:
				sum+=quantity*4.5;
				break;
			case 3:
				sum+=quantity*9.98;
				break;
			case 4:
				sum+=quantity*4.49;
				break;
			case 5:
				sum+=quantity*6.87;
				break;
			default:
				break;
		}
	}while(num!=0||quantity!=0);
	printf("%.2f",sum);

	return 0;
}
