#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#include<math.h>


void aufgabe_1() {
	
	system("cls");
	printf("Aufgabe 1: 2D Array Indexes\n\n\n");
	
	int ROWS = 2;
	int COLS = 4;
	char marr[ROWS][COLS] = {{'I', 'S', 'N', 'Y'}, {'A', 'I', 'K', '1'}};
	char *point_to_char = &marr[0][0];
	
	for(int i= 0; i< 2; i++){
		for(int n=0; n<4; n++){
			printf("%c", marr[i][n]);
		}
		printf(" ");
	}
	printf("\n");
	
	for(int n=0; n< ROWS * COLS; n++){
		if(n == COLS){
			printf(" ");
		}
		printf("%c", *(point_to_char + n));
	}
	printf("\n");
	point_to_char = &marr[ROWS-1][COLS-1];
	 for (int i = COLS * ROWS - 1; i >= 0; i--) {
      printf("%c", *point_to_char);
      point_to_char--;
   }
	
}

void kugel(double radius){
	double oberflaeche = 4 * M_PI * radius * radius;
	double voloumen = (4 / 3) * M_PI * radius * radius * radius;
	
	printf("die Oberflaeche betraegt: %lf\n das Voloumen betraegt: %lf", oberflaeche, voloumen);
}

void aufgabe_2() {
	
	system("cls");
	printf("Aufgabe 2: Kugel Funktion\n\n\n");

	kugel(30.25);
	kugel(62.354);
	kugel(3.1415);
	kugel(2.718281);
	kugel(420.69);
}


bool prime_check(int number){
	
  // Corner case
    if (number <= 1)
        return false;
 
    //Check from 2 to square root of n
    for (int i = 2; i <= sqrt(number); i++)
        if (number % i == 0){
            return false;
    	}
 
    return true;
}

void aufgabe_3(){
	system("cls");
	printf("Aufgabe 3: Primzahlen bestimmen\n\n\n");
	
	int input = 0;
	
	printf("\ngib eine Zahl ein, die überprüfed werden soll ob dies eine Primzahl ist: ");
	scanf("%d", &input);
		
	if(prime_check(input) == true){
		printf("\nDie Zahl %i ist eine Primzahl", input);
	}else{
		printf("\nDie Zahl %i ist keine Primzahl", input);
	}
	
	
}



int main() {

	int aufgaben_nummer = 0;

	printf("Programiertechnik Praktikum\nEinheit: 11 \nGruppe: B\nDatum: 07.12.2021");

	printf("\n\n\n");

	printf("Aufgabe 1: 2D Array Indexes\nAufgabe 2:Kugel Funktion\nAufgabe 3:Primzahlen bestimmen\n");
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
