#include<stdio.h>
#include<conio.h>

int determinAscii(int n);
void parse(float a, float b, int stellen);

int main(){
    int anzBuchstaben=0, inputChar=0;

    int arr[26][2];

    for(int i=0; i<26; i++){
        arr[i][0] = 97 + i;
        arr[i][1] = 0;
    }



    while(inputChar != 13){
        inputChar = getch();
        putchar(inputChar);
        if(inputChar>= 65 && inputChar <= 90 || inputChar>= 97 && inputChar <= 122){
            anzBuchstaben += 1;
            if(inputChar < 97){
                arr[inputChar - 65][1] += 1;
            }else{
                arr[inputChar - 97][1] += 1;
            }

        }
    }

    for(int i=0; i<26; i++){
        putchar(arr[i][0]);
        putchar(32);
        putchar(58);
        putchar(32);
        putchar(determinAscii(arr[i][1]));
        putchar(32);
    }

    putchar(determinAscii(arr[0][1]));
    putchar(determinAscii(anzBuchstaben));
    parse(arr[0][1], anzBuchstaben,2);
  /*
   *   for(int i=0; i<26; i++){
        putchar(arr[i][0]);
        putchar(32);
        putchar(58);
        putchar(32);
        parseFloat(arr[i][1], anzBuchstaben);
        putchar(32);
    }
   */
    return 1;
}

void parse(float a, float b, int stellen){
     float temp = a / b ;
    for(int i= 0; i<stellen; i++){
        temp *= 10;
        int n = temp;
        
        putchar(determinAscii(n % 10));
    }

}


int determinAscii(int n){
    switch(n){
        case 0:  return  48;
        case 1:  return  49;
        case 2:  return  50;
        case 3:  return  51;
        case 4:  return  52;
        case 5:  return  53;
        case 6:  return  54;
        case 7:  return  55;
        case 8:  return  56;
        case 9:  return  57;
        default: return 95;
    }
}
