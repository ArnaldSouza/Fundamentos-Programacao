//declaração de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <math.h>

void segundoGrau(int a, int b, int c, float* x1, float* x2){
  float delta;

  delta = b*b - 4*a*c;

  *x1 = (-b + sqrt(delta))/(2*a);
  *x2 = (-b - sqrt(delta))/(2*a);

}

//função main
int main(int argc, char **argv){

  setlocale(LC_ALL, ""); //para poder fazer o uso de caracteres especiais
  int a, b, c;//declaração de variaveis
  float x1, x2;

  if (argc != 4){
    printf("Forneceu a quantidade errada de parâmetros\n");
    return 0;
  }

  //argv[0] é o nome do executavel do nosso programa
  a = atoi(argv[1]); //convertendo o primeiro numero para int
  b = atoi(argv[2]);
  c = atoi(argv[3]);

  segundoGrau(a, b, c, &x1, &x2);

  printf("x' = %.1f , x''= %.1f \n",x1, x2);
  return 0;
}//main
