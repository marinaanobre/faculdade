/*Faça a conversão de binário para decimal*/

#include <stdio.h>
#include <string.h>
#include <math.h>

int main (){
 char binario[100]
 int decimal = 0;
 int quantd = strlen(binario);

 printf("digite o numero binário: ");
 scanf("%s", &binario);

 for (int i = 0; i < tamanho; i++) {
 if (binario[quantd - 1 - i] == '1') {
 decimal += pow(2, i); }
 }

 printf("O número em decimal é: %d", decimal);
 
return 0;


}
