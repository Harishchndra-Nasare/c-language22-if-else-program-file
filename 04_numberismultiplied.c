#include<stdio.h>
void main(){
	int num1,num2,acceptedsum,actualsum;
	printf("Enter the number1\n");
	scanf("%d",&num1);
	printf("Enter the number2\n");
	scanf("%d",&num2);
	printf("Enter the accepted sum\n");
	scanf("%d",&acceptedsum);
	actualsum=num1*num2;
	if(actualsum==acceptedsum){
		printf("Number is multiplied %d \n",actualsum);
	}else{
		printf("Number is not multiplied");
	}
}
