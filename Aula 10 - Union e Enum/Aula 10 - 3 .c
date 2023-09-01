//declaração de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/* Crie uma enumeração representando os meses do ano. Agora, escreva um programa
que leia um valor inteiro do teclado e exiba o nome do mês correspondente e quantos
dias ele possui*/

//enumeração dos meses do ano
typedef enum {JANEIRO = 1,FEVEREIRO, MARCO, ABRIL, MAIO,JUNHO, JULHO, AGOSTO, SETEMBRO, OUTUBRO, NOVEMBRO,DEZEMBRO} meses_ano;
//função main
int main(){

  setlocale(LC_ALL, ""); //para poder fazer o uso de caracteres especiais
  enum meses_ano;//declaração de variaveis
  int opcao;

  printf("Digite um numero de 1 a 12: ");
  scanf("%i",&opcao);

  switch (opcao) { //mostra o mes dependendo do numero referente a ele, se o numero for diferente de 12 exibe a mensagem de erro
    case JANEIRO:
      printf("O mês escolhido foi janeiro que tem 31 dias! \n1");
      break;
    case FEVEREIRO:
      printf("O mês escolhido foi fevereiro que tem 28 dias! \n");
      break;
    case MARCO:
      printf("O mês escolhido foi marco que tem 31 dias! \n");
      break;
    case ABRIL:
      printf("O mês escolhido foi abril que tem 30 dias! \n");
      break;
    case MAIO:
      printf("O mês escolhido foi maio que tem 31 dias! \n");
      break;
    case JUNHO:
      printf("O mês escolhido foi junho que tem 30 dias! \n");
      break;
    case JULHO:
      printf("O mês escolhido foi julho que tem 31 dias! \n");
      break;
    case AGOSTO:
      printf("O mês escolhido foi agosto que tem 31 dias! \n");
      break;
    case SETEMBRO:
      printf("O mês escolhido foi setembro que tem 30 dias! \n");
      break;
    case OUTUBRO:
      printf("O mês escolhido foi outubro que tem 31 dias! \n");
      break;
    case NOVEMBRO:
      printf("O mês escolhido foi novembro que tem 30 dias! \n");
      break;
    case DEZEMBRO:
      printf("O mês escolhido foi dezembro que tem 31 dias! \n");
      break;
    default:
      printf("Não existe mês com esse número! \n");
      break;
  }

  return 0;
}//main
