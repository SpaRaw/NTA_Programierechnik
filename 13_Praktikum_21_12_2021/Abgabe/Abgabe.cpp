#include<stdio.h>
#include<stdlib.h>

void swab(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

void aufgabe_1() {
	system("cls");
	printf("Aufgabe 1: Tauschen von zwei Variabeln\n\n\n");
	
	int a, b;
	printf("a: ");
	scanf("%i", &a);

	printf("b: ");
	scanf("%i", &b);
	printf("\n a = %i   b = %i ", a, b);
	swab(&a, &b);
	
	printf("\n a = %i   b = %i ", a, b);
	
}

void aufgabe_2() {
	system("cls");
	printf("Aufgabe 2: Lösen von Gleichungen\n\n\n");
	
	printf("-1 + 3 - 7 + 5 = %i\n", -1 + 3 - 7 + 5);
	printf("1 * ( 3 - 7 + 5) = %i\n", 1 * ( 3 - 7 + 5));
	printf("(1 + 3) / (7 - 5) = %i\n", (1 + 3) / (7 - 5));
	printf("-1 + 3 + 7 / 5) = %i\n", -1 + 3 + 7 / 5);
	printf("(-(1 % (3 * 7))) + 5 = %i\n", (-(1 % (3 * 7))) + 5);
	printf("1 *  3 + 7 - 5 = %i\n", 1 *  3 + 7 - 5);
	printf("1 + 3 + 7 - 5 = %i\n ",1 + 3 + 7 - 5 );
	printf("-1 + (3 % 7) + 5 = %i\n", -1 + (3 % 7) + 5 );
	printf("1 * ( 3 % 7 + 5) = %i\n", 1 * ( 3 % 7 + 5));
	printf("1 + 3 % 7 + 5 = %i\n", 1 + 3 % 7 + 5);
	printf("1 - 3 + 7 + 5) = %i", 1 - 3 + 7 + 5);

}

void draw_tree(int hoehe){
	int stamm_h = hoehe / 3 ;
	int center = hoehe;
	int max_width = hoehe * 2 - 1;
	
	for(int i = 0; i <= hoehe + stamm_h; i++){
		int max_dist = 0;
		if(i> hoehe){
			max_dist = 0;
		}else{
			max_dist = i;	
		}
		
		
		for(int n = 0; n <=max_width+1; n++){
			if( n <= center + max_dist && n >= center - max_dist){
				printf("#");
			}else{
				printf(" ");
			}
			
		}
		printf("\n");
	}
	
}

void aufgabe_3() {
	system("cls");
	printf("Aufgabe 3: Der Weihnachstbaum\n\n\n");
	
	int hoehe = 0;
	
	printf("geben sie die höhe des Baume ein: ");
	scanf("%i", &hoehe);
	
	draw_tree(hoehe);
	
}


int calc_sum_of_parts(int num){
	float result = (num + 1) * (num / 2);
	
	return result ; 
}

void aufgabe_4(){
	system("cls");
	printf("Aufgabe 3: Zusatzaufgabe \n\n\n");
	
	
	printf("Gib die Zahl ein deren Summe der Einzelteile berechnet werden soll: ");
	int input = 0;
	
	scanf("%i", &input);
	
	printf("die antwort ist: %i", calc_sum_of_parts(input));
	
	
}

int main() {

	int aufgaben_nummer = 0;

	printf("Programiertechnik Praktikum\nEinheit: 1 \nGruppe: B\nDatum: 17.12.2021");

	printf("\n\n\n");

	printf("Aufgabe 1: Tauschen von zwei Variabeln\nAufgabe 2:Lösen von Gleichungen\nAufgabe 3:Der Weihnachstbaum\nAufgabe 4: Sonderaufgabe\n");
	printf("Gebe die Aufgaben Nummer ein: ");
	scanf("%i", &aufgaben_nummer);

	system("cls");

	switch (aufgaben_nummer) {
	case 1: aufgabe_1(); break;
	case 2: aufgabe_2(); break;
	case 3: aufgabe_3(); break;
	case 4: aufgabe_4();break;
	default:
		printf("Uups, Ein Fehler ist aufgetreten, dass Programm schliesst sich");
		printf("Err, invalid choice, choice out of bound");
	}

	
	return 1;
}
