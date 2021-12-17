#include<stdio.h>
#include<stdlib.h>


void aufgabe_1() {
	system("cls");
	printf("Aufgabe 1: Berechnen eienr Kreisflaeche\n\n\n");
	
	float radius;
	
	printf("bitte ein Radius eingeben, dieser wird anschlissend fuer die Berechnung verwndet: ");
	scanf("%f", &radius);
	
	printf("\nder Berechnete Flaeche ist: %f ", kreisoberflaeche(radius));
	
	
}
float kreisoberflaeche(float radius){
	return 3.1415 * radius * radius ; 
}

void aufgabe_2() {
	system("cls");
	printf("Aufgabe 2: Berechne die Summe aller Zahlen bis N\n\n\n");
	
	int eingabe ;
	
	printf("Gib eine Zahl ein: ");
	scanf("%i", & eingabe);
	
	
	printf("\n die berechnete Summe beträgt: %i", summe(eingabe));
	
	
}
int summe(int n){
	int summe = 0 ;
	
	if(n >= 0){
		for(int i =0; i <= n ; i++){
			summe += i;
		}
	}else{
		for(int i =0; i >= n ; i--){
			summe += i;
		}
		
	}
	
	return summe;
}

void aufgabe_3() {
	system("cls");
	printf("Aufgabe 3: Querzahl bestimmen\n\n\n");
	
	int i = 0;
	
	printf("geben sie eine Zahl ein: ");
	
	scanf("%d", &i);
	
	printf("Die Querzahl ihrer Zahl beträgt: %i", reduce_number(i));
	
	
}

int reduce_number(int number){
	int summe = 0;
	
	if(number <= 0){
		return 0;
	}else{
		summe += number % 10;
	}
	
	return summe + reduce_number(number / 10);
}



int main() {

	int aufgaben_nummer = 0;

	printf("Programiertechnik Praktikum\nEinheit: 12 \nGruppe: B\nDatum: 17.12.2021");

	printf("\n\n\n");

	printf("Aufgabe 1: Berechnen eienr Kreisflaeche\nAufgabe 2: Berechne die Summe aller Zahlen bis N\nAufgabe 3:Querzahl bestimmen");
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
