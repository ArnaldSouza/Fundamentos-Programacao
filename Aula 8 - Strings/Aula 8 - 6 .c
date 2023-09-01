//declaração de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/* Faça um programa que receba três variávis do tipo int. A primeira ao dia, a segunda ao
mês e a terceira ao ano. Faça a validação para que o usuário não possa entrar com o valor
de dia maior que 31 e mês maior que 12. Crie três strings para receber o valor do dia, o nome
do mês e do ano, respectivamente. Converta as variáveis int,dia e ano para string e armazene
nas suas respectivas variáveis. Verifique qual o nome do mês equivale ao valor de "mês" fornecido
pelo usuário e armazene esse nome na string destinada ao nome do mês.Crie uma quarta string
denominada data com tamanho suficiente para armazenar o seguinte contúedo:
    "dd/nome_mes/aaaa"
Exemplo:
    "20/02/2016"
A string final,a qual deverá estar armazenada na string data é: 20/fevereiro/2016
 */

//função main
int main(){

  setlocale(LC_ALL, ""); //para poder fazer o uso de caracteres especiais
  int dia, mes, ano; //declaração de variaveis
  char d[3], m[10], a[5];
  char data[25];

  do{
      printf("Digite o dia:"); //recebe dia
      scanf("%i",&dia); /aramazena dia
    if(dia > 31){ //se dia > 31 exibe que dia não existe
      printf("Esse dia não existe!!! \n");
    }//if
  }while(dia > 31); //laço de repetição para data válida


  do{
      printf("Digite o mês:");
      scanf("%i",&mes);
    if(mes > 12){ //se mes > 12 exibe que não existe
      printf("Esse mês não existe!!! \n");
    }//if
  }while(mes > 12); //laço de repetição data válida

  printf("Digite o ano:"); //ano
  scanf("%i",&ano); //armazena ano

  itoa(dia,d,10);  //converte dia int ==> para string d
  itoa(ano,a,10);  //converte ano int ==> para string a

  for(int u = 0; u < 25; u++){ //inicializa o string para não concatenar lixo
    data[u] = NULL;
  }//for

  switch (mes) { //switch para a escolha do mes
      case 1:
        strcpy(m,"janeiro");
        break;
      case 2:
        strcpy(m,"fevereiro");
        break;
      case 3:
        strcpy(m,"março");
        break;
      case 4:
        strcpy(m,"abril");
        break;
      case 5:
        strcpy(m,"maio");
        break;
      case 6:
        strcpy(m,"junho");
        break;
      case 7 :
        strcpy(m,"julho");
        break;
      case 8:
        strcpy(m,"agosto");
        break;
      case 9:
        strcpy(m,"setembro");
        break;
      case 10:
        strcpy(m,"outubro");
        break;
      case 11:
        strcpy(m,"novembro");
        break;
      case 12:
        strcpy(m,"dezembro");
        break;
      default:
        break;
  }//switch

  //concantenação da data
  strcat(data,d);
  strcat(data,"/");
  strcat(data,m);
  strcat(data,"/");
  strcat(data,a);

  printf("\n");
  printf("A data desejada é: %s \n", data); //mostra a data desejada

  return 0;
}//main
