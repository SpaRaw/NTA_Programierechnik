#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	
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
			break;
		}
		
		versuche++ ;
		
	}while(versuche< 6);
	
	if(nicht_erraten){
		printf("\nVerloren ! Die Gesuchte Zahl war: %d \n", zufallszahl);
	}
	
	return 1 ;
}
