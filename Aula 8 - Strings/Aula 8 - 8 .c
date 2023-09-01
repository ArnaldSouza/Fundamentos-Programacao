//declaração de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/* Escreva uma função que receba uma string e coloque em maiúsculo a primeira letra de
cada palavra dessa string. Exemplo:
ENTRADA:  abobrinha com feijão, muito bom, ou não
SAÍDA: Abobrinha Com Feijão, Muito Bom, Ou Não*/

//função main
int main(){

  setlocale(LC_ALL, ""); //para poder fazer o uso de caracteres especiais

  int i;
  char frase[100];
  //declaração de variaveis

  printf("Escreva a frase: ");  //pede para escrever a frase
  scanf("%[^\n]", frase); //armazena o que foi escrito

  for(i = 0; i < strlen(frase); i++){
     frase[i] |= (1<<5); //OR do quinto bit com 1 para deixar a letra minúscula
     if(!i || frase[i - 1] == ' ')
     frase[i] &= ~(1<<5); //AND do quinto bit com 0 nas primeiras letras
  }
  /*
  Se consultar a tabela ASCII, verá que a única diferênça entre maiúsculas e
  minúsculas é no quinto bit.
  Logo, podemos fazer um OR do quinto bit com 1 para deixar a
  letra minúscula e depois um AND do quinto bit com 0 nas primeiras letras.
  */

  printf("\nFrase convertida = %s\n", frase); //frase com as primerias letras maiusculas

  return 0;
}//main
