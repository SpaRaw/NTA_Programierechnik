#include<stdio.h>
#include<stdlib.h>

int main(){
	char str[11]= "Ein Nenner";
	printf("%s\n", str);
	
	for(int i = 0; i<sizeof(str); i++){
		if(str[i]== 'E'){
			str[i]= 'e';
		}
		if(str[i]== 'N'){
			str[i]= 'n';
		}
	}
	
	printf("\n%s\n",str);
	
	for(int i = sizeof(str)-2; i>=0; i--){
		printf("%c", str[i]);
	}

	getchar();
	return 1;
}
