#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int main(){
	char str1[9];
	char str2[9];
	char unterschiede[9];
	int max_len;
	
	printf("Achtung: Die Eingabe darf maximal 9 Zeichen Lang sein und darf kein Leerzeichen enthalten");
	
	printf("\nErster String: ");
	scanf("%s", str1);
	
	printf("\nZweiter String: ");
	scanf("%s", str2);		
	
	if(strlen(str1) < strlen(str2)){
		max_len = strlen(str1);
	}else{
		max_len = strlen(str2);
	}
	
	
	for(int i = 0; i<max_len;i++){
		if(str1[i] == str2[i]){
		}else{
			
			unterschiede[i] = str2[i];
			printf("\n%c %c %d unter %c",str1[i], str2[i], i, unterschiede[i]);

		}
		
	}
	
	
	printf("\nDie Unterschiede %s", unterschiede);
	
	
	return 1 ;
}
