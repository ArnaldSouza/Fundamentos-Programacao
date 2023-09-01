//declaração de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//função para fazer a soma de dois numeros, que seja equivalente a multiplicação de ambos
int soma_multi(int n1, int n2){
  if(n1 == 0){//caso base
    return 0;
  }else{//chamada recursiva
    printf("%i soma : %i\n",n1, n1 + n2);
    return n2 + soma_multi(n1-1, n2);
  }//else
}//soma

//função main
int main( int argc, char **argv){
    //para poder utilizar pontuações
    setlocale(LC_ALL, "");
//declaração de variáveis
int multiplicacao;
//chamando a função exibindo o valor da multiplicação
multiplicacao = soma_multi(3,7);
printf("O resultado da multiplicação é: %i \n", multiplicacao);

return 0;
}//main
