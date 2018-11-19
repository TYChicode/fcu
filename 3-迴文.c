#include <stdio.h>
#include <string.h>

int main(){
	char word[1001];
	int n,i,j;
	
	scanf("%d",&n);
	for(i=0;i<n;i++){
		int k=0;
		scanf("%s",&word);
		for(j=0;j<strlen(word);j++){
			if(word[j]==word[strlen(word)-1-j])
				k++;
		}
		if(k==strlen(word))
			printf("yes\n");
		else
			printf("no\n");
	}
	return 0;
} 
