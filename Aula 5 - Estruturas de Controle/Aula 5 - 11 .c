#include <stdio.h>

// Calcule o resultado da série: S= 1/1 + 3/2 + 5/3 + 7/4 + ... + 99/50

int main(){
  float S = 0;
  unsigned int numerador = 1, denominador= 1;

  while (denominador <= 50){
    S += (float) numerador/denominador;
    numerador += 2;
    denominador++;
  }
  printf("A soma e: %f\n ", S);
  return 0;
}
