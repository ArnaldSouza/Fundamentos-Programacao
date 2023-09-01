#include <stdio.h>

int soma(int a, int b){
  int resultado;
  resultado = a + b;

  return resultado;
}

void sub(int a, int b){
  printf("A soma de %i e %i e': %i \n",a, b, a-b);
}

int main() {
    int x, y, z;
    printf("Forneca x:");
    scanf("%i",&x);
    printf("Forneca y:");
    scanf("%i",&y);

    z = soma(x,y);

    if(z % 2 == 0){
      printf("A soma retornou em um valor par: %i \n",z);
    }else{
      printf("A soma retornou em um valor ímpar: %i \n",z );
    }

      return 0;
}
