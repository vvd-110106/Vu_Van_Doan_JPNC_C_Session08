#include<stdio.h>

int main(){
	// khai bao va cho nguoi dung nhap
	int num;
	printf("Ban hay nhap vao 1 so hang va cot cho mang  ");
	scanf("%d", &num);
	
	// khai bao mang = num vua nhap
	int arr[num][num];
	
	// nhap cac phan tu trong mang
	
	printf("Nhap phan tu cho mang co %d hang va %d cot: \n ", num, num);
	for(int i=0; i<num; i++){
		for(int j=0; j<num; j++){
			printf("Nhap phan tu cho mang:" );
			scanf("%d", &arr[i][j]);
		}
	}
	
	// in mang
	for(int i=0; i< num; i++){
		for(int j=0; j< num; j++){
			printf("%3d", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
