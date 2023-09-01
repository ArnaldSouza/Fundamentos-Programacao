//declaração de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/* Leia um vetor A com 5 números reais fornecidos pelo usuário. Crie uma função para imprimir o vetor A. Crie um
vetor B, também de tamanho 5, que deverá conter cada um dos elementos de A dividido pelo maior valor contido de A.
Para encontrar o maior elemento de A, faça uma função que procure e retorne esse maior valor. Por fim, o vetor B
dever ser mostrado utilizando a função de impressão citada anteriormente.
    A = [5, 3, 6, 9, 2]
  Maior valor de A é 9, logo o vetor B deverá ser:
    B = [0.55, 0.33, 0.66, 1, 0.22]
 */

 #define TAM 5

 void imprimirVetorA(float vetA[TAM]){ //função para imprimir o vetor A
   for (int i = 0; i < TAM; i++)
     printf("%.2f ",vetA[i]);
 }//imprimirVetorA

 float maiorValorA(float vetA[TAM]){ //função para achar o maior valor de A
   float maiorA = 0; //iguala maior valor a zero
   for (int i = 0; i < TAM; i++){ //for para achar o maior valor em A
     if(vetA[i] > maiorA) //se o valor do vetor for maior que o anterior ele passa a ser o maior valor
      maiorA = vetA[i];
   }
   printf("O maior valor de A é: %.2f \n",maiorA); //exibe o maior valor de A
  return maiorA; //retorna o maior valor
 }

 void imprimirVetorB(float vetA[TAM], float maiorA){ //função para imprimir o vetor B
  float vetB[TAM]; //declaração do vetor B
  for (int i = 0; i < TAM; i++){
    vetB[i] = vetA[i] / maiorA; //formula para o calculo dos elementos do vetor B
    printf("%.6f ",vetB[i]); //exibe os valores do vetor
  }
}

//função main
int main(){

  setlocale(LC_ALL, ""); //para poder fazer o uso de caracteres especiais
  float vetA[TAM], mA; //declaração de variaveis

  for (int i = 0; i < TAM; i++){
    printf("digite o %iº valor do vetor: ",i+1); //pede os valores do vetor
    scanf("%f", &vetA[i]); //armazena os valores do vetor
    setbuf(stdin,NULL); //limba o buffer
  }

  printf("\n");
  printf("Vetor A: ");
  imprimirVetorA(vetA); //chama a função para imprimir o vetor A
  printf("\n \n");
  mA = maiorValorA(vetA); //procura o maior valor de A e armazena na variável mA
  printf("\n");
  printf("Vetor B: ");
  imprimirVetorB(vetA,mA); //chama a função para imprimir o vetor B, com os parametros sendo o vetor A e seu maior valor
  printf("\n \n");

  return 0;
}//main
