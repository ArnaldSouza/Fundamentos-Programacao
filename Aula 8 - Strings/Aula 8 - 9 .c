//declara��o de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/* Escreva uma fun��o que receba duas strings como par�metro e retorne um valor inteiro.
As duas strings s�o informadas pelo usu�rio. A primeira corresponde a um texto. A segunda
� uma string qualquer. Verifique se a segunda string est� no texto fornecido pelo usu�rio.
Em caso afirmativo, indique qual posi��o do texto a string come�a. Caso contrario, retorne
o valor -1, indicando que a string n�o est� no texto */

//fun��o main
int main(){

  setlocale(LC_ALL, ""); //para poder fazer o uso de caracteres especiais
  char texto[301], palavra[11], aux, t; //declara��o de variaveis
  int i, pos;

  printf("Escreva um texto de at� 300 caracteres:");
  fgets(texto, 300,stdin);
  printf("Escreva a palavra que deseja encontrar:");
  fgets(palavra,10,stdin);

  t = strstr(texto, palavra);

  if(t == 0){
    aux = palavra[i];
    pos = i;
    printf("A palavra esta na posi��o %i", pos);
  }else{
    printf("-1 \n");
  }//if - else


  return 0;
}//main
