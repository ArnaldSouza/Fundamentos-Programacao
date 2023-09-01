//declara��o de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/* Fa�a um programa que receba tr�s vari�vis do tipo int. A primeira ao dia, a segunda ao
m�s e a terceira ao ano. Fa�a a valida��o para que o usu�rio n�o possa entrar com o valor
de dia maior que 31 e m�s maior que 12. Crie tr�s strings para receber o valor do dia, o nome
do m�s e do ano, respectivamente. Converta as vari�veis int,dia e ano para string e armazene
nas suas respectivas vari�veis. Verifique qual o nome do m�s equivale ao valor de "m�s" fornecido
pelo usu�rio e armazene esse nome na string destinada ao nome do m�s.Crie uma quarta string
denominada data com tamanho suficiente para armazenar o seguinte cont�edo:
    "dd/nome_mes/aaaa"
Exemplo:
    "20/02/2016"
A string final,a qual dever� estar armazenada na string data �: 20/fevereiro/2016
 */

//fun��o main
int main(){

  setlocale(LC_ALL, ""); //para poder fazer o uso de caracteres especiais
  int dia, mes, ano; //declara��o de variaveis
  char d[3], m[10], a[5];
  char data[25];

  do{
      printf("Digite o dia:"); //recebe dia
      scanf("%i",&dia); /aramazena dia
    if(dia > 31){ //se dia > 31 exibe que dia n�o existe
      printf("Esse dia n�o existe!!! \n");
    }//if
  }while(dia > 31); //la�o de repeti��o para data v�lida


  do{
      printf("Digite o m�s:");
      scanf("%i",&mes);
    if(mes > 12){ //se mes > 12 exibe que n�o existe
      printf("Esse m�s n�o existe!!! \n");
    }//if
  }while(mes > 12); //la�o de repeti��o data v�lida

  printf("Digite o ano:"); //ano
  scanf("%i",&ano); //armazena ano

  itoa(dia,d,10);  //converte dia int ==> para string d
  itoa(ano,a,10);  //converte ano int ==> para string a

  for(int u = 0; u < 25; u++){ //inicializa o string para n�o concatenar lixo
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
        strcpy(m,"mar�o");
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

  //concantena��o da data
  strcat(data,d);
  strcat(data,"/");
  strcat(data,m);
  strcat(data,"/");
  strcat(data,a);

  printf("\n");
  printf("A data desejada �: %s \n", data); //mostra a data desejada

  return 0;
}//main
