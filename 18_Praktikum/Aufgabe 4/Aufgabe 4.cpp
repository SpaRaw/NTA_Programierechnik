#include<stdio.h>
#include<stdlib.h>

double wurzel( double x, int n);

int main(){
	double a = -1;
	
	printf("gib eine Zahl ein: ");
	scanf("%lf", &a);
	
	printf("Antwort ist : %lf", wurzel(a, 10));
	
	return 1;
	
}

double wurzel(double x, int n){
	if(n == 0){
		return ( x + 1) / 2;
	}else{
		return 0.5*(wurzel(x, n-1)+x/wurzel(x,n-1));
	}
}
