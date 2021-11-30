#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	
	char arr[9];
	int anz_char=0;
	
	printf("Gib eine Zeichen Kette ein(Max: 9 Zeichen): ");
	scanf("%s", &arr);
	
	while(arr[anz_char] != '\0' ){
		anz_char++;
	}
	
	int length = strlen(arr);
	printf("\nDie Zeichenkette hat %i Zeichen, laut strlen", length);
	printf("\nDie Zeichenkette hat %i Zeichen, laut while schleife",anz_char);
	return 1;
}
