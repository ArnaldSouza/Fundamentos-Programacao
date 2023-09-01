#include <stdio.h>
#include <stdlib.h>

/*Calcule a média aritmética de 4 números reais que o usuário
digitar. Imprima a média na tela apenas com 2 casas decimais.*/

int main(){
  float n1, n2, n3, n4, media;

  //pedido e armazenamento das notas
  printf("Digite a primeira nota:\n");
  scanf("%f",&n1);
  printf("Digite a segunda nota:\n");
  scanf("%f",&n2);
  printf("Digite a terceira nota:\n");
  scanf("%f",&n3);
  printf("Digite a quarta nota:\n");
  scanf("%f",&n4);

  //calculo da media e impressao da media
  media = (n1 + n2 + n3 + n4) / 4;
  printf("A media final e': %.2f \n",media);

  return 0;
}
