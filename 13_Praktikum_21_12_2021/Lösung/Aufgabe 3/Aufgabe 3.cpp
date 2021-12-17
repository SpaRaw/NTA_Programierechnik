#include<stdio.h>
#include<stdlib.h>

void draw_tree(int hoehe){
	int stamm_h = hoehe / 3 ;
	int center = hoehe;
	int max_width = hoehe * 2 - 1;
	
	for(int i = 0; i <= hoehe + stamm_h; i++){
		int max_dist = 0;
		if(i> hoehe){
			max_dist = 0;
		}else{
			max_dist = i;	
		}
		
		
		for(int n = 0; n <=max_width+1; n++){
			if( n <= center + max_dist && n >= center - max_dist){
				printf("#");
			}else{
				printf(" ");
			}
			
		}
		printf("\n");
	}
	
}

int main(){
	int hoehe = 0;
	
	printf("geben sie die höhe des Baume ein: ");
	scanf("%i", &hoehe);
	
	draw_tree(hoehe);
	
	return 1;
	
}
