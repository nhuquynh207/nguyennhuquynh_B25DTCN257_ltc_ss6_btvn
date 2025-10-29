#include <stdio.h>
int main (){
	for(int i=1;i<=9;i++){
		printf("\nbang cuu chuong cua %d:",i);
		for (int j=1;j<=10;j++){
			printf("\n %d x %d= %d",j,i,j*i);
	    }
	printf("\n============================");
	}
	return 0;
}

