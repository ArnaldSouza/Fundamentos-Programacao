//declara��o de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/* Escreva um programa que receba um n�mero inteiro representando a quantidade total de segundos e,
usando passagem de par�metros por refer�ncia, converta a quantidade informada de segundos em Horas,
Minutos e Segundos. Imprima o resultado da convers�o no formato HH:MM:SS. Utilize o seguinte prot�tipo
da fun��o:
  void converterHora(int total_segundos, int* hora, int* min, int* seg)
*/

//fun��o converterhora
void converterHora(int total_segundos, int* hora, int* min, int* seg){
  *hora = total_segundos / 3600; //faz a divis�o dos segundos por 3600 e acha a quantidade de horas
  *min = (total_segundos % 3600) / 60; //pega o resto da divis�o dos segundos e divide por 60 achando os minutos
  *seg = (total_segundos %3600) % 60; //pega o resto da divis�o dos minuots que s�o os segundos
}//converterHoraw

//fun��o main
int main(){

  setlocale(LC_ALL, ""); //para poder fazer o uso de caracteres especiais
  int segundos_t, hora, min, seg;//declara��o de variaveis

  printf("Digite a quantidade total de segundos:\n"); //pede a quantidade de segundos total
  scanf("%i",&segundos_t); //armazena a quantidade de segundos

  converterHora(segundos_t, &hora, &min, &seg); //chama a fun��o e fornece os parametros a ela

  printf("A convers�o para HH:MM:SS �: %dh:%dm:%ds \n",hora,min,seg); //exibe os segundos convertidos

  return 0;
}//main
