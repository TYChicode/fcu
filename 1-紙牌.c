#include <stdio.h>
#include <string.h> 

int main(){
	
	int n,num[10],card[101],i,j,different;
	
	scanf("%d",&n);		//讀取總共有多少行測資 
	for(i=0;i<n;i++){	//用迴圈進行幾行處理 
		for(j=0;j<=100;j++)		//在數牌前先歸0 
			card[j]=0;			//歸0 
		
		for(j=0;j<10;j++){		//開始讀10張牌 
			scanf("%d",&num[j]);	 
			card[num[j]]++;			//把對應的數字+1 
		}
		different=1;			//算完後準備輸出，假設大家都不一樣 
		for(j=0;j<=100;j++){	//讀100個數字 
			if(card[j]>=2){		//如果數字出現兩次以上 
				printf("%d ",j);	//印出來 
				different=0;
			}
		}
		if(different==1)
			printf("They are different!");
		
		printf("\n");
	}
	
	
	return 0;
}
