#include<stdio.h>
#include<stdlib.h>

void druck_Array(int *pArr, int size);

int main (){
	
	int arr[] = {1, 2, 3, 4, 5, 6, 7};
	
	druck_Array(arr, sizeof(arr) / sizeof(int));
	return 1;
}

void druck_Array(int *pArr, int size){
	
	printf("%d", *pArr);
	
	if(size>1){
		druck_Array(pArr+1, size -1 );
	}
	
}
