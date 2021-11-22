#include<stdlib.h>
#include<stdio.h>
#include<time.h>


void aufgabe_1() {
	system("cls");
	printf("Aufgabe 1: Zahlen Raten\n\n\n");
	
	int zufallszahl, eingabe, versuche=0 ;
	bool nicht_erraten=true;
	
	srand(time(NULL));
	zufallszahl = rand() % 100;
	
	do{
		printf("Zahl eingeben: ");
		scanf("%d", &eingabe);
		
		if(eingabe < zufallszahl){
			printf("Zu Klein\n");
		}else if(eingabe > zufallszahl){
			printf("Zu Gross\n");
		}else{
			printf("\nGlückwunsch du hast die Zahl %d richtig erraten", zufallszahl);
			nicht_erraten = false;
			break;
		}
		
		versuche++ ;
		
	}while(versuche< 6);
	
	if(nicht_erraten){
		printf("\nVerloren ! Die Gesuchte Zahl war: %d \n", zufallszahl);
	}
	

}

void aufgabe_2() {
	system("cls");
	printf("Aufgabe 2: Array Umdrehen\n\n\n");
	
	int arr[5];
	
	printf("Bitte 5 Ganzzahlen eingeben: \n");
	for(int i =0; i<5; i++){
		printf(" Zahl: ");
		scanf("%d", &arr[i]);
	}
	
	printf("\nAusgabe in Umgekehrter folge: %d %d %d %d %d",arr[4], arr[3], arr[2], arr[1], arr[0]);
	

	

	
}

void aufgabe_3() {
	system("cls");
	printf("Aufgabe 3: Matrix\n\n\n");
	
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
	

}

int main() {

	int aufgaben_nummer = 0;

	printf("Programiertechnik Praktikum\nEinheit: 8 \nGruppe: B\nDatum: 19.11.2021");

	printf("\n\n\n");

	printf("Aufgabe 1: Zahlen Raten\nAufgabe 2: Array Umdrehen\nAufgabe 3: Matrix\n");
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
