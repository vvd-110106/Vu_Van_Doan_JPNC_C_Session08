#include<stdio.h>

int main(){
	// Khai bao va gan gia tri cho mang
	 int arr[3][3] = {{1,2,3}, {5,6,7},{8,9,1}};
	for(int i=3-1; i>-1; i--){
		for(int j=3-1; j>-1; j--){
			printf("%3d", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
