#include <stdio.h>
#include <stdlib.h>

/*Faça um programa que leia três números quaisquer e imprima o
maior deles*/

int main(){
  float n1, n2, n3; //declaração das variaveis "numeros"

  //fornecimento e armazenamento das variaveis
  printf("Digite o primeiro valor: ");
  scanf("%f",&n1);
  printf("Digite o segundo valor: ");
  scanf("%f",&n2);
  printf("Digite o terceiro valor: ");
  scanf("%f",&n3);

  if(n1 > n2 && n1 > n3 ){ //verificando se n1 é maior
    printf("O maior valor e' n1: %.2f ",n1);//mostrando n1 se ele for maior
  }else{
    if(n2 > n1 && n2 > n3){//verificando se n2 é maior
      printf("O maior valor e' n2: %.2f ",n2 ); //mostrando n2 se ele for maior
    }else{ //se as condições anteriores não forem verdades n3 será maior
      printf("O maior valor e' n3: %.2f ", n3); //mostrando n3 se ele for maior
      }
    }
  return 0;
}//main
