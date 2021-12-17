#include<stdio.h>

int summe( int n);

int main(){
	int eingabe, return_int;
	
	printf("Gib eine Zahl ein: ");
	scanf("%i", & eingabe);
	
	bool flag_size_summe = eingabe >= 0;
	if (!flag_size_summe){
		eingabe *= -1;
		return_int = summe(eingabe) * (-1);
		
	}else{
		return_int = summe(eingabe);
	}
	
	printf("\n die berechnete Summe beträgt: %i",return_int);
	
	
	return 1;
}


int summe(int n){
	int s = 0 ;
	
	if(n == 1){
		return 1;
	}
	
	return n + summe(n - 1);
}
