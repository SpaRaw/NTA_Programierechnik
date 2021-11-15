#include<stdio.h>
#include<stdlib.h>

int main(){
	int arr[5];
	
	printf("Bitte 5 Ganzzahlen eingeben: ");
	scanf("%d %d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4]);
		
	printf("Ausgabe in Umgekehrter folge: %d %d %d %d %d",arr[4], arr[3], arr[2], arr[1], arr[0]);
	return 1 ;
}
