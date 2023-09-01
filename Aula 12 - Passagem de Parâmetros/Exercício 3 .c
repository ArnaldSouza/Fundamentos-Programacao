//declara��o de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/*  Crie um vetor V de inteiros com 10 elementos. Leia 9 valores inteiros e armazene em V(a �ltima posi��o
ficar� com lixo). Em seguida, leia outro valor  inteiro A e o coloque na primeira posi��o. Aten��o nenhum
elemento do vetor deve ser perdido, portanto, voc� deve deslocar os 9 elementos j� inseridos em dire��o ao
final do vetor. Por fim, imprima o vetor V. Exemplo:

    V = [1, 2, 3, 4, 5, 6, 7, 8, 9, lixo]
    A = 85
  O resultado ser�:
    V = [85, 1, 2, 3, 4, 5, 6, 7, 8, 9]

  O programa dever� conter no m�nimo duas fun��es al�m da fun��o main.
  SUGEST�O: construa as fun��es imprimirVetor e alterarVetor

 */

//fun��o imprimir vetor
void imprimirVetor(int vet[]){
  for (int i = 0; i  < 10; i++)
    printf("%i ",vet[i]);
}

void alterarVetor(int vet[], int x){ //atara o valor do vetor
  for(int i = 10; i > 0; i--){
    vet[i] = vet[i-1];
  }
  vet[0] = x; //passa o valor informado pelo usu�rio para ser a primeira posi��o
}


//fun��o main
int main(){
  setlocale(LC_ALL, ""); //para poder fazer o uso de caracteres especiais
  int v[10] = {1,2,3,4,5,6,7,8,9},x;//declara��o de variaveis

  imprimirVetor(v); // imprime o vetor

  printf("\n Digite o n�mero que deseja inserir na primeira posi��o:"); //pede o vetor da primeira posi��o
  scanf("%i",&x); //armazena esse valor

  alterarVetor(v,x); //passa o valor do vetor e o valor do inteiro x

  imprimirVetor(v); // imprime o noevo vetor

  printf("\n");
  return 0;
}//main
