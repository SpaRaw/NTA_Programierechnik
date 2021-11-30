#include<stdio.h>
#include<stdlib.h>

int main(){
	int arr[]={0,1,2,3,4,5,6,7,8,9};
	int *pointer = arr;
	int *rev_pointer= &arr[9];
	
	for(int i = 0; i<10; i++){
		printf("pointer + %i= %i\n", i, *(pointer + i));
		printf("rev_pointer +%i= %i\n", i, *(rev_pointer -i));
	}
	
	return 1;
}
