#include <stdio.h>
#include <math.h>

void slove(){
	float a,b,c,x,x1,x2,D;
	scanf("%f %f %f",&a,&b,&c);
	
	D=b*b-4*a*c;
	if(D>0){
		x1=(-b+sqrt(D))/(2*a);
		x2=(-b-sqrt(D))/(2*a);
		printf("Two different roots x1=%.f , x2=%.f",x1,x2);
	}
	else if(D==0){
		x=-b/(2*a);
		if(x<1&&x>-1)
			x=0;
		printf("Two same roots x=%.f",x);
	}
	else
		printf("No real root");
}

int main(){
	
	slove();

	return 0;
} 
