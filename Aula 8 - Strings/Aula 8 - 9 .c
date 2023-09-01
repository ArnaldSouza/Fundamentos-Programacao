//declaração de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/* Escreva uma função que receba duas strings como parâmetro e retorne um valor inteiro.
As duas strings são informadas pelo usuário. A primeira corresponde a um texto. A segunda
é uma string qualquer. Verifique se a segunda string está no texto fornecido pelo usuário.
Em caso afirmativo, indique qual posição do texto a string começa. Caso contrario, retorne
o valor -1, indicando que a string não está no texto */

//função main
int main(){

  setlocale(LC_ALL, ""); //para poder fazer o uso de caracteres especiais
  char texto[301], palavra[11], aux, t; //declaração de variaveis
  int i, pos;

  printf("Escreva um texto de até 300 caracteres:");
  fgets(texto, 300,stdin);
  printf("Escreva a palavra que deseja encontrar:");
  fgets(palavra,10,stdin);

  t = strstr(texto, palavra);

  if(t == 0){
    aux = palavra[i];
    pos = i;
    printf("A palavra esta na posição %i", pos);
  }else{
    printf("-1 \n");
  }//if - else


  return 0;
}//main
