#include<stdlib.h>
#include<stdio.h>
#include<time.h>


void aufgabe_1() {
	system("cls");
	printf("Aufgabe 1: Länge Eines String\n\n\n");
	
	char arr[9];
	int anz_char=0;
	
	printf("Gib eine Zeichen Kette ein(Max: 9 Zeichen): ");
	scanf("%s", &arr);
	
	while(arr[anz_char] != '\0' ){
		anz_char++;
	}
	
	int length = strlen(arr);
	printf("\nDie Zeichenkette hat %i Zeichen, laut strlen", length);
	printf("\nDie Zeichenkette hat %i Zeichen, laut while schleife",anz_char);
	
}

void aufgabe_2() {
	system("cls");
	printf("Aufgabe 2: Zeiger Erstellen\n\n\n");
	
	int a = 1;
	double b = 1.5;
	char c = 'a';
	
	int *point_to_a = &a;
	double *point_to_b = &b;
	char *point_to_c= &c;
	
	printf("int: %i", *point_to_a);
	printf("\ndouble: %lf", *point_to_b);
	printf("\nchar: %c", *point_to_c);
	
}

void aufgabe_3() {
	system("cls");
	printf("Aufgabe 3: Adresse asugeben\n\n\n");
	
	int a = 1;
	double b = 1.5;
	char c = 'a';
	int n;
	
	int *point_to_a = &a;
	int *point_to_n = &n;
	double *point_to_b = &b;
	char *point_to_c= &c;
	
	point_to_n = NULL;
	
	printf("int: %i", *point_to_a);
	printf("\nadresse a: %p", *point_to_a);
	printf("\nNull: %i", *point_to_n);
	printf("\nadresse n: %p", point_to_a);
	printf("\ndouble: %lf", *point_to_b);
	printf("\nadresse b: %p", point_to_b);
	printf("\nchar: %c", *point_to_c);
	printf("\nadresse c: %p", point_to_c);
	
	
}

void aufgabe_4() {
	system("cls");
	printf("Aufgabe 4: Pointer Üben\n\n\n");
	
	int a = 1;
	double b = 1.5;
	char c = 'a';
	
	int *point_to_a = &a;
	double *point_to_b = &b;
	char *point_to_c= &c;
	
	printf("int: %i", *point_to_a);
	printf("\ndouble: %lf", *point_to_b);
	printf("\nchar: %c", *point_to_c);
	
	*point_to_a = 5;
	*point_to_b = 2.5;
	*point_to_c = 'b';
	
	printf("\nNeuer Wert a: %d", a);
	printf("\nNeuer Wert b: %lf", b);
	printf("\nNeuer Wert c: %c", c);
	
	a = 2;
	b = 3.1415;
	c = 'x';
	
	printf("\nNeuer Wert a: %d", *point_to_a);
	printf("\nNeuer Wert b: %lf", *point_to_b);
	printf("\nNeuer Wert c: %c", *point_to_c);
	
	
}

void aufgabe_5() {
	system("cls");
	printf("Aufgabe 5: Zeiger Bigen\n\n\n");
	
	int arr[]={0,1,2,3,4,5,6,7,8,9};
	int *pointer = arr;
	int *rev_pointer= &arr[9];
	
	for(int i = 0; i<10; i++){
		printf("pointer + %i= %i\n", i, *(pointer + i));
		printf("rev_pointer +%i= %i\n", i, *(rev_pointer -i));
	}
	
	
}



int main() {

	int aufgaben_nummer = 0;

	printf("Programiertechnik Praktikum\nEinheit: 10 \nGruppe: B\nDatum: 03.12.2021");

	printf("\n\n\n");

	printf("Aufgabe 1: Länge Eines String\nAufgabe 2: Zeiger Erstellen\nAufgabe 3:Adresse asugeben\n Aufgabe 4:Pointer Üben\n Aufgabe 5: Zeiger Bigen");
	printf("Gebe die Aufgaben Nummer ein: ");
	scanf("%i", &aufgaben_nummer);

	system("cls");

	switch (aufgaben_nummer) {
	case 1: aufgabe_1(); break;
	case 2: aufgabe_2(); break;
	case 3: aufgabe_2(); break;
	case 4: aufgabe_2(); break;
	case 5: aufgabe_2(); break;
	default:
		printf("Uups, Ein Fehler ist aufgetreten, dass Programm schliesst sich");
		printf("Err, invalid choice, choice out of bound");
	}

	
	return 1;
}
