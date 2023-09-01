//declaração de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/*  Crie um vetor V de inteiros com 10 elementos. Leia 9 valores inteiros e armazene em V(a última posição
ficará com lixo). Em seguida, leia outro valor  inteiro A e o coloque na primeira posição. Atenção nenhum
elemento do vetor deve ser perdido, portanto, você deve deslocar os 9 elementos já inseridos em direção ao
final do vetor. Por fim, imprima o vetor V. Exemplo:

    V = [1, 2, 3, 4, 5, 6, 7, 8, 9, lixo]
    A = 85
  O resultado será:
    V = [85, 1, 2, 3, 4, 5, 6, 7, 8, 9]

  O programa deverá conter no mínimo duas funções além da função main.
  SUGESTÃO: construa as funções imprimirVetor e alterarVetor

 */

//função imprimir vetor
void imprimirVetor(int vet[]){
  for (int i = 0; i  < 10; i++)
    printf("%i ",vet[i]);
}

void alterarVetor(int vet[], int x){ //atara o valor do vetor
  for(int i = 10; i > 0; i--){
    vet[i] = vet[i-1];
  }
  vet[0] = x; //passa o valor informado pelo usuário para ser a primeira posição
}


//função main
int main(){
  setlocale(LC_ALL, ""); //para poder fazer o uso de caracteres especiais
  int v[10] = {1,2,3,4,5,6,7,8,9},x;//declaração de variaveis

  imprimirVetor(v); // imprime o vetor

  printf("\n Digite o número que deseja inserir na primeira posição:"); //pede o vetor da primeira posição
  scanf("%i",&x); //armazena esse valor

  alterarVetor(v,x); //passa o valor do vetor e o valor do inteiro x

  imprimirVetor(v); // imprime o noevo vetor

  printf("\n");
  return 0;
}//main
