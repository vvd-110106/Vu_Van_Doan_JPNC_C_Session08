#include <stdio.h>

int main() {

    int array[3][3]={{1,2,3},{4,5,6,},{7,8,9}};
	int sum = 0;
	int i, j; 
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d.\n", array[i][j]);
            if (i == j){
            	sum += array[i][j];
			}  
        } 
    }
    
    printf("\nTong: %d\n", sum);

    return 0;
}

