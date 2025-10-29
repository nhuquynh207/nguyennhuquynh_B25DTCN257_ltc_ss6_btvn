#include <stdio.h>
#include <math.h>
#include <stdio.h>
int main (){
	int choice,sum,a,b,c,TBC,flag=0;
	do {
		printf("=========MENU=========\n");
		printf("1.Nhap 3 so \n");//nhap 3 so nguyen
		printf("2.Tong 3 so \n");//tinh va in tong
		printf("3.Trung binh cong 3 so\n");//tính va in tbc
		printf("4.So nho nhat\n");// tìm va in snn
		printf("5.So lon nhat\n"); //tim va in so max
		printf("6.Thoat\n");
		printf("Nhap lua chon :");
		scanf("%d",&choice);
		switch (choice) {
			case 1:
				printf("Nhap so thu nhat:");
				scanf("%d",&a);
				printf("Nhap vao so thu hai:");
				scanf("%d",&b);
				printf("Nhap vao so thu ba:");
				scanf("%d",&c);
				flag=1;
				break;
			case 2:
				if (!flag){
					printf("Vui long nhap 3 so nguyen truoc\n");
				}else {
					sum=a+b+c;
					printf("Tong 3 so =%d\n",sum);
				}
				break;
			case 3:
			if (!flag) {
                    printf("Vui long nhap 3 so truoc!\n");
                } else {
                    float TBC = (a + b + c) / 3.0;
                    printf("Trung binh cong = %.2f\n", TBC);
                }
                break;

            case 4:
                if (!flag) {
                    printf("Vui long nhap 3 so truoc!\n");
                } else {
                    int min = a;
                    if (b < min) min = b;
                    if (c < min) min = c;
                    printf("So nho nhat la: %d\n", min);
                }
                break;

            case 5:
                if (!flag) {
                    printf("Vui long nhap 3 so truoc!\n");
                } else {
                    int max = a;
                    if (b > max) max = b;
                    if (c > max) max = c;
                    printf("So lon nhat la: %d\n", max);
                }
                break;

            case 6:
                printf("Thoat chuong trinh.\n");
                break;

            default:
                printf("Lua chon khong hop le! Vui long nhap tu 1 den 6.\n");
        }
    } while (choice != 6);

    return 0;	
	}
	


