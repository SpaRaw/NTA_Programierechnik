#include<stdio.h>
#include<math.h>

void kugel(double radius){
	double oberflaeche = 4 * M_PI * radius * radius;
	double voloumen = (4 / 3) * M_PI * radius * radius * radius;
	
	printf("die Oberflaeche betraegt: %lf\n das Voloumen betraegt: %lf", oberflaeche, voloumen);
}

int main(){
	kugel(30.25);
	
	return 1;
}
