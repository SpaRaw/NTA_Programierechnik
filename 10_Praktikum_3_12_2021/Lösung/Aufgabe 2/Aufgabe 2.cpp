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
	return 1;
}
