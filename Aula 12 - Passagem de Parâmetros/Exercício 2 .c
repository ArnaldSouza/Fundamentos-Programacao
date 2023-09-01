//declaração de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/* Escreva um programa que receba um número inteiro representando a quantidade total de segundos e,
usando passagem de parâmetros por referência, converta a quantidade informada de segundos em Horas,
Minutos e Segundos. Imprima o resultado da conversão no formato HH:MM:SS. Faça isso usando sturct e
passando a estrutura por referência. Utilize o seguinte protótipo da função:
      void converterHorario(int total_segundos, Horario* hor)
*/

typedef struct {
  int hora;
  int min;
  int seg;
}Horario; //struct Horario

//função converterhora
void converterHora(int total_segundos, Horario* hor){
  hor->hora = total_segundos / 3600; //faz a divisão dos segundos por 3600 e acha a quantidade de horas
  hor->min = (total_segundos % 3600) / 60; //pega o resto da divisão dos segundos e divide por 60 achando os minutos
  hor->seg =(total_segundos %3600) % 60; //pega o resto da divisão dos minuots que são os segundos
}//converterHoraw

//função main
int main(){

  setlocale(LC_ALL, ""); //para poder fazer o uso de caracteres especiais
  int total_segundos;
  Horario hor;//declaração de variaveis

  printf("Digite a quantidade total de segundos:\n"); //pede a quantidade total de segundos
  scanf("%i",&total_segundos); //armazena a quantidade de segundos

  converterHora(total_segundos, &hor); //chama a função e converte os segundos para hh:mm:ss

  printf("A conversão para HH:MM:SS é: %dh:%dm:%ds \n",hor.hora, hor.min,hor.seg); //mostra os segundos convertidos

  return 0;
}//main
