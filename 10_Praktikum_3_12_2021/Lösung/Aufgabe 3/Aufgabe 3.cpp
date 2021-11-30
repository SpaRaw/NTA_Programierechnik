#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int a = 1;
	double b = 1.5;
	char c = 'a';
	int n;
	
	int *point_to_a = &a;
	int *point_to_n = &n;
	double *point_to_b = &b;
	char *point_to_c= &c;
	
	//point_to_n = NULL;
	
	printf("int: %i", *point_to_a);
	printf("\nadresse a: %p", *point_to_a);
	printf("\nNull: %i", *point_to_n);
	printf("\nadresse n: %p", point_to_a);
	printf("\ndouble: %lf", *point_to_b);
	printf("\nadresse b: %p", point_to_b);
	printf("\nchar: %c", *point_to_c);
	printf("\nadresse c: %p", point_to_c);
	
	return 1;
}
