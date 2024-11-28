#include<stdio.h>

int main(){
	// khai bao mang
	int arr[2][3]={{1,2,3},{7,8,9}};
	// cho nguoi dung nhap va khai bao bien luu de gan
	int num;
	int stop=0;
	printf("Ban hay nhap vao 1 so mà ban nghi co trong mang: ");
	scanf("%d", &num);
	// kiem tra va so sanh xem co khong
	for(int i=0; i<2; i++){
		for( int j=0; j<3; j++){
			if(num==arr[i][j]){
				printf("Vi tri phan tu [%d][%d]: \n", i, j);
				stop=1;
				break;
			}
			if(stop){
				break;
			}
		}
    } 
    if(!stop){
    	printf("Khong co");
	}
	
	
	return 0;
}
