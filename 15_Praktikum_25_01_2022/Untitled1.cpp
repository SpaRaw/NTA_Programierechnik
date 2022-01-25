#include<stdio.h>
#include<stdlib.h>


void matrixAdd(int a[3][4], int b[3][4], int c[3][4], int zeilen, int spalten);


int main(){
	
	int a[3][4] = {
		{2, 2, 2, 2},
		{2, 2, 2, 2},
		{2, 2, 2, 2},
	} ;
	int b[3][4] = {
		{3, 3, 3, 3},
		{3, 3, 3, 3},
		{3, 3, 3, 3},
	} ;
	int c[3][4] = {
		{-1, -1, -1, -1},
		{-1, -1, -1, -1},
		{-1, -1, -1, -1},
	} ;
	
	matrixAdd( a, b,c, 3, 4);
	
	for(int i = 0; i< 3; i ++){
		for(int n = 0; n < 4; n ++){
			printf("%d ", c[i][n]) ;
		}
		printf("\n");
	}
	
	return 1;
}

void matrixAdd(int a[3][4], int b[3][4], int c[3][4], int zeilen, int spalten){
	for(int i = 0; i< zeilen; i ++){
		for(int n = 0; n < spalten; n ++){
			c[i][n] = a[i][n] + b[i][n];
		}
	}
}
