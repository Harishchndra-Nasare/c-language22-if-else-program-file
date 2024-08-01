#include<stdio.h>
void main(){
	int sum,num1,num2,num3,num4,num5;
	printf("Enter the 5 number\n");
	scanf("%d %d %d %d %d",&num1,&num2,&num3,&num4,&num5);
	if(num1%2!=0){
		sum=sum+num1;
	} if(num2%2!=0){
		sum=sum+num2;
	}if(num3%2!=0){
		sum=sum+num3;
	}if(num4%2!=0){
		sum=sum+num4;
	}if(num5%2!=0){
		sum=sum+num5;
	}
		printf("The sum of total odd value is=%d",sum);
	}
	
