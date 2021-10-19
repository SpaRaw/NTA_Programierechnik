#include<stdlib.h>
#include<stdio.h>
#include<windows.h>

#pragma warning(disable : 4996)

void aufgabe_1() {
	/*
		Folgendes ist die Gliederrung der Aufgabenloesung:
		
		Z.16 - z.33 = Kuemmert sich um die I/O um die Noetigen Benutzer Imputs zu bekommen
		
		Z.36 Beginn eines Switch Satements, Dieser Sorgt dafuer, dass die Richtige Logig fuer die Loesungsansetzt benutz werden
			Z.41- Z.76 = Loesen ueber Ausschliesslich if else statements
			Z.81 - Z.110 = Loesen ueber ein Array
			Z.113 = Default Anweisung-> Ausgeben eines Errero wenn die Eingegebene Zahl nicht in der Switch case anweisung ausgefuehrt wurde.
	*/
	int loesungsansatz = 0;
	int z1, z2, z3 = 0;
	int kleinste, mittel, groesste = 0;
	
	printf("Aufgabe: 1\n\n\n");

	printf("Die Aufgabe wurde auf mehere Artengeloest. Bitte geben sie den Loesungsweg an:\n");
	printf("Ansatz 1: If(..)else if\nAnsatz 2: Array\n");
	scanf("%i", &loesungsansatz);

	system("cls");
	
	printf("Geben sie drei Zahlen an. Diese werden dann sortiert wieder ausgegeben\n");
	
	printf("Zahl 1: ");
	scanf("%i", &z1);

	printf("\nZahl 2: ");
	scanf("%i", &z2);

	printf("\nZahl 3: ");
	scanf("%i", &z3);
	
	switch (loesungsansatz) {
	case 1: {
		system("cls");
		printf("Gewaehlter Loesungsansatz: %i			z1=%d, z2=%d, z3=%d", loesungsansatz, z1, z2, z3);
		printf("\n\n\n");

		if (z1 > z2&& z1 > z3) {
			groesste = z1;
		}
		else if (z1 > z2 || z1 > z3) {
			mittel = z1;
		}
		else {
			kleinste = z1;
		}

		if (z2 > z1&& z2 > z3) {
			groesste = z2;
		}
		else if (z2 > z1 || z2 > z3) {
			mittel = z2;
		}
		else {
			kleinste = z2;
		}

		if (z3 > z1&& z3 > z2) {
			groesste = z3;
		}
		else if (z3 > z1 || z3 > z2) {
			mittel = z3;
		}
		else {
			kleinste = z3;
		}

		printf("Die Eingegebenen Zahlen nach der groessse angeordnet: %d, %d, %d", kleinste, mittel, groesste);
		break;

	}
	case 2: {
		system("cls");
		printf("Gewaehlter Loesungsansatz: %i			z1=%d, z2=%d, z3=%d", loesungsansatz, z1, z2, z3);
		printf("\n\n\n");

		int listNumbers[3];
		listNumbers[0] = z1;
		listNumbers[1] = z2;
		listNumbers[2] = z3;

		bool itemSwapped = TRUE;

		do {
			for (int i = 0; i < 2; i++) {
				if (listNumbers[i] > listNumbers[i + 1]) {
					int temp = listNumbers[i];
					listNumbers[i] = listNumbers[i + 1];
					listNumbers[i + 1] = temp;

					itemSwapped = TRUE;
				}
				else {
					itemSwapped = FALSE;
				}
			}

		} while (itemSwapped);


		printf("Die Eingegebenen Zahlen nach der groessse angeordnet: %d, %d, %d", listNumbers[0], listNumbers[1], listNumbers[2]);
		break;

	}
	default:
		printf("Uups, Ein Fehler ist aufgetreten, dass Programm schliesst sich");
		printf("Err, invalid choice, choice out of bound");
	}
	
}

