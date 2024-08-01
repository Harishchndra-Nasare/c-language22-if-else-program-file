#include<stdio.h>
void main(){
	float a,b,c,pt;
	printf("Enter the three floating values\n");
	scanf("%f %f %f",&a,&b,&c);
	if(a+b>c || a+c>b ||b+c>a){
		printf("It make triangle\n");
		pt=a+b+c;
		printf("parameter of triangle is=%f",pt);
	}
}
