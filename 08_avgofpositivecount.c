#include<stdio.h>
void main(){
	float num1,num2,num3,num4,num5,positivecount=0,num=0,apn;
	printf("Enter the number\n");
	scanf("%f %f %f %f %f",&num1,&num2,&num3,&num4,&num5);
	if(num1>0){
		positivecount++;
		num++;
	}
	if(num2>0){
		positivecount++;
		num+=num2;
	}
	if(num3>0){
		positivecount++;
		num+=num3;
	}
	if(num4>0){
		positivecount++;
		num+=num4;
	}
	if(num5>0){
		positivecount++;
		num+=num5;
	}
	apn=(num)/(positivecount);
	printf("The avrage of positive count is=%f",apn);
	
}