void aufgabe_2() {
	//Loesunf fuer die aufgabe 2
	for (int j = 0; j < 12; j++) {
		for (int i = 0; i < 12; i++) {
			//Sonder Fall für J<2 
			if(j<2){ 
				//überprüfen ob j=0 oder j =1
				if(j==0){
					
					if(i==0){
						//Zellblock 0 -> nichts
						printf("    ");
					
					}else if(i == 1){
						//zellblock 1 -> "  | "
						printf("  | ");
					
					}else{
						//rest durch i zählen 1-10
						//überprüfen ob die Zahl eine Stelle oder zwei bednötigt
						if(i==10+1){
							printf("  %d", i-1);
						
						}else{
							printf("   %d", i-1);
							
						}
						
					}
					
				}else{
					//gebe eine Reihe ---- aus 
					//Ausnahme Zellblock 2 -> "  + "
					if(i==1){
						printf("--+-");
					}else{
						printf("----");
					}
				}
				
			}else {
				//falls j>=2 
				if(i ==0){
					//Zellblok 0 -> wert j 
					if(j==10+1){
						//überprüfen ob die Zahl zwei stellen braucht
						printf(" %d ", j-1);
					
					}else{
						printf("  %d ", j-1);
					}
				}else if(i==1){
					//Zellblock 1 -> "  | "
					printf("  | ");
				}else{
					//zellblock i 2-11 
					if((i-1)*(j-1)<=9){
						//wenn ergebnis <10 ->"   %d"
						printf("   %d", (i-1) * (j-1));
					
					}else if ((i-1)*(j-1) >= 100){
						//wenn ergebnis > 99 -> " %d"
						printf(" %d", (i-1) * (j-1));
					
					}else{
						//rest ->"  &d"
						printf("  %d", (i-1) * (j-1));
					}
					
					
					
				}		
				
			}
		} 
		printf("\n");
	}
	
}

void aufgabe_3() {
	/* Im großen und ganzen wurde die Funktionalität von aufgabe 2 übernommen
		Die Einzige änderung liegt darin, dass der Codeblock, der für die Ausgabe des Einmaleinses
		um die Überprüfung erweitert wurde ob es sich um eine Quadratzahl handelt
	*/	
	
	for (int j = 0; j < 12; j++) {
		for (int i = 0; i < 12; i++) {
			//Sonder Fall für J<2 
			if(j<2){ 
				//überprüfen ob j=0 oder j =1
				if(j==0){
					
					if(i==0){
						//Zellblock 0 -> nichts
						printf("    ");
					
					}else if(i == 1){
						//zellblock 1 -> "  | "
						printf("  | ");
					
					}else{
						//rest durch i zählen 1-10
						//überprüfen ob die Zahl eine Stelle oder zwei bednötigt
						if(i==10+1){
							printf("  %d", i-1);
						
						}else{
							printf("   %d", i-1);
							
						}
						
					}
					
				}else{
					//gebe eine Reihe ---- aus 
					//Ausnahme Zellblock 2 -> "  + "
					if(i==1){
						printf("--+-");
					}else{
						printf("----");
					}
				}
				
			}else {
				//falls j>=2 
				if(i ==0){
					//Zellblok 0 -> wert j 
					if(j==10+1){
						//überprüfen ob die Zahl zwei stellen braucht
						printf(" %d ", j-1);
					
					}else{
						printf("  %d ", j-1);
					}
				}else if(i==1){
					//Zellblock 1 -> "  | "
					printf("  | ");
				}else{
					if(!(i >= j)){
						//überspring die Zahlen, die nicht auf einer Quadrat basieren
						printf("    ");
						
					}else{
							//zellblock i 2-11 
						if((i-1)*(j-1)<=9){
							//wenn ergebnis <10 ->"   %d"
							printf("   %d", (i-1) * (j-1));
						
						}else if ((i-1)*(j-1) >= 100){
							//wenn ergebnis > 99 -> " %d"
							printf(" %d", (i-1) * (j-1));
						
						}else{
							//rest ->"  &d"
							printf("  %d", (i-1) * (j-1));
						}
					}
					
					
					
				}		
				
			}
		} 
		printf("\n");
	}
	
}

int main() {

	int aufgaben_nummer = 0;

	printf("Programiertechnik Praktikum\nEinheit: 6 \nGruppe: B\nDatum: 22.10.2021");

	printf("\n\n\n");

	printf("Aufgabe 1: Eingabe Zahlen nach Groesse sortieren\nAufgabe 2: kleine Einmaleins\nAufgabe 3: Andere art des Einmaleinses\n");
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
