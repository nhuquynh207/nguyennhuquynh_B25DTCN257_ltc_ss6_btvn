#include <stdio.h>
int main (){
	 int a, b;  // Nhap 2 so nguyên duong
    printf("Nhap so thu nhat: ");
    scanf("%d", &a);
    printf("Nhap so thu hai:");
    scanf("%d",&b);
    if (a <= 0 || b <= 0) {
        printf("Vui long nhap hai so nguyen duong!\n");
        return 1;
    }
    int x = a, y = b; //luu gia tri goc
    while (a != b) {
        if (a > b)
            a = a- b;
        else
            b = b - a;
    }
    int bcnn,ucln=a; //a==b==UCLN
    bcnn=(x*y)/ucln;
    printf("Boi chung nho nhat cua hai so là:%d\n",bcnn);
    return 0;
}

