#include<stdio.h>
#include<stdlib.h>

void operation(int w1, int w2, char op, int& ergebnis){
	switch(op){
		case '+': ergebnis = w1 + w2; break;
		case '-': ergebnis = w1 - w2; break;
		case '*': ergebnis = w1 * w2; break;
		case '/': 
					if( w2 != 0){
						ergebnis = w1 / w2;
					}else{
						printf("Division by Zero flag was triggerd");
					}; 
					break;
		default:
				printf("Unexpected Operator was passed to the function");
	}
}

void aufgabe_1() {
	system("cls");
	printf("Aufgabe 1: Operation\n\n\n");
	
	int w1, w2 = 0;
	char op = 'e';
	int ergebnis = 0;
	
	printf("enter w1: ");
	scanf("%d", &w1);
	
	printf("\nenter w2: ");
	scanf("%d", &w2);
	
	printf("\nenter operator: ");
	scanf(" %c", &op);
	
	
	operation(w1, w2, op, ergebnis);
	
	printf("\n%d", ergebnis);
	
}


float swap2(float a, float& b){
	
	float temp = b; 
	
	b = a ; 
	
	return temp; 
}

void aufgabe_2() {
	system("cls");
	printf("Aufgabe 2: Swap2\n\n\n");
	
	float a = 3.1415926;
	float b = 2.7182818;
	
	a = swap2(a, b);
	
	printf("%f %f", a, b);
	
	
}

void swap3(float* a, float* b){
	
	float temp = *b; 
	
	*b = *a ; 
	
	*a = temp;
}

void aufgabe_3() {
	system("cls");
	printf("Aufgabe 3: Swap3\n\n\n");
	
	float a = 3.1415926;
	float b = 2.7182818;
	float* aa = &a;
	float* bb = &b;
	
	swap3(aa, bb);
	
	printf("%f %f", a, b);
	
	
}


int main() {

	int aufgaben_nummer = 0;

	printf("Programiertechnik Praktikum\nEinheit: 14 \nGruppe: B\nDatum: 18.01.2021");

	printf("\n\n\n");

	printf("Aufgabe 1: Operation\nAufgabe 2:Swap2\nAufgabe 3:Swap3\n");
	printf("Gebe die Aufgaben Nummer ein: ");
	scanf("%i", &aufgaben_nummer);

	system("cls");

	switch (aufgaben_nummer) {
	case 1: aufgabe_1(); break;
	case 2: aufgabe_2(); break;
	case 3: aufgabe_3(); break;
	default:
		printf("Uups, Ein Fehler ist aufgetreten, dass Programm schliesst sich");
		printf("Err, invalid choice, choice out of bound");
	}

	
	return 1;
}
