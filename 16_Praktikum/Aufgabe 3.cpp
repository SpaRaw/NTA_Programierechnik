#include<stdio.h>
#include<stdlib.h>

int main(){
	int len = 64;
	
	int brett[len];
	
	for(int i=0; i<len; i++){
		if(i %2 == 0){
			brett[i]=1;
		}else{
			brett[i]=0;
		}
	}
	
	for(int i=0; i<len; i++){
		if(brett[i]==1){
			printf("#");
		}else{
			printf(" ");
		}
		if(i % 8 ==0){
			printf("\n");
		}
	}
	
	return 1;
}
