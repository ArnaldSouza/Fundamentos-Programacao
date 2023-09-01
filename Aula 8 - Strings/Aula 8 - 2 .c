//declaração de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
/* Faça um programa que leia uma string e conte a quantidade de vogais */

//função main
int main(){

  setlocale(LC_ALL, ""); //para poder fazer o uso de caracteres especiais
  char string[20]; //declaração de variaveis
  int nvogais = 0,tamanho;

  printf("Digite a string:"); //pede para o usuario a string
  fgets(string, 20,stdin); //armazena a string
  tamanho = strlen(string); //recebe o tamanho da string

  for(int i = 0; i < tamanho ; i++){ //compara cada posição da string para achar um caracete igual
    if(string[i] == 'A' || string[i] == 'a'){
      nvogais++;
    }else{
      if(string[i] == 'E' || string[i] == 'e'){
        nvogais++;
      }else{
        if(string[i] == 'I' || string[i] == 'i'){
          nvogais++;
        }else{
          if(string[i] == 'O' || string[i] == 'o'){
            nvogais++;
          }else{
            if(string[i] == 'U' || string[i] == 'u'){
              nvogais++;
            }
          }
        }
      }
    }
  }


  printf("O numero de vogais é igual a %i \n",nvogais); //printa o numero de vogais da string
  return 0;
}//main
