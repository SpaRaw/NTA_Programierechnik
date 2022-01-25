#include<stdlib.h>
#include<stdio.h>

void summe_teiler(int a){
	int ergebnis;
	for(int i = 0; i < int(a / 2); i++){
		if(a % i == 0){
			ergebnis += i;
		}
	}
	
	printf("%f", int(a / 2));
}

int main(){
	summe_teiler(220);
	return 1 ;
}
