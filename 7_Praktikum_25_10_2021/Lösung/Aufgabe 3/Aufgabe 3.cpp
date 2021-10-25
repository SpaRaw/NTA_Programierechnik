#include<stdlib.h>
#include<stdio.h>

int main(){
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
	
	
	return 1 ; 
}
