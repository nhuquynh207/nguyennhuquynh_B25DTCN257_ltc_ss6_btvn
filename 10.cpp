#include <stdio.h>
#include <math.h>
int main ( ){
	
	int a;
	int k = 1;
	printf("Nhap so a:");
	scanf("%d",&a);
	
	if(a == 0){
		printf("sai roi nhap so khac di");
	} else if (a<0){
		printf("-");
		a = abs(a);
	}
	int t = a; 
	while ( t >=10){
		t /=10; 
		k*=10; 
	} printf("Cac chu so tuong ung:");
	
	while ( k>= 1){
	    int digit = a / k;
	    printf("%d",digit);
	    a %=k;
	    k/=10;
	}
	printf("\n");
	}
