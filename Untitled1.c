#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "Portuguese");
    char frase[100];
    int i;
    printf("Digite a frase: ");
    gets(frase);


    while(frase[i]){

    switch(frase[i]){


    case 'A':
        printf("01000001");
        break;

    case 'B':
        printf("01000010");
        break;

    case 'C':
        printf("01000011");
        break;

    case 'D':
        printf("01000100");
        break;
    case 'E':
        printf("01000101");
        break;
    case 'F':
        printf("01000110");
        break;
    case 'G':
        printf("01000111");
        break;
    case 'H':
        printf("01001000");
        break;
    case 'I':
        printf("01001001");
        break;
    case 'J':
        printf("01001010");
        break;
    case 'K':
        printf("01001011");
        break;
    case 'L':
        printf("01001100");
        break;
    case 'M':
        printf("01001101");
        break;
    case 'N':
        printf("01001110");
        break;
    case 'O':
        printf("01001111");
        break;
    case 'P':
        printf("01010000");
        break;
    case 'Q':
        printf("01010001");
        break;
    case 'R':
        printf("01010010");
        break;
    case 'S':
        printf("01010011");
        break;
    case 'T':
        printf("01010100");
        break;
    case 'U':
        printf("01010101");
        break;
    case 'V':
        printf("01010110");
        break;
    case 'W':
        printf("01010111");
        break;
    case 'X':
        printf("01011000");
        break;
    case 'Y':
        printf("01011001");
        break;
    case 'Z':
        printf("01011010");
        break;
    }
i++;
}
}
