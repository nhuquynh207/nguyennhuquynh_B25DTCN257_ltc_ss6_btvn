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
	int t = a; // du`ng dê? check lu~y thu`a	
	while ( t >=10){
		t /=10; //ti´nh toa´n t co´ mâ´y chu~ sô´ thi` k se~ tuong u´ng vo´i bâ´y nhiêu if 1234 <=> k = 1000
		k*=10; // k tang dâ`n dê? ti´nh toa´n dê´n ca´c sô´ tiê´p theo		
	} printf("Cac chu so tuong ung:");
	
	while ( k>= 1){
	    // chu~ sô ngoa`i cu`ng bên tra´i tuong u´ng vo´i
	    int digit = a / k;
	    printf("%d",digit);
	    a %=k;
	    k/=10;
	}
	printf("\n");
	}
