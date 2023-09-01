//declaração de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Crie um programa que inicialmente receba dois números inteiros.
Depois disso, mostre um menu com as seguintes opções:
1. Adição
2. Subtração
3. Multiplicação
4. Divisão
Peça para o usuário informar um valor de 1 a 4. Baseado nesse
valor, calcule e mostre o resultado da opção escolhida pelo
usuário, levando em consideração os dois números inteiros
recebidos.*/

//função main
int main(){

  setlocale(LC_ALL, ""); //para poder fazer o uso de caracteres especiais
  int n1, n2, opcao;
  int resultado; //declaração de variáveis

  printf("Digite um numero inteiro: "); //pedindo ao usuario dois numeros
  scanf("%i", &n1);
  printf("Digite outro numero inteiro: ");
  scanf("%i", &n2);

  printf("Qual operação deseja realizar? \n "); //perguntando ao usuario qual operacao deseja realizar
  printf("1. Adição \n 2. Subtração \n 3. Multiplicação \n 4. Divisão \n");
  scanf("%i",&opcao);

  switch(opcao){
    case 1:
      resultado =  n1 + n2;
      printf("O valor da adicao e': %i \n", resultado); //sera realizado a adicao dos numeros digitados pelo usuario
      break;
    case 2:
      resultado =  n1 - n2;
      printf("O valor da subtracao e': %i \n", resultado); //sera realizado a subtracao dos numeros digitados pelo usuario
      break;
    case 3:
      resultado =  n1 * n2;
      printf("O valor da multiplicacao e': %i \n", resultado); //sera realizado a multiplicacao dos numeros digitados pelo usuario
      break;
    case 4:
      resultado = n1 / n2;
      printf("O valor da divisao e': %.2f \n", resultado); //sera realizado a divisao dos numeros digitados pelo usuario
      break;
    default:
      printf("opcao invalida!!! \n"); //aparecera opcao invalida caso digitado algo errado
      break;
}
  return 0;
}//main
