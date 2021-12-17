#include<stdio.h>
int reduce_number(int number){
	int summe = 0;
	
	if(number <= 0){
		return 0;
	}else{
		summe += number % 10;
	}
	
	return summe + reduce_number(number / 10);
}

int main(){
	int i = 0;
	
	printf("geben sie eine Zahl ein: ");
	
	scanf("%d", &i);
	
	printf("Die Querzahl ihrer Zahl beträgt: %i", reduce_number(i));
	
	
	return 1;
	
}


