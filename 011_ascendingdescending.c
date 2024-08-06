#include<stdio.h>
void main(){
	int num1,num2;
	printf("Enter the number1\n");
	scanf("%d",&num1);
	printf("Enter the number2\n");
	scanf("%d",&num2);
	if(num1<num2){
		printf("Number is ascending order");
	}else if(num1>num2){
		printf("Number is descending order");
	}
}
