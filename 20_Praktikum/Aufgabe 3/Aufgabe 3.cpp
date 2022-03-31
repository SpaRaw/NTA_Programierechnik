#include<stdio.h>
#include<stdlib.h>

int auf_ab(int n, int max);

int main(){
	int a = 0;
	printf("gi eine Zahl ein: ");
	scanf("%d",&a);
	
	printf("\n");
	auf_ab(0, a);
	
	return 1;
}

int auf_ab(int n, int max){
	printf("%d", n);
	if(n != max){
		
		auf_ab(n+1, max);
		printf("%d", n);
}
}

