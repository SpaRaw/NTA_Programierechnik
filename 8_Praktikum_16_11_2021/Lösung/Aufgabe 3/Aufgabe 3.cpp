#include<stdlib.h>
#include<stdio.h>

int main(){
	double arr[3][2];
	
	for(int i = 0; i < 3; i ++){
		for(int j = 0; j < 2; j++){
			printf("\nGib eine Kommazahl ein: ");
			scanf("%lf",&arr[i][j]);
		}
	}
	
	printf("\n");
	
	for(int i = 0; i < 3; i ++){
		for(int j = 0; j < 2; j++){
			printf("arr[%d][%d] = %f  ", i, j, arr[i][j]);
		}
		printf("\n");
	}
	return 1;
}
