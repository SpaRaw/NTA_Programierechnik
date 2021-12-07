#include<stdio.h>
#include<math.h>
bool prime_check(int number){

  // Corner case
    if (number <= 1)
        return false;
 
    // Check from 2 to square root of n
    for (int i = 2; i <= sqrt(number); i++)
        if (number % i == 0){
            return false;
    	}
 
    return true;
}

int main(){
	
	int input = 0;
	
	printf("\ngib eine Zahl ein, die überprüfed werden soll ob dies eine Primzahl ist: ");
	scanf("%d", &input);
		
	if(prime_check(input) == true){
		printf("\nDie Zahl %i ist eine Primzahl", input);
	}else{
		printf("\nDie Zahl %i ist keine Primzahl", input);
	}

	return 1;
}
