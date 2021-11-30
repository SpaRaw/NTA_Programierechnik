#include<stdlib.h>
#include<stdio.h>
#include<time.h>


void aufgabe_1() {
	system("cls");
	printf("Aufgabe 1: str[] bearbeiten\n\n\n");
	
	char str[11]= "Ein Nenner";
	printf("%s\n", str);
	
	for(int i = 0; i<sizeof(str); i++){
		if(str[i]== 'E'){
			str[i]= 'e';
		}
		if(str[i]== 'N'){
			str[i]= 'n';
		}
	}
	
	printf("\n%s\n",str);
	
	for(int i = sizeof(str)-2; i>=0; i--){
		printf("%c", str[i]);
	}

	getchar();
	return 1;
	
}

void aufgabe_2() {
	system("cls");
	printf("Aufgabe 2: Unterschiede\n\n\n");
	
	char str1[9];
	char str2[9];
	char unterschiede[9];
	int max_len;
	
	printf("Achtung: Die Eingabe darf maximal 9 Zeichen Lang sein und darf kein Leerzeichen enthalten");
	
	printf("\nErster String: ");
	scanf("%s", str1);
	
	printf("\nZweiter String: ");
	scanf("%s", str2);		
	
	if(strlen(str1) < strlen(str2)){
		max_len = strlen(str1);
	}else{
		max_len = strlen(str2);
	}
	
	
	for(int i = 0; i<max_len;i++){
		if(str1[i] == str2[i]){
		}else{
			
			unterschiede[i] = str2[i];
			printf("\n%c %c %d unter %c",str1[i], str2[i], i, unterschiede[i]);

		}
		
	}
	
	
	printf("\nDie Unterschiede %s", unterschiede);
	
	
}


int main() {

	int aufgaben_nummer = 0;

	printf("Programiertechnik Praktikum\nEinheit: 8 \nGruppe: B\nDatum: 19.11.2021");

	printf("\n\n\n");

	printf("Aufgabe 1: str[] bearbeiten\nAufgabe 2: Unterschiede\n");
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
