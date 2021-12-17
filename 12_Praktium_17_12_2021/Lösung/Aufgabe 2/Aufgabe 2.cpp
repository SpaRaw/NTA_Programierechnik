#include<stdio.h>

int summe( int n);

int main(){
	int eingabe ;
	
	printf("Gib eine Zahl ein: ");
	scanf("%i", & eingabe);
	
	
	printf("\n die berechnete Summe beträgt: %i", summe(eingabe));
	
	
	return 1;
}


int summe(int n){
	int summe = 0 ;
	
	if(n >= 0){
		for(int i =0; i <= n ; i++){
			summe += i;
		}
	}else{
		for(int i =0; i >= n ; i--){
			summe += i;
		}
		
	}
	
	return summe;
}
