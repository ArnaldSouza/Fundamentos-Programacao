//declaração de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Faça um programa que receba a idade de dez pessoas, calcule e
mostre a quantidade de pessoas com idade maior ou igual a 18
anos*/

//função main
int main(){

  setlocale(LC_ALL, ""); //para poder fazer o uso de caracteres especiais

  int idade, cont = 1, idadem = 0; //declaracao de variaveis

  while(cont <= 10){ //enquanto o somador for <= 10 pedira para fornecer a idade
    printf("Forneça a idade de dez pessoas: ");
    scanf("%i",&idade);

    if(idade >= 18){ //caso a idade seja maior que 18 a variavel idadem somara 1
      idadem ++;
    }

    cont ++;
  }

  printf("O número de pessoas com mais de 18 anos é: %i \n ",idadem ); //sera mostrado o numero de pessoas com idade <= 18

  return 0;
}//main
