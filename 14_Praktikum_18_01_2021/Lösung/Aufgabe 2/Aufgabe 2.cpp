#include<stdio.h>
#include<stdlib.h>

float swap2(float a, float& b);

int main(){
	float a = 3.1415926;
	float b = 2.7182818;
	
	a = swap2(a, b);
	
	printf("%f %f", a, b);
	
	
	return 1;
}

float swap2(float a, float& b){
	
	float temp = b; -
	
	b = a ; 
	
	return temp; 
}
