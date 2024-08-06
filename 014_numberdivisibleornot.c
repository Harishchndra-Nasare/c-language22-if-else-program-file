#include<stdio.h>
void main(){
	int num1,num2;
	printf("Enter the number1\n");
	scanf("%d",&num1);
	printf("Enter the number2\n");
	scanf("%d",&num2);
	if(num2!=0){
		if(num1%num2==0){
			printf("Number1 divisible by number2");
		}else{
			printf("Number1 is not divisible by number2");
		}
	}else{
			printf("division not allowed by zero");
		}
}
