#include <stdio.h>
int main (){
	unsigned int N,sum;
	printf("Nhap mot so nguyen duong:");
	scanf("%u",&N);
	sum=0;
	for (int i=1;i<=N;i++){
		sum=sum+i; 
	}
	printf("Tong=%d",sum);
}

