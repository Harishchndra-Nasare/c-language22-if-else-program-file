#include<stdio.h>
void main(){
	int num;
	printf("Enter the number\n");
	scanf("%d",&num);
	if(num<0 || num>80){
		printf("Error");
	}
}
