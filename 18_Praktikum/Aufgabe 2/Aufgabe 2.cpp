#include<stdio.h>
#include<stdlib.h>

int fibbonacci( int n);

int main(){
	
	int a ;
	printf("gib eine Zahl ein: ");
	scanf("%d", &a);
	printf("\n%d", fibbonacci(a));
	
	return 1;
}

int fibbonacci(int n){
	if( n == 1 || n == 2){
		return 1;
	}else{
		return fibbonacci(n -1) + fibbonacci(n -2);
	}
	
}
