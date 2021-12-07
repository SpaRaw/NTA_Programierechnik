#include<stdio.h>

int main(){
	int ROWS = 2;
	int COLS = 4;
	char marr[ROWS][COLS] = {{'I', 'S', 'N', 'Y'}, {'A', 'I', 'K', '1'}};
	char *point_to_char = &marr[0][0];
	
	for(int i= 0; i< 2; i++){
		for(int n=0; n<4; n++){
			printf("%c", marr[i][n]);
		}
		printf(" ");
	}
	printf("\n");
	
	for(int n=0; n< ROWS * COLS; n++){
		if(n == COLS){
			printf(" ");
		}
		printf("%c", *(point_to_char + n));
	}
	printf("\n");
	point_to_char = &marr[ROWS-1][COLS-1];
	 for (int i = COLS * ROWS - 1; i >= 0; i--) {
      printf("%c", *point_to_char);
      point_to_char--;
   }
	return 1;
}
