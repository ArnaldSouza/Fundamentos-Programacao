//declara��o de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* N�meros pal�ndromos s�o aqueles que escritos da direita para a
esquerda t�m o mesmo valor quando escritos da esquerda para a
direita. Exemplo: 545; 789987; 97379; 123454321; etc. Escreva
um programa que verifique se um dado vetor A de 10 elementos
inteiros � um pal�ndromo, ou seja, se o primeiro elemento do vetor
e igual ao �ltimo, se o segundo elemento do vetor � igual ao
pen�ltimo e assim por diante at� verificar todos os elementos ou
chegar a conclus�o que o vetor n�o � um pal�ndromo. */

//fun��o main
int main(){

  setlocale(LC_ALL, ""); //para poder fazer o uso de caracteres especiais
  int vet[10], i, j, a = 0;//declara��o de variaveis

  for(int i = 0; i < 10 ; i++){
    printf("Qual %i� o valor para o vetor A:", i+1);
    scanf("%i",&vet[i]);
  } //vetor de 10 posi��es

  for(int i = 0; i < 5 ; i++){ //posi��es do vetor
    for(int j = 9; j >= 5; j--){ //posi��es do vetor contr�rio
      if(vet[i] == vet[j]){  //procurando os valores que s�o iguais em posi��es inersas
        a++; //quandos as posi��es inversas s�o iguais adiciona 1 a vari�vel "a"
      }else{
        a = 0; //quando as posi��es inversas s�o diferentes o a valer� zero
      }
    }
  }

  if(a > 0){//se o a for maior que zero o numero � um palindromo
    printf("O n�mero � um pal�ndromo\n");
  }else{ //se n�o ele n�o �
    printf("O n�mero n�o � um pal�ndromo\n");
  }

  return 0;
}//main
