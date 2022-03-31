#include<stdio.h>
#include<stdlib.h>

int summe (int n);

int main(){
	int z;
	
		printf("gib eine Zahl ein: ");
		scanf("%d", &z);
		
		printf("\ndie Summe aller Zahlen bis zur Angabe betraegt %d",summe(z));
	
	return 1;
}

int summe(int n){
	if(n == 1){
		return 1 ;
	}else{
		
	return n + summe(n -1);
	}
}
