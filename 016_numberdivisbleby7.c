#include<stdio.h>
void main(){
	int i,num1,num2;
	printf("Enter starting number\n");
	scanf("%d",&num1);
	printf("Enter ending number\n");
	scanf("%d",&num2);
	for(i=num1;i<=num2;i++){
		if(i%7==2 || i%7==3){
			printf("Number dividing by 7 is=%d\n",i);
		}
	}
}
