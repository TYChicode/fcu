#include <stdio.h>

int main(){

	char word;
	int A=0,E=0,I=0,O=0,U=0;

	while(scanf("%c",&word)!=EOF){
		if(word=='A'||word=='a')
			A++;
		if(word=='E'||word=='e')
			E++;
		if(word=='I'||word=='i')
			I++;
		if(word=='O'||word=='o')
			O++;
		if(word=='U'||word=='u')
			U++;
	}
	
	printf("%d %d %d %d %d",A,E,I,O,U);
	
	return 0;
}
