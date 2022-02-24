#include<stdio.h>
#include<stdlib.h>

int fakultaet(int n);

int main(){
	int a ;
	printf("gib eine Zahl ein: ");
	scanf("%d", &a);
	printf("\n%d", fakultaet(a));
	
	return 1 ;
}

int fakultaet(int n){
	if( n == 0){
		return 1;
	}else{
		return n * fakultaet(n - 1);
	}
	
}
