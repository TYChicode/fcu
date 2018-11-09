#include <stdio.h>

int main(){
	char letter;
	int num[10];
	int cases,k,n,i,j,ans;
	scanf ("%d",&cases);
	for (k = 1;k <= cases;k++){
		scanf ("%1s%d",&letter,&n);
		switch (letter){
			case 'A': i = 10; break;
			case 'B': i = 11; break;
			case 'C': i = 12; break;
			case 'D': i = 13; break;
			case 'E': i = 14; break;
			case 'F': i = 15; break;
			case 'G': i = 16; break;
			case 'H': i = 17; break;
			case 'I': i = 34; break;
			case 'J': i = 18; break;
			case 'K': i = 19; break;
			case 'L': i = 20; break;
			case 'M': i = 21; break;
			case 'N': i = 22; break;
			case 'O': i = 35; break;
			case 'P': i = 23; break;
			case 'Q': i = 24; break;
			case 'R': i = 25; break;
			case 'S': i = 26; break;
			case 'T': i = 27; break;
			case 'U': i = 28; break;
			case 'V': i = 29; break;
			case 'W': i = 32; break;
			case 'X': i = 30; break;
			case 'Y': i = 31; break;
			case 'Z': i = 33; break;
		}
		num[0] = i / 10;
		num[1] = i % 10;
		for (j = 10;j >= 2;j--){
			num[j] = n % 10;
			n /= 10;
		}
		ans = i / 10 + num[10];
		for (j = 1;j <= 9;j++){
			ans += num[j] * (10 - j);
		}
		if (ans % 10 == 0) {
			printf ("real\n");
		}
		else if (ans % 10 != 0){
			printf ("fake\n");
		} 
	}
	return 0;
}
