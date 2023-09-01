//declaração de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/* Escreva uma função rescursiva para calcular o valor de uma base x elevada a um expoente y
      Solução trivial: x^0 = 1
      Passo da recursão : x^y = x * x^(y-1)
*/

int expoente(int x, int y){
  if (y == 0)// se y tiver o valor de 0 a função retorna 1
  return 1;
  else if (y == 1) //se y tiver o valor maior ou igual a 1 ele retorna x*x^(y-1) até y valer 0, quando x vale 1
  return x;
  return x * expoente (x,y-1);
}

//função main
int main(){

  setlocale(LC_ALL, ""); //para poder fazer o uso de caracteres especiais
  int x, y, e;//declaração de variaveis
  printf("Exponencial de x elevado a y \n\n");
  printf("Digite o inteiro x:\n"); //pede o valor de x
  scanf("%i",&x); //armazena o valor de x
  printf("Digite o inteiro y:\n"); //pede o valor de y
  scanf("%i",&y); //armazena o valor de y

  if(y<0){ //quando y for menor que zero ele exibe que t tem que ser amior ou igual a 0
    printf("y tem que ser maior ou igual a zero!!! \n");
  }else{
    e = expoente(x,y); //chama a função expoente
    printf("O inteiro x: %i elevado a y: %i e': %i\n",x,y,e); //exib o valor de x elevado a y
  }
  return 0;
}//main
