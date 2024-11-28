#include<stdio.h>

int main(){
	// khai bao mang 2 chieu
	int arr[3][2]={{1,2},{3,4},{8,9}};
	// khai bao bien max
	int max=arr[0][0];
	// in ra man hinh
	for(int i=0; i<3; i++){
		for(int j=0; j<2; j++){
			if(max<arr[i][j]){
				max=arr[i][j];
			}
		}
	}
	printf("Gia tri lon nhat trong mang la: %d", max);
	return 0;
}
