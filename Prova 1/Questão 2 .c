//declaração de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>


typedef struct {
  char pais[30];
  int ouro;
  int prata;
  int bronze;
}Olimpiadas;


#define TAM 5

//função main
int main(){

  setlocale(LC_ALL, ""); //para poder fazer o uso de caracteres especiais
  Olimpiadas olimpiadas[TAM];
  int quantMed[TAM], maiorQuant = 0, menorQuant, quantouro[TAM], quantprata[TAM], quantbronze[TAM];
  int mQuantOuro = 0, mQuantPrata = 0,mQuantBronze = 0, conto = 0, posicao;

  for(int i = 0; i < TAM; i++){

    printf("Digite o nome do pais: ");
    fgets(olimpiadas[i].pais, 30, stdin);
    olimpiadas[i].pais[strcspn(olimpiadas[i].pais, "\n")] = '\0';
    fflush(stdin);

    printf("O numero de medalhas de ouro que ganhou: ");
    scanf("%i",&olimpiadas[i].ouro);
    fflush(stdin);

    printf("O numero de medalhas de prata que ganhou: ");
    scanf("%i",&olimpiadas[i].prata);
    fflush(stdin);

    printf("O numero de medalhas de bronze que ganhou: ");
    scanf("%i",&olimpiadas[i].bronze);
    fflush(stdin);

    printf("\n\n");

    quantMed[i] = olimpiadas[i].ouro + olimpiadas[i].prata + olimpiadas[i].bronze;
    quantouro[i] = olimpiadas[i].ouro;
  }//for

  menorQuant = quantMed[0];

  for(int i = 0; i < TAM; i++){
    if(quantMed[i] > maiorQuant){
      maiorQuant = quantMed[i];
    }//if verifica maior
  }//for

  for(int i = 0; i < TAM; i++){
    if(quantMed[i] == maiorQuant){
      printf("O(s) pais(es) que teve(tiveram) mais medalhas foi: %s, com %i medalhas \n",olimpiadas[i].pais, maiorQuant);
    }//if printa maior(es)
  }//for

  for(int i = 0; i < TAM; i++){
    if(quantMed[i] < menorQuant){
      menorQuant = quantMed[i];
    }//if verifica menor
  }//for

  for(int i = 0; i < TAM; i++){
    if(quantMed[i] == menorQuant){
      printf("O(s) pais(es) que teve(tiveram) menos medalhas foi(foram): %s, com %i medalhas \n",olimpiadas[i].pais, menorQuant);
    }//if printa menor(es)
  }//for


//****VOLTAR E CORRIGIR****(D)

  for(int i = 0; i < TAM; i++){
      if(quantouro[i] > mQuantOuro){
        mQuantOuro = quantouro[i];
        conto = 0;
        posicao = i;
      }else if(quantouro[i] == mQuantOuro){
        mQuantOuro = quantouro[i];

        conto++;
      }//else
      if(quantprata[i] >= mQuantPrata){
         mQuantPrata = quantprata[i];
      }//if
      if(quantbronze[i] >= mQuantBronze){
        mQuantBronze = quantbronze[i];
      }//if
  }

    if(conto >= 1){
      for(int i = 0; i < TAM; i++){
        for(int j = 0; j < TAM; j++){
          if(quantouro[i] == quantouro[j] && i != j){
            //
          }//if verifica igual
        }//foraninhado
      }//for
    }//if
    else{
      printf("O pais que obteve mais medalhas de ouro foi: %s \n", olimpiadas[posicao].pais);
    }//else

/****D****/
  return 0;
}//main
