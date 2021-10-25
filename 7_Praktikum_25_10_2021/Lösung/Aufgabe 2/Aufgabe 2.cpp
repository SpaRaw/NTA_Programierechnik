#include<stdlib.h>
#include<stdio.h>

int main(){
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
			default:  gesamtpreis = stueckzahl * preis * 0.92; rabatt = 8; 
			
		}
		
		printf("\nSie bekommen %d %% Rabatt", rabatt);
		printf("\nDie gesamt kosten sind: %d", gesamtpreis);
	}
	return 1 ;
}
