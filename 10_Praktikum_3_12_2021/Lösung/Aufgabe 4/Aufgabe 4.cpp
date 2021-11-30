#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int a = 1;
	double b = 1.5;
	char c = 'a';
	
	int *point_to_a = &a;
	double *point_to_b = &b;
	char *point_to_c= &c;
	
	printf("int: %i", *point_to_a);
	printf("\ndouble: %lf", *point_to_b);
	printf("\nchar: %c", *point_to_c);
	
	*point_to_a = 5;
	*point_to_b = 2.5;
	*point_to_c = 'b';
	
	printf("\nNeuer Wert a: %d", a);
	printf("\nNeuer Wert b: %lf", b);
	printf("\nNeuer Wert c: %c", c);
	
	a = 2;
	b = 3.1415;
	c = 'x';
	
	printf("\nNeuer Wert a: %d", *point_to_a);
	printf("\nNeuer Wert b: %lf", *point_to_b);
	printf("\nNeuer Wert c: %c", *point_to_c);
	return 1;
}
