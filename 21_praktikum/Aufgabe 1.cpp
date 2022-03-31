#include<conio.h>
#include<stdio.h>

int determinASCII(int n);
void printAsciiArray(int* arr, int len);

int main(){
	int asciiValue = 0, temp=0;
	
	int arr[]={
		32,65,83,67,73,73,58,32
	};
	
	while(asciiValue != 81){
		asciiValue = getch();
		temp += 1;
		
		putchar(asciiValue);
		
		printAsciiArray(arr, sizeof(arr)/ sizeof(int));
		
		int einer = asciiValue % 10;
		int zehner = asciiValue % 100;
		int hundert = asciiValue % 1000;
		zehner = (zehner - einer)/ 10;
		hundert = (hundert - zehner - einer)/ 100;
		putchar(determinASCII(hundert));
		putchar(determinASCII(zehner));
		putchar(determinASCII(einer));
		putchar(10);
		
	}
	
	putchar(determinASCII(temp));
	return 1;
}

void printAsciiArray(int* arr, int len){
	for(int i=0; i<len;i++){
		putchar(*(arr + i));
	
	}
}

int determinASCII(int n){
	switch(n){
		case 0:  return  48; break;
		case 1:  return  49; break;
		case 2:  return  50; break;
		case 3:  return  51; break;
		case 4:  return  52; break;
		case 5:  return  53; break;
		case 6:  return  54; break;
		case 7:  return  55; break;
		case 8:  return  56; break;
		case 9:  return  57; break;
		default: return 32;
	}
}


