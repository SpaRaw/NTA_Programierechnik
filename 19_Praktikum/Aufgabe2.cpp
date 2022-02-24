#include<stdio.h>
#include<stdlib.h>

void f(int i, int& j, int* p, int* q);

int main(){
	const int a=0, b=0, c=0;
	const int* pb = &b;
	const int* pc = &c;
	
	f(a, a, pb, pc);
	
	printf(" %d %d %d", a, b, c);
	//					3,5,0
	
	return 1;
}
                                       
void f(int i, , int& j, int* p, int* q){
	i = 2;
	j = 3;
	int k= 4;
	*p = 5 ;
	q = &k;
}
