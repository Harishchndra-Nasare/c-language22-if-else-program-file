#include<stdio.h>
void main(){
	int num1,num2,num3,num4,num5,positive=0,negative=0;
	printf("Enter the number\n");
	scanf("%d %d %d %d %d",&num1,&num2,&num3,&num4,&num5);
	if(num1>0){
		positive++;
	}
	if(num2>0){
		positive++;
	}
	if(num3>0){
		positive++;
	}
	if(num4>0){
		positive++;
	}
	if(num5>0){
		positive++;
	}
	
	if(num1<0){
		negative++;
	}
	if(num2<0){
		negative++;
	}
	if(num3<0){
		negative++;
	}
	if(num4<0){
		negative++;
	}
	if(num5<0){
		negative++;
	}
	printf("count of the positive number is=%d\n",positive);
	printf("count of the negative number is=%d\n",negative);
}
