//declaração de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/* Elabore uma função que receba um vetor contendo N valores e retorne por referência o maior
e o menor elemento desse vetor. */

void MaiorMenor(float vet[], int tam, float *maior, float *menor){
  *maior = vet[0]; //o maior valor recebe o valor do primeiro vetor
  *menor = vet[0]; //o menor valor recebe o valor do primeiro vetor

  for (int i = 0; i < tam; i++) {
    if(vet[i] > *maior){//procura o maior valor e armazena ele na variável maior
      *maior = vet[i];
    }
    if(vet[i] < *menor){
      *menor = vet[i];
    }
  }

}//MaiorMenor

//função main
int main(){

    setlocale(LC_ALL, ""); //para poder fazer o uso de caracteres especiais
    int tam;

    printf("Defina o tamanho do vetor:"); //pede o tamanho do vetor organizado
    scanf("%i",&tam); //armazena o tamanho do vetor

    float vet[tam], maior, menor;//declaração de variaveis

    for (int i = 0; i < tam; i++) { //pede elemento a elemento do vetor e o armazena
      printf("Forneça o %iº elemento:  ",i+1);
      scanf("%f",&vet[i]);
    }

    printf("\nVetor formado:\n");
    for (int i = 0; i < tam; i++) { //pede elemento a elemento do vetor e o armazena
      printf("%.2f ",vet[i]);
    }

    MaiorMenor(vet, tam, &maior, &menor); //chama a função e passa os parametors a ela
    printf("\n\n");
    printf("O maior valor é: %.2f \nO menor valor é: %.2f \n\n", maior, menor);//exibe o maior e o menor valor

  return 0;
}//main
