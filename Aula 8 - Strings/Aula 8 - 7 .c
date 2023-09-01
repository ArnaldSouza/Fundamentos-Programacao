//declaração de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/* Leia uma string de tamanho qualquer e indique qual o caractere que mais aparece
e quantas vezes ele ocorreu nesta string. Por exemplo:
ENTRADA: Vamos estudar strings
SAÍDA: O caractere que mais aparece é s. Apareceu 4 vezes.
==>OBS.: Se existirem dois ou mais caracteres de maior ocorrência, todos eles deveram
ser mostrados.
*/

//função main
int main(){

  setlocale(LC_ALL, ""); //para poder fazer o uso de caracteres especiais
  char string[21],  carac;//declaração de variaveis
  int tam, repet = 0, aux = 0;

  printf("Escreva uma palavra:");
  fgets(string,21,stdin);
  tam = strlen(string);

  for(int i = 0; i < tam - 1; i++){
    carac = string[i];
    if(carac == string[i]){
      carac = string[i];
      repet++;
    }
  }
  
  for (int i = 0; i< aux; i++) {
    printf("O caractere %s aparece %i vezes.\n",carac, repet );
  }
  return 0;
}//main
