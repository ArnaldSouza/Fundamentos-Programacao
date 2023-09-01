//declaração de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

typedef struct{
  char nome[30];
  int idade;
  float altura;
}Pessoa;

void imprimePessoas(Pessoa v[], int tam){
  for (int i = 0; i < tam; i++) {
    printf("\n--------------------\n");
    printf("%s, %i, %.2f", v[i].nome, v[i].idade, v[i].altura);

  }
printf("\n\n");
}

Pessoa* Busca(Pessoa v[], int tam, char n[]){
  Pessoa *ptr = NULL;

  for (int i = 0; i < tam; i++) {
    if(strcmp(v[i].nome, n) == 0){
      printf("Achou! ");
      ptr = &v[i];
      return ptr;
    }
  }
  return ptr; //se chegar aqui o ptr é NULL
}

//função main
int main(){

  setlocale(LC_ALL, ""); //para poder fazer o uso de caracteres especiais
  Pessoa *vet, *encontrado;
  int tam;
  char nomeBusca[30];

  printf("Qual o tamanho do vetor:");
  scanf("%i",&tam);

  vet = (Pessoa*) calloc(tam, sizeof(Pessoa));

  for(int i = 0; i < tam; i++){
    printf("Forneça o nome: ");
    setbuf(stdin,NULL);
    fgets(vet[i].nome, 30, stdin);
    vet[i].nome[strcspn(vet[i].nome, "\n")] = '\0';
    printf("Forneça a idade: ");
    scanf("%i",&vet[i].idade);
    printf("Forneça a altura: ");
    scanf("%f",&vet[i].altura);
    printf("\n");
  }

  imprimePessoas(vet,tam);

  printf("Forneça o nome que deseja buscar: ");
  setbuf(stdin,NULL);
  fgets(nomeBusca, 30, stdin);
  nomeBusca[strcspn(nomeBusca, "\n")] = '\0';

  encontrado = Busca(vet, tam, nomeBusca);

  if(encontrado != NULL){
    printf("%s, %i, %.2f \n",encontrado->nome, encontrado->idade, encontrado->altura);
  }else{
    printf("A pessoa não existe no cadastro");
  }


  free(vet);
  vet = NULL;

  return 0;
}//main
