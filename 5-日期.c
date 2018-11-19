#include <stdio.h>

int main(){
	
	int month,day;
		
	scanf("%d/%d",&month,&day);
	switch(month){
		case 1:
			printf("January ");
			break;
		case 2:
			printf("February ");
			break;
		case 3:
			printf("March ");
			break;
		case 4:
			printf("April ");
			break;
		case 5:
			printf("May ");
			break;
		case 6:
			printf("June ");
			break;
		case 7:
			printf("July ");
			break;
		case 8:
			printf("August ");
			break;
		case 9:
			printf("September ");
			break;
		case 10:
			printf("October ");
			break;
		case 11:
			printf("November ");
			break;
		case 12:
			printf("December ");	
			break;
	}
	
	switch(day){
		case 1:
			printf("1st");
			break;
		case 2:
			printf("2nd");
			break;
		case 3:
			printf("3rd");
			break;
		case 21:
			printf("21st");
			break;
		case 22:
			printf("22nd");
			break;
		case 23:
			printf("23rd");
			break;
		case 31:
			printf("31st");
			break;
		default:
			printf("%dth",day);
	}
	
	return 0;
}
