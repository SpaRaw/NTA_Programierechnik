#include<stdio.h>
#include<stdlib.h>

void operation(int w1, int w2, char op, int& ergebnis);


int main(){
	int w1, w2 = 0;
	char op = 'e';
	int ergebnis = 0;
	
	printf("enter w1: ");
	scanf("%d", &w1);
	
	printf("\nenter w2: ");
	scanf("%d", &w2);
	
	printf("\nenter operator: ");
	scanf(" %c", &op);
	
	
	operation(w1, w2, op, ergebnis);
	
	printf("\n%d", ergebnis);
	return 1;
}

void operation(int w1, int w2, char op, int& ergebnis){
	switch(op){
		case '+': ergebnis = w1 + w2; break;
		case '-': ergebnis = w1 - w2; break;
		case '*': ergebnis = w1 * w2; break;
		case '/': 
					if( w2 != 0){
						ergebnis = w1 / w2;
					}else{
						printf("Division by Zero flag was triggerd");
					}; 
					break;
		default:
				printf("Unexpected Operator was passed to the function");
	}
}
