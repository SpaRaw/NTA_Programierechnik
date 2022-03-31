#include<stdio.h>
#include<stdlib.h>

void ab(int n);

int main(){
	
	int z;
	
	printf("gib eine Zahl ein: ");
	scanf("%d", &z);
	
 	ab(z);
	
	return 1;
}

	void ab(int n){
		
		if(n == 0){
			printf("%d", 0);
		}else{
			printf("%d ", n);
			ab(n-1);
		}
	}
