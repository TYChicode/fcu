#include <stdio.h>
#include <string.h> 

int main(){
	
	int n,num[10],card[101],i,j,different;
	
	scanf("%d",&n);		//Ū���`�@���h�֦���� 
	for(i=0;i<n;i++){	//�ΰj��i��X��B�z 
		for(j=0;j<=100;j++)		//�b�ƵP�e���k0 
			card[j]=0;			//�k0 
		
		for(j=0;j<10;j++){		//�}�lŪ10�i�P 
			scanf("%d",&num[j]);	 
			card[num[j]]++;			//��������Ʀr+1 
		}
		different=1;			//�⧹��ǳƿ�X�A���]�j�a�����@�� 
		for(j=0;j<=100;j++){	//Ū100�ӼƦr 
			if(card[j]>=2){		//�p�G�Ʀr�X�{�⦸�H�W 
				printf("%d ",j);	//�L�X�� 
				different=0;
			}
		}
		if(different==1)
			printf("They are different!");
		
		printf("\n");
	}
	
	
	return 0;
}
