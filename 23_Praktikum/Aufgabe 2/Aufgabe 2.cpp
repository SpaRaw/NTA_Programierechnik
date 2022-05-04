#include<stdio.h>
#include<stdlib.h>
#include<math.h>

double abstand_zwischen_a_und_b(int* a, int* b);


int main(){
	int p1[] = {4, 8};
	int p2[] = {9, 3};
	
	printf("P1(%d|%d) P2(%d|%d) Abstand=%lf", p1[0],p1[1],p2[0],p2[1],abstand_zwischen_a_und_b(p1, p2));

	return 1;
}

double abstand_zwischen_a_und_b(int* a, int* b){
	double dx = *b - *a;
	double dy = *(b + 1) - *(a +1);
	
	double erg = abs(dx) + abs(dy) ;

	return sqrt(erg);
	

	
}
