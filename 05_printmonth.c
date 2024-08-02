#include<stdio.h>
void main(){
	int num;
	printf("Enter the number\n");
	scanf("%d",&num);
	if(num>0 && num<=12){
		printf("Print the number\n%d\n",num);
	}if(num==1){
		printf("Jan");
	}if(num==2){
		printf("Feb");
	}if(num==3){
		printf("March");
	}if(num==4){
		printf("Apr");
	}if(num==5){
		printf("May");
	}if(num==6){
		printf("June");
	}if(num==7){
		printf("July");
	}if(num==8){
		printf("Aug");
	}if(num==9){
		printf("Sept");
	}if(num==10){
		printf("Oct");
	}if(num==11){
		printf("Nov");
	}if(num==12){
		printf("Dec");
	}
}
