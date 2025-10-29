#include <stdio.h>
int main (){
	int number,P=0;
	printf("Nhap vao so nguyen duong tu 1 den 10:");
	scanf("%d",&number);
	if (number>10){
		printf("vui long nhap tu 1 den 10 ");
	}else {
			for (int i=1;i<=10;i++){
		P=number*i;
		printf("\n%d*%d=%d",number,i,P);
	}

	}
	return 0;
}

