#include<stdlib.h>
#include<stdio.h>

int string_lenght(char* s);

int string_lenght2(char* string);

char* stringrev(char* s);

int strend(const char* s, const char* t);

int get_str_len(const char* string);

int main(){
	char string[]="Hallo";
	char string2[]="ll";

	printf("int string_lenght(char* s) || char* s -> char string[]='Hallo'	|| return: %d", string_lenght(string));
	printf("\nint string_lenght2(char* string) || char* string -> char string[]='Hallo'	|| return: %d", string_lenght2(string));
	printf("\nchar* stringrev(char* s) || char* s -> char string[]='Hallo'	|| return_value: %s", stringrev(string));
	printf("\nint strend(const char* s,const char* t)|| char* s -> char string[]='Hallo'|| char* t -> char string2[]='ll'|| return:%d", strend(string, string2));
	
	getchar();
	return 1;
}

int get_str_len(const char* string){
	int counter = 0;
	while(*(string + counter) != '\0'){
		counter++;
	}
	return counter;
}

int string_lenght(char* s){
	int counter = 0;
	int i = 0; 
	
	while(s[i] != '\0'){
		counter++;
		i++;
	}
	
	return counter;
}

int string_lenght2(char* string){
	return get_str_len(string);
}

char* stringrev(char* s){
	int counter = get_str_len(s);
	
	char* temp_arr = (char*) malloc(counter * sizeof(char));
	
	for(int i = counter - 1 ; i>=0; i--){
		*(temp_arr + (counter - (i + 1))) = *(s + i);
		*(temp_arr + counter + 1) = '\0';
	}
	return temp_arr;
	
}

int strend(const char* s, const char* t){
	int len_s = get_str_len(s);
	int len_t = get_str_len(t);

	for(int i = 0; i < len_t; i++){
		if(*(s+(len_s - i)) != *(t+(len_t - i))){
			return 0;
		}
	}
	
	return 1;
}
