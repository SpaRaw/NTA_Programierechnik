#include<stdio.h>
#include<stdlib.h>

int main(){
	int a = 0;
	int b = 0;
	int* pa = &a;
	int* pb = &b;
	
	*pa = 5;
	*pb = 6;
	
	printf("%d %d", a, b);
	a=-3;
	b = -4;
	
	printf("%d %d", *pa, *pb);
	return 1;
}
