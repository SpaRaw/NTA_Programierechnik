#include<stdio.h>
#include<stdlib.h>

bool istAutomorph(int z);

int main(){
	
	for(int i = 0; i<= 30000; i++){
		if(istAutomorph(i)){
			printf("Die Zahl %d ist Automorph, %d * %d = %d\n", i, i, i, i*i);
		}
	}

	return 1;
}

bool istAutomorph(int z){
	int s = z * z;
	
	for(int i=100; i<10000000; i = i * 10){
		if(z < i){
			if(s%i == z){
				printf("\n%d %d %d\n", z, s, i);
				return true;
			}
		}
	}
	
	return false;
}
