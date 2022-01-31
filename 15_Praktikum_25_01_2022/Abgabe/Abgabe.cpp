#include<stdio.h>
#include<stdlib.h>

void matrixAdd(int a[][4], int b[][4], int c[][4], int zeilen, int spalten){
	for(int i = 0; i< zeilen; i ++){
		for(int n = 0; n < spalten; n ++){
			c[i][n] = a[i][n] + b[i][n];
		}
	}
}

void aufgabe_1() {
	system("cls");
	printf("Aufgabe 1: Lösen einer Matrix mit Call By Value\n\n\n");
	
	int Zeile = 3;
	int Spalte = 4;
	
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
	
	matrixAdd(a, b, c, Zeile, Spalte);
	
	for(int i = 0; i< Zeile; i ++){
		for(int n = 0; n < Spalte; n ++){
			printf("%d ", c[i][n]) ;
		}
		printf("\n");
	}
	
}

void matrixAdd2(int* a, int* b, int* c, int zeilen, int spalten){
		for(int i = 0; i< zeilen*spalten; i++){
			*(c + i) = *(a + i)+ *(b + i);
		}
}

void aufgabe_2() {
	system("cls");
	printf("Aufgabe 2: Matrix Addition durch Call By Reference\n\n\n");
	
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


	
}


int main() {

	int aufgaben_nummer = 0;

	printf("Programiertechnik Praktikum\nEinheit: 1 \nGruppe: B\nDatum: 17.12.2021");

	printf("\n\n\n");

	printf("Aufgabe 1: Lösen einer Matrix mit Call By Value\nAufgabe 2:Matrix Addition durch Call By Reference\n");
	printf("Gebe die Aufgaben Nummer ein: ");
	scanf("%i", &aufgaben_nummer);

	system("cls");

	switch (aufgaben_nummer) {
	case 1: aufgabe_1(); break;
	case 2: aufgabe_2(); break;
	default:
		printf("Uups, Ein Fehler ist aufgetreten, dass Programm schliesst sich");
		printf("Err, invalid choice, choice out of bound");
	}

	
	return 1;
}
