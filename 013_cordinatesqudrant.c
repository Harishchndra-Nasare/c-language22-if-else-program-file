#include<stdio.h>
void main(){
	float x,y;
	printf("Enter the x cordinates value\n");
	scanf("%f",&x);
	printf("Enter the y cordinates value\n");
	scanf("%f",&y);
	if(x>0 && y>0){
		printf("Qudrant-I");
	}else if(x<0 && y>0){
		printf("Qudrant-II");
	}else if(x<0 && y<0){
		printf("Qudrant-III");
	}else if(x>0 && y<0){
		printf("Qudrant-Iv");
	}
}
