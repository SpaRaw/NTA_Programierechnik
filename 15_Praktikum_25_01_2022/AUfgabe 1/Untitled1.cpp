#include<stdio.h>
#include<stdlib.h>


void matrixAdd(int a[3][4], int b[3][4], int c[3][4], int zeilen, int spalten);


int main(){
	int Zeile = 3;
	int Spalte = 4;
	
	int a[Zeile][Spalte] = {
		{2, 2, 2, 2},
		{2, 2, 2, 2},
		{2, 2, 2, 2},
	} ;
	int b[Zeile][Spalte] = {
		{3, 3, 3, 3},
		{3, 3, 3, 3},
		{3, 3, 3, 3},
	} ;
	int c[Zeile][Spalte] = {
		{-1, -1, -1, -1},
		{-1, -1, -1, -1},
		{-1, -1, -1, -1},
	} ;
	
	matrixAdd( a, b, c, Zeile, Spalte);
	
	for(int i = 0; i< Zeile; i ++){
		for(int n = 0; n < Spalte; n ++){
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
