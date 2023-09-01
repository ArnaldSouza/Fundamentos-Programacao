//declaração de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/* Considere a função:
    int X(int a){
        if(a <= 0)
          return 0;
        else
          return a + X(a-1);
    }
O que essa função faz? Escreva uma função não recursiva que resolve o mesmo problema
*/

int X(int a){
    int i = a, soma = 0;
    do{
      soma +=  a;
      i--; //decrescimo de i
      a--; //decréscimo de a
    }while(i > 0);  //enquanto i for maior que 0 soma será o valor que foi somado

    return soma;
}
//função main
int main(){

  setlocale(LC_ALL, ""); //para poder fazer o uso de caracteres especiais
  int a,b;//declaração de variaveis

  printf("Forneça o inteiro a:"); //pede o valor de a
  scanf("%i",&a); //armazena esse valor

  b = X(a); //chama a função x e passa como parametro o inteiro a
  printf("A soma é: %i",b); //mostra a soma total
  printf("\n");

  return 0;
}//main
