#include <stdio.h>

int main(){
	int arr[100];
	int maxSize,n,y,choice,check=-1;
	printf("\tMENU\n");
	printf("1.Nhap so phan tu can nhap va gia tri cac phan tu\n");
	printf("2.In ra cac gia tri dang quan li\n");
	printf("3.In ra gia tri lon nhat trong mang\n");
	printf("4.In ra so nguyen to trong mang\n");
	printf("5.Them mot phan tu vao trong mang\n");
	printf("6.Xoa phan tu trong mang\n");
	printf("7.Sap xep mang theo thu tu tang dan\n");
	printf("8.Tim kiem phan tu (nguoi dung nhap) va in ra vi tri cua phan tu do\n");
	printf("9.Thoat\n");
	for(int i = 1; i <= 9; i++){
		printf("Hay nhap lua chon cua ban : ");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				printf("Moi ban nhap so phan tu can nhap: \n");
				scanf("%d",&maxSize);
				for(int i = 0; i < maxSize; i++ ){
					printf("Hay nhap phan tu ban muon: \n");
					scanf("%d",&arr[i]);
				}
				break;
			case 2:
				printf("Cac gia tri trong mang: \n");
				for(int i = 0; i < maxSize; i++){
					printf("%2d",arr[i]);
				}
				break;
			case 3:
				int max;
				for(int i = 0; i < maxSize; i++){
					if(max<arr[i]){
						max=arr[i];
					}
				}
				printf("Gia tri lon nhat trong mang la: %d\n",max);
				break;
			case 4:
				int songuyento;
				printf("So nguyen to co trong mang: \n");
				for(int i = 0; i < maxSize; i++){
					if( arr[i]%2!=0 && arr[i]%3!=0 && arr[i]%5!=0){
						songuyento = arr[i];
						printf("%3d",songuyento);
					}
				}
				break;
			case 5:
				int index;
				printf("Ban muon them phan tu nao vao trong mang: \n");
				scanf("%d",&n);
				printf("Vi tri ban muon them phan tu vao mang: \n");
				scanf("%d",&index);
				while(index<0 || index>maxSize){
					scanf("%d",&index);
				}
				for(int i = maxSize; i > index; i--){
					arr[i] = arr[i - 1];
				}
				arr[index] = n;
				printf("Mang sau khi them gia tri theo yeu cau: \n");
				for(int i = 0; i < maxSize + 1 ; i++){
					printf("%3d",arr[i]);
				}
				break;
			case 6:
				printf("Ban muon xoa phan tu bao nhieu trong mang: \n");
				scanf("%d",&index);
				while(index < 0 || index > maxSize){
					scanf("%d",&index);
				}
				for( int i = index; i < maxSize; i++ ){
					arr[i] = arr[i + 1];
				}
				printf("Mang sau khi duoc chinh sua: \n");
				for(int i = 0; i < maxSize ; i++){
					printf("%3d",arr[i]);
				}
				break;
			case 7:
				for( int i = 0; i < maxSize -1 ; i++ ){
					for( int j = 0; j < maxSize - i - 1; j++){
						if(arr[j] > arr[j +1]){
						int temp = arr[j];
						arr[j] = arr[j + 1];
						arr[j + 1] = temp;
						}
					}
				}
				printf("Mang sau khi duoc sap xep theo trinh tu: \n");
				for( int i = 0; i < maxSize ; i++){
					printf("%3d",arr[i]);
				}
				break;
			case 8:
				printf("Ban muon tim kiem phan tu nao trong mang: \n");
				scanf("%d",&y);
				for(int i = 0; i < maxSize; i++){
					if(y == arr[i]){
						check++;
						index = i;
						break;
					}
				}
				if(check!=-1){
					printf("Phan tu ban dang tim kiem ( %d ) nam o vi tri %d trong mang\n",y,index);
				}else{
					printf("Phan tu khong ton tai trong mang\n");
				}
				break;
			case 9:
				printf("Dang roi khoi chuong trinh\n");
				return 0;
		}
	}
	return 0;
}

