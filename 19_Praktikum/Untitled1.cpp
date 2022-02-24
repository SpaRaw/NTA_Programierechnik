#include<stdio.h>
#include<stdlib.h>

void funk(int n){
		printf("%d", n);
	if(n>0){
		funk(n-1);
	}

}

int main(){
	funk(3);
	return 1;
}
