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
	int t = a; // du`ng d�? check lu~y thu`a	
	while ( t >=10){
		t /=10; //ti�nh toa�n t co� m�y chu~ s�� thi` k se~ tuong u�ng vo�i b�y nhi�u if 1234 <=> k = 1000
		k*=10; // k tang d�`n d�? ti�nh toa�n d�n ca�c s�� ti�p theo		
	} printf("Cac chu so tuong ung:");
	
	while ( k>= 1){
	    // chu~ s� ngoa`i cu`ng b�n tra�i tuong u�ng vo�i
	    int digit = a / k;
	    printf("%d",digit);
	    a %=k;
	    k/=10;
	}
	printf("\n");
	}
