#include<stdio.h>

void swab(int *a, int *b);
	

int main(){
	
	int a, b;
	printf("a: ");
	scanf("%i", &a);

	printf("b: ");
	scanf("%i", &b);

	swab(&a, &b);
	
	printf("\n a = %i   b = %i ", a, b);
	
	
	return 1;
}


void swab(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}
