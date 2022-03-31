#include<stdio.h>
#include<stdlib.h>

int ab_auf(int n);

int main(){
	ab_auf(3);
	
	return 1;
}

int ab_auf(int n){
	printf("%d", n);
	if(n != 0){
		ab_auf(n-1);
		printf("%d", n);
	}
	
}
