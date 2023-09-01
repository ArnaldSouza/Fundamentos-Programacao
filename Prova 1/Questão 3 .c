//declaração de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

//função main
int main(){

  setlocale(LC_ALL, ""); //para poder fazer o uso de caracteres especiais
  int apostas[3][6], sorteados[6];//declaração de variaveis
  int cont = 0;

  for(int i = 0; i < 3; i++){
    for(int j = 0; j < 6; j++){
      printf("Insira a %iº aposta:",i+1);
      scanf("%i",&apostas[i][j]);
    }//for interno
  }//for externo

  for(int i = 0; i < 6; i++){
    printf("Insira os valores sorteados:");
    scanf("%i",&sorteados[i]);
  }//for

  for(int i = 0; i < 3; i++){
    for(int j = 0; j < 6; j++){
      if(sorteados[j] == apostas[i][j]){
        cont++;
      }//for interno
    }//for externo
  }

  if(cont == 6){
    printf("Sena \n");
  }else if(cont == 5){
    printf("Quina \n");
  }else if(cont == 4){
    printf("Quadra \n");
  }else if(cont == 3){
    printf("Terno \n");
  }else{
    printf("Azar \n");
  }


  return 0;
}//main
