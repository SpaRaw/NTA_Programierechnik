#include<stdlib.h>
#include<stdio.h>

#define max(a, b)((a)>(b)? (a): (b))


int main(){
	int a = 3;
	int b = 5;
	printf("%d", max(a,b));
	printf("\n%d", max(a,b) +3);
	printf("\n%d", max(a,b) / 4 );
	printf("\n%d", max(a+4,b*3)  );
}
