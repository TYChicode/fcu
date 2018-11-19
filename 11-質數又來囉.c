#include <stdio.h>
#include <math.h>

int prime(i){
	int val,j,num,k;
	num = i;
	k=0;
	if(num==1)
		val = 0;
	else if(num==2)
		val = 1;
	else{
		for(j=2;j<=sqrt(num);j++)
			if(num%j==0)
				k++;
		if(k==0)
			val = 1;
		else
			val = 0;
	}
	return val;
}

int main(){
	int a,b,i,y=0;
	
	scanf("%d %d",&a,&b);
	for(i=a;i<=b;i++)
		if(prime(i))
			y++;
	
	printf("%d\n",y);
	
	return 0;
}
