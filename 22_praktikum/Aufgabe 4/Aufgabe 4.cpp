#include<stdio.h>
#include<stdlib.h>

#define f(x, y) 2 * (x) + 3 * (y)

int main(){
	
	//printf("%d %d",f(2, 3), f(2+1, 3+1));
	//Ausgabe 13 15 
	//-> Rechnung wird nicht richtig ausgeführt
	
	//Ausgabe 13 18 
	// 2 * (2+1) + 3 * (3+1) = 18
	
	printf("%s", __func__);
	printf("\n%s", __FILE__);
	printf("\n%d", __LINE__);
	printf("\n%s", __DATE__);
	printf("\n%s", __TIME__);
}
