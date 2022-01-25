#include<stdio.h>
#include<stdlib.h>

void swap3(float* a, float* b);

int main(){
	float a = 3.1415926;
	float b = 2.7182818;
	float* aa = &a;
	float* bb = &b;
	
	swap3(aa, bb);
	
	printf("%f %f", a, b);
	
	
	return 1;
}

void swap3(float* a, float* b){
	
	float temp = *b; 
	
	*b = *a ; 
	
	*a = temp;
}
