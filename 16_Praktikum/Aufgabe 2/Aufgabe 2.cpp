#include<stdio.h>
#include<stdlib.h>


int main(){
	int a = 3;
	int b = 2;
	int* pa = &a;
	int* pb = &b;
	
	int* arr[]={
		pa,
		pb,
		pb,
		pa
	};
	
	for(int i=0; i<4; i++){
		printf("%d ", *arr[i]);
	}
	
	return 1;
}
