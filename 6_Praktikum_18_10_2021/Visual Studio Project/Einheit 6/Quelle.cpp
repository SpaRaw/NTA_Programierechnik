#include<stdlib.h>
#include<stdio.h>
#include<windows.h>

#pragma warning(disable : 4996)

void aufgabe_1() {
	/*
		Folgendes ist die Gliederrung der Aufgabenlösung:
		
		Z.16 - z.33 = Kümmert sich um die I/O um die Nötigen Benutzer Imputs zu bekommen
		
		Z.36 Beginn eines Switch Satements, Dieser Sorgt dafür, dass die Richtige Logig für die Lösungsansetzt benutz werden
			Z.41- Z.76 = Lösen über Ausschließlich if else statements
			Z.81 - Z.110 = Lösen über ein Array
			Z.113 = Default Anweisung-> Ausgeben eines Errero wenn die Eingegebene Zahl nicht in der Switch case anweisung ausgeführt wurde.
	*/
	int loesungsansatz = 0;
	int z1, z2, z3 = 0;
	int kleinste, mittel, groesste = 0;
	
	printf("Aufgabe: 1\n\n\n");

	printf("Die Aufgabe wurde auf mehere Artengelöst. Bitte geben sie den Lösungsweg an:\n");
	printf("Ansatz 1: If(..)else if\nAnsatz 2: Array");
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
		printf("Gewählter Lösungsansatz: %i			z1=%d, z2=%d, z3=%d", loesungsansatz, z1, z2, z3);
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

		printf("Die Eingegebenen Zahlen nach der grösße angeordnet: %d, %d, %d", kleinste, mittel, groesste);
		break;

	}
	case 2: {
		system("cls");
		printf("Gewählter Lösungsansatz: %i			z1=%d, z2=%d, z3=%d", loesungsansatz, z1, z2, z3);
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


		printf("Die Eingegebenen Zahlen nach der grösße angeordnet: %d, %d, %d", listNumbers[0], listNumbers[1], listNumbers[2]);
		break;

	}
	default:
		printf("Uups, Ein Fehler ist aufgetreten, dass Programm schließt sich");
		printf("Err, invalid choice, choice out of bound");
	}
}

void aufgabe_2() {
	//Lösunf für die aufgabe 2
	for (int j = 0; j < 12; j++) {
		for (int i = 0; i < 12; i++) {
			
			if (j > 1 && i > 1) {
				if (i * j > 99) {
					printf(" %i", i * j);
				}
				else if (i * j > 9) {
					printf("  %i", i * j);
				}
				else {
					printf("   %i", i * j);
				}
			}
			else {

				if (j == 0 && i == 0) {
					printf("    ");
				}
				else if (i == 1) {
					printf("  | ");
				}
				else {
					if (i > 9) {
						printf("  %i", i);

					}
					else {
						printf("   %i", i);
					}
				}

			}
		} 
		printf("\n");
	}
}

void aufgabe_3() {

}

int main() {

	int aufgaben_nummer = 0;

	printf("Programiertechnik Praktikum\nEinheit: 6 \nGruppe: B\nDatum: 22.10.2021");

	printf("\n\n\n");

	printf("Aufgabe 1: Eingabe Zahlen nach Größe sortieren\nAufgabe 2: kleine Einmaleins\nAufgabe 3: Andere art des Einmaleinses");
	printf("Gebe die Aufgaben Nummer ein: ");
	scanf("%i", &aufgaben_nummer);

	system("cls");

	switch (aufgaben_nummer) {
	case 1: aufgabe_1(); break;
	case 2: aufgabe_2(); break;
	case 3: aufgabe_3(); break;
	default:
		printf("Uups, Ein Fehler ist aufgetreten, dass Programm schließt sich");
		printf("Err, invalid choice, choice out of bound");
	}

	printf("Press enter to close the Programm");
	getchar();
	return 1;
}