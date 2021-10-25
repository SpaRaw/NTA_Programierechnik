#include<stdio.h>
#include<stdlib.h>

int main(){
	double z1, z2, Ergebnis= 0.0;
	char Operator = ' ';
	
	printf("Zahl 1: ");
	scanf("%lf", &z1);
	
	printf("\nOperator: ");
	scanf(" %c", &Operator);
	
	printf("\nZahl 2: ");
	scanf("%lf", &z2);
	
	switch(Operator){
		case '+':Ergebnis = z1 + z2; break;
		case '-':Ergebnis = z1 - z2; break;
		case '/':Ergebnis = z1 / z2; break;
		case '*':Ergebnis = z1 * z2; break;
		default: printf("Fehler bei der Eingabe");
	}
	
	printf("\ndas Ergebnis Lautet: %.4f", Ergebnis);
	
	return 1;
}
