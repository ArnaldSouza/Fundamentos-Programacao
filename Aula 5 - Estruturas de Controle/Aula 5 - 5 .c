//declaração de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Crie um programa onde:
– O usuário deve fornecer um valor;
– O programa deve responder com o nome do dia da semana correspondente.
– O programa não deve aceitar valores fora da faixa convencional, e deve
apresentar uma mensagem de erro.
1  Domingo
2  Segunda-feira
3  Terça-feira
4  Quarta-feira
5  Quinta-feira
6  Sexta-feira
7  Sábado */

//função main
int main(){

  setlocale(LC_ALL, ""); //para poder fazer o uso de caracteres especiais

  int opcao; //declaração de variáveis
  printf("Digite o numero referente ao dia da semana:");
  scanf("%i",&opcao);

  //opções de acordo com a entrada do usuario
  switch(opcao){
    case 1:
      printf("Domingo \n"); //caso for digitado 1 aparecera domingo
      break;
    case 2:
      printf("Segunda \n"); //caso for digitado 2 aparecera segunda
      break;
    case 3:
      printf("Terca \n"); //caso for digitado 3 aparecera terca
      break;
    case 4:
      printf("Quarta \n"); //caso for digitado 4 aparecera quarta
      break;
    case 5:
      printf("Quinta \n"); //caso for digitado 5 aparecera quinta
      break;
    case 6:
      printf("Sexta \n"); //caso for digitado 6 aparecera sexta
      break;
    case 7:
      printf("Sabado \n"); //caso for digitado 7 aparecera sabado
      break;
    default:
      printf("opcao invalida!!! \n"); //caso for digitado algo diferente de 1-7 aparecera opção invalida
      break;
}
  return 0;
}//main
