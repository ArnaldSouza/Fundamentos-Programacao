//declara��o de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/* Escreva uma fun��o que receba uma string e coloque em mai�sculo a primeira letra de
cada palavra dessa string. Exemplo:
ENTRADA:  abobrinha com feij�o, muito bom, ou n�o
SA�DA: Abobrinha Com Feij�o, Muito Bom, Ou N�o*/

//fun��o main
int main(){

  setlocale(LC_ALL, ""); //para poder fazer o uso de caracteres especiais

  int i;
  char frase[100];
  //declara��o de variaveis

  printf("Escreva a frase: ");  //pede para escrever a frase
  scanf("%[^\n]", frase); //armazena o que foi escrito

  for(i = 0; i < strlen(frase); i++){
     frase[i] |= (1<<5); //OR do quinto bit com 1 para deixar a letra min�scula
     if(!i || frase[i - 1] == ' ')
     frase[i] &= ~(1<<5); //AND do quinto bit com 0 nas primeiras letras
  }
  /*
  Se consultar a tabela ASCII, ver� que a �nica difer�n�a entre mai�sculas e
  min�sculas � no quinto bit.
  Logo, podemos fazer um OR do quinto bit com 1 para deixar a
  letra min�scula e depois um AND do quinto bit com 0 nas primeiras letras.
  */

  printf("\nFrase convertida = %s\n", frase); //frase com as primerias letras maiusculas

  return 0;
}//main
