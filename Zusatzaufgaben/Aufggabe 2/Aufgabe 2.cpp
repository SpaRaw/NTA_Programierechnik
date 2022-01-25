#include<stdio.h>
#include<stdlib.h>
#include<math.h>

float dauer(float kapital, float zinssatz, float zielsumme){
	float zeit = (log(zielsumme / kapital)) / log(zinssatz) ; 
	
	return zeit;
}
int main(){
	
	printf("%.2f", dauer(1000, 1.03, 1000000));
	
return 1;
}
