//declara��o de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/* Um problema t�pico da ciencia da computa��o consiste em converter um n�meor da sua forma decimal para
bin�ria. Crie um algoritmo recursivo para resolver esse problema.
    Solu��o trivial: x=0; quando o n�mero inteiro j� foi convertido para bin�rio;
    Passo da recurs�o: saber como x/2 � convertido. Depois imprimir um digito (0 ou 1) dado o sucesso da divis�o.
*/
void decbin(int dec){
  int n;
  if(dec/2 != 0){ //se o n�mero dividido por 2 for diferente de 0
    n = dec / 2; // n ser� esse n�mero dividio por 2
    decbin(n); //chamada recursiva
    printf("%i",dec % 2); //exibir� o resto da divis�o do n�mero informado por 2
  }else{
    printf("%i",dec % 2); //caso a divis�o do n�mero por dois seja 0, exibir� o 0
  }
}

//fun��o main
int main(){

  setlocale(LC_ALL, ""); //para poder fazer o uso de caracteres especiais
  int dec;//declara��o de variaveis

  printf("Digite um n�mero inteiro: "); //pede um n�mero inteiro
  scanf("%i",&dec); //armazena esse numero

  printf("\nN�mero %i em Bin�rio: ",dec); //mostra o numero em binario chamado a fun��o decbin
  decbin(dec);
  printf("\n\n");

  return 0;
}//main
