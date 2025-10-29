#include <stdio.h>
int main (){
	int number_1,number_2,choose;
	printf("Nhap so thu nhat:");
	scanf("%d",&number_1);
	printf("Nhap so thu hai:");
	scanf("%d",&number_2);
	printf("Chon Menu:"); //1.Tong 2 so  2.Hieu 2 so  3.Tich 2 so  4.Thuong 2 so  5.Thoat
	scanf("%d",&choose);
	while (choose!=5){
		switch (choose) {
			case 1:
				printf("\nTong:%d+%d=%d",number_1,number_2,number_1+number_2);
				printf("\nChon Menu:"); //1.Tong 2 so  2.Hieu 2 so  3.Tich 2 so  4.Thuong 2 so  5.Thoat
				scanf("%d",&choose);
			    break;
			case 2:
				printf("\nHieu:%d-%d=%d",number_1,number_2,number_1-number_2);
				printf("\nChon Menu:"); //1.Tong 2 so  2.Hieu 2 so  3.Tich 2 so  4.Thuong 2 so  5.Thoat
				scanf("%d",&choose);
				break;
			case 3:
				printf("\nTich:%d*%d=%d",number_1,number_2,number_1*number_2);
				printf("\nChon Menu:"); //1.Tong 2 so  2.Hieu 2 so  3.Tich 2 so  4.Thuong 2 so  5.Thoat
				scanf("%d",&choose);
				break;
			case 4:
				printf("\nThuong:%d/%d=%d",number_1,number_2,number_1/number_2);
				printf("\nChon Menu:"); //1.Tong 2 so  2.Hieu 2 so  3.Tich 2 so  4.Thuong 2 so  5.Thoat
				scanf("%d",&choose);
				break;
			default:
				printf("Khong co lua chon");
				printf("\nChon Menu:"); //1.Tong 2 so  2.Hieu 2 so  3.Tich 2 so  4.Thuong 2 so  5.Thoat
				scanf("%d",&choose);
				break;
	}
	}
	printf("5.Thoat");
	
	}

