#include<stdio.h>
#include<stdlib.h>

int main(){
	int a, f1 = 0, f2=1, fibb ;
	printf("gib eine Zahl ein: ");
	scanf("%d", &a);
	
	for(int i=0; i<a; i++){
		fibb = f1 + f2 ;
		f1 = f2;
		f2 = fibb;
	}
	
	printf("%d", fibb);
	return 1;
}
