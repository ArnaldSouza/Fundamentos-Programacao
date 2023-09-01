//declara��o de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/* Escreva um programa que receba um n�mero inteiro representando a quantidade total de segundos e,
usando passagem de par�metros por refer�ncia, converta a quantidade informada de segundos em Horas,
Minutos e Segundos. Imprima o resultado da convers�o no formato HH:MM:SS. Fa�a isso usando sturct e
passando a estrutura por refer�ncia. Utilize o seguinte prot�tipo da fun��o:
      void converterHorario(int total_segundos, Horario* hor)
*/

typedef struct {
  int hora;
  int min;
  int seg;
}Horario; //struct Horario

//fun��o converterhora
void converterHora(int total_segundos, Horario* hor){
  hor->hora = total_segundos / 3600; //faz a divis�o dos segundos por 3600 e acha a quantidade de horas
  hor->min = (total_segundos % 3600) / 60; //pega o resto da divis�o dos segundos e divide por 60 achando os minutos
  hor->seg =(total_segundos %3600) % 60; //pega o resto da divis�o dos minuots que s�o os segundos
}//converterHoraw

//fun��o main
int main(){

  setlocale(LC_ALL, ""); //para poder fazer o uso de caracteres especiais
  int total_segundos;
  Horario hor;//declara��o de variaveis

  printf("Digite a quantidade total de segundos:\n"); //pede a quantidade total de segundos
  scanf("%i",&total_segundos); //armazena a quantidade de segundos

  converterHora(total_segundos, &hor); //chama a fun��o e converte os segundos para hh:mm:ss

  printf("A convers�o para HH:MM:SS �: %dh:%dm:%ds \n",hor.hora, hor.min,hor.seg); //mostra os segundos convertidos

  return 0;
}//main
