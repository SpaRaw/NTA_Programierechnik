#include<stdio.h>

float kreisoberflaeche(float radius);
	

int main(){
	
	float radius;
	
	printf("bitte ein Radius eingeben, dieser wird anschlissend fuer die Berechnung verwndet: ");
	scanf("%f", &radius);
	
	printf("\nder Berechnete Flaeche ist: %f ", kreisoberflaeche(radius));
	
	
	return 1;
}


float kreisoberflaeche(float radius){
	return 3.1415 * radius * radius ; 
}
