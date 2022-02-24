#include<stdio.h>
#include<stdlib.h>

int path(int x, int y){
	if(x == 1 || y == 1){
		return 1;
	}else{
		return path(x- 1, y) + path(x, y -1);
	}
}


int main(){
	printf("%d", path(3,3  ));
	return 1;
}
