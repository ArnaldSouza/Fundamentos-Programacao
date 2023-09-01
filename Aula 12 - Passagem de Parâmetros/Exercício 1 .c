//declaração de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/* Escreva um programa que receba um número inteiro representando a quantidade total de segundos e,
usando passagem de parâmetros por referência, converta a quantidade informada de segundos em Horas,
Minutos e Segundos. Imprima o resultado da conversão no formato HH:MM:SS. Utilize o seguinte protótipo
da função:
  void converterHora(int total_segundos, int* hora, int* min, int* seg)
*/

//função converterhora
void converterHora(int total_segundos, int* hora, int* min, int* seg){
  *hora = total_segundos / 3600; //faz a divisão dos segundos por 3600 e acha a quantidade de horas
  *min = (total_segundos % 3600) / 60; //pega o resto da divisão dos segundos e divide por 60 achando os minutos
  *seg = (total_segundos %3600) % 60; //pega o resto da divisão dos minuots que são os segundos
}//converterHoraw

//função main
int main(){

  setlocale(LC_ALL, ""); //para poder fazer o uso de caracteres especiais
  int segundos_t, hora, min, seg;//declaração de variaveis

  printf("Digite a quantidade total de segundos:\n"); //pede a quantidade de segundos total
  scanf("%i",&segundos_t); //armazena a quantidade de segundos

  converterHora(segundos_t, &hora, &min, &seg); //chama a função e fornece os parametros a ela

  printf("A conversão para HH:MM:SS é: %dh:%dm:%ds \n",hora,min,seg); //exibe os segundos convertidos

  return 0;
}//main
