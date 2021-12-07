#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main(){
	char number[]={'1','2', '3', '4', '5', '6', '7','8', '9', '10'};
	char lower[] ={'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
	char upper[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
	char special[] = {'^', '°', '!', '§', '$', '%', '&', '/', '(', ')', '=', '?', '`', '*', '#', '+', '~','@', '€'};
	
	char c ='#';
	int index =0;

	srand((unsigned) time(NULL) );
	
	int l = 15;
	printf("enter the length of the new password: ");
	scanf("%i", &l);
	
	int password[l];
	
	for(int i = 0; i< l; i++){
		printf("\npassword char %i of %i was created: ", i+1, l);
		
		int r_number = rand();
		int random_number = r_number % 4 ;
		
		switch(random_number){
			case 0 : 
						index = r_number % (sizeof(number) / sizeof(number[0]));
						password[i] = number[index];
						break;
			case 1: 
						index = r_number % (sizeof(lower) / sizeof(lower[0]));
						password[i] = lower[index];
						break;
			case 2 : 
						index = r_number % (sizeof(upper) / sizeof(upper[0]));	
						password[i] = upper[index];
						break;
			case 3 : 
						index = r_number % (sizeof(special) / sizeof(special[0]));	
						password[i] = special[index];
						break;
			default : password[i] = '#';
		}
		
	}
	
	printf("\n creating  password");

	printf("\n the new Password is: ");
	
	for( int i = 0; i <=(sizeof(password) / sizeof(password[0])); i++){
		printf("%c", password[i]);
	}
	
	return 1;
}
