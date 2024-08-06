#include<stdio.h>
void main(){
	int i=1,n,j=1;
	printf("Enter the n lines number\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=1;j<=3;j++)
		printf("%d\n",j);
	}
	printf("\n");
}
