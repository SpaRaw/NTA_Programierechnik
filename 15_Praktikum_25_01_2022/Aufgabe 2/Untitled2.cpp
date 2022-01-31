#include<stdio.h>
#include<stdlib.h>


void matrixAdd2(int* a, int* b, int* c, int zeilen, int spalten);


int main(){
	int row = 3;
	int col = 4 ;
	
	int a[row][col] = {
		{1, 2, 3, 4},
		{5, 6, 7, 8},
		{9, 10, 11, 12}
	} ;
	int b[row][col] = {
		{1, 2, 3, 4},
		{5, 6, 7, 8},
		{9, 10, 11, 12}
	} ;
	int c[row][col] = {
		{-1, -1, -1, -1},
		{-1, -1, -1, -1},
		{-1, -1, -1, -1}
	} ;
	
	
	matrixAdd2(&a[0][0], &b[0][0], &c[0][0], row, col);
	
	for(int i = 0; i< row; i ++){
		for(int n = 0; n < col; n ++){
			printf("%d ", c[i][n]) ;
		}
		printf("\n");
	}
	
	return 1;
}

void matrixAdd2(int* a, int* b, int* c, int zeilen, int spalten){
		for(int i = 0; i< zeilen*spalten; i++){
			*(c + i) = *(a + i)+ *(b + i);
		}
}
	
