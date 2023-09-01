//declara��o de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/* Considere a fun��o:
    int X(int a){
        if(a <= 0)
          return 0;
        else
          return a + X(a-1);
    }
O que essa fun��o faz? Escreva uma fun��o n�o recursiva que resolve o mesmo problema
*/

int X(int a){
    int i = a, soma = 0;
    do{
      soma +=  a;
      i--; //decrescimo de i
      a--; //decr�scimo de a
    }while(i > 0);  //enquanto i for maior que 0 soma ser� o valor que foi somado

    return soma;
}
//fun��o main
int main(){

  setlocale(LC_ALL, ""); //para poder fazer o uso de caracteres especiais
  int a,b;//declara��o de variaveis

  printf("Forne�a o inteiro a:"); //pede o valor de a
  scanf("%i",&a); //armazena esse valor

  b = X(a); //chama a fun��o x e passa como parametro o inteiro a
  printf("A soma �: %i",b); //mostra a soma total
  printf("\n");

  return 0;
}//main
