#include<stdio.h>

int main(){
	// khai bao mang va gan phan tu cho mang, khai bao sum
	int arr[3][3]={{1,2,3},{5,6,7},{8,9,10}};
	int sum=0;
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++ ){
			if(i==0 || i==2 || j==0 || j==2){
				sum+=arr[i][j];
			}
		}
	}
	printf(" Tong cac phan tu trong mang la: %d", sum);
	return 0;
}
