#include<stdlib.h>
#include<stdio.h>


void aufgabe_1() {
	system("cls");
	printf("Aufgabe 1: Rechner\n\n\n");
	
	double z1, z2, result= 0.0;
	char op = ' ';
	
	printf("Zahl 1: ");
	scanf("%lf", &z1);
	
	printf("\nOperator: ");
	scanf(" %c", &op);
	
	printf("\nZahl 2: ");
	scanf("%lf", &z2);
	
	switch(op){
		case '+':result = z1 + z2; break;
		case '-':result = z1 - z2; break;
		case '/':result = z1 / z2; break;
		case '*':result = z1 * z2; break;
		default: printf("Fehler bei der Eingabe");
	}
	
	printf("\ndas Ergebnis Lautet: %.4f", result);

	
}

void aufgabe_2() {
	system("cls");
	printf("Aufgabe 2: Rabatt\n\n\n");
	
	int stueckzahl, gesamtpreis, rabatt  = 0;
	int preis = 100;
	
	printf("Wie viele Stücke sollen bestellt werden: ");
	scanf("%d", &stueckzahl);
	
	if(stueckzahl>0){
	
		switch(stueckzahl){
			case 1: gesamtpreis = stueckzahl * preis; rabatt = 0; break;
			case 2: gesamtpreis = stueckzahl * preis; rabatt = 0; break;
			case 3: gesamtpreis = stueckzahl * preis; rabatt = 0; break;
			case 4: gesamtpreis = stueckzahl * preis * 0.95; rabatt = 5; break;
			case 5: gesamtpreis = stueckzahl * preis * 0.95; rabatt = 5; break;
			default: gesamtpreis = stueckzahl * preis * 0.92; rabatt = 8; 
			
		}
		
		printf("\nSie bekommen %d %% Rabatt", rabatt);
		printf("\nDie gesamt kosten sind: %d", gesamtpreis);
	}
	

	
}

void aufgabe_3() {
	system("cls");
	printf("Aufgabe 3: Berechnung Summe\n\n\n");
	
	float summe, mittel_wert = 0.0;
	int anz_zahlen = 0 ;
	
	printf("Bitte die Anzahl an Komma zahlen Eingeben: ");
	scanf("%d", &anz_zahlen);
	
	if(anz_zahlen>0){
		int i = 0 ;
		float temp_zahl = 0.0;
		
		do{
			printf("\nBitte die %d. Kommazahl Eingeben: ", i+1);
			scanf("%f", &temp_zahl);
			
			summe = summe + temp_zahl;
			i++;
			
		}while(i < anz_zahlen);
		
		mittel_wert = summe / anz_zahlen;
		
		printf("\n Die Summe ist: %.2f", summe);
		printf("\nDer Mittelwert ist: %.2f", mittel_wert);
	}
}

int main() {

	int aufgaben_nummer = 0;

	printf("Programiertechnik Praktikum\nEinheit: 7 \nGruppe: B\nDatum: 26.10.2021");

	printf("\n\n\n");

	printf("Aufgabe 1: Einfacher Rechner\nAufgabe 2: Rabatt berechnen\nAufgabe 3: Berechnung Summe\n");
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
