//declaração de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Números palíndromos são aqueles que escritos da direita para a
esquerda têm o mesmo valor quando escritos da esquerda para a
direita. Exemplo: 545; 789987; 97379; 123454321; etc. Escreva
um programa que verifique se um dado vetor A de 10 elementos
inteiros é um palíndromo, ou seja, se o primeiro elemento do vetor
e igual ao último, se o segundo elemento do vetor é igual ao
penúltimo e assim por diante até verificar todos os elementos ou
chegar a conclusão que o vetor não é um palíndromo. */

//função main
int main(){

  setlocale(LC_ALL, ""); //para poder fazer o uso de caracteres especiais
  int vet[10], i, j, a = 0;//declaração de variaveis

  for(int i = 0; i < 10 ; i++){
    printf("Qual %iº o valor para o vetor A:", i+1);
    scanf("%i",&vet[i]);
  } //vetor de 10 posições

  for(int i = 0; i < 5 ; i++){ //posições do vetor
    for(int j = 9; j >= 5; j--){ //posições do vetor contrário
      if(vet[i] == vet[j]){  //procurando os valores que são iguais em posições inersas
        a++; //quandos as posições inversas são iguais adiciona 1 a variável "a"
      }else{
        a = 0; //quando as posições inversas são diferentes o a valerá zero
      }
    }
  }

  if(a > 0){//se o a for maior que zero o numero é um palindromo
    printf("O número é um palíndromo\n");
  }else{ //se não ele não é
    printf("O número não é um palíndromo\n");
  }

  return 0;
}//main
