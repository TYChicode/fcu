#include <stdio.h>
#include <string.h>

int main(){
	
	int n,i,j,A,E,I,O,U;
	char word[1001];
	
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",&word);
		A=E=I=O=U=0;
		for(j=0;j<strlen(word);j++)
			switch(word[j]){
				case 'A':case 'a':
					A++;
					break;
				case 'E':case 'e':
					E++;
					break;
				case 'I':case 'i':
					I++;
					break;
				case 'O':case 'o':
					O++;
					break;
				case 'U':case 'u':
					U++;
					break;
			}
	
		printf("%d %d %d %d %d\n",A,E,I,O,U);
	}
	
	return 0;
} 
