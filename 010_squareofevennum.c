#include<stdio.h>
void main(){
int i,value,square;
printf("Enter the value\n");
scanf("%d",&value);
for(i=1;i<=value;i++){
	printf("%d\n",i);
	if(i%2==0){
		square=i*i;
		printf("even values are %d\n",i);
		printf("square of even value is=%d\n",square);
	}
}
}
