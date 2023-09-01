//declaração de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/* Crie um sistema de gerenciamento de bandas seguindo os seguintes passos:
1 - Defina uma estrutura que irá representar as bandas de música. Essa estrutura deve ter o nome da banda, que
  tipo de música ela toca, o número de integrantes e em que posição do ranking ela esta dentre as sua 5 favoritas.
2 - Crie uma função para preencher as 5 estruturas de bandas criadas no exemplo passado. Após criar e preencher,
  exibas todas as informações das bandas/estruturas.
3 - Crie uma função que peça ao usuário o número de 1 a 5. Em seguida, seu programa deve exibir informações da banda
  cuja posição no seu ranking é que foi solicitada pelo usuário.
4 - Crie uma função que peça ao usuário um tipo de música e exiba as bandas com este tipo de música no seu ranking.
5 - Crie uma função que peça o nome de uma banda ao usuário e diga se ela está entre suas bandas favoritas ou não.
6 - Agora junte tudo  e crie um menu com as opções de preencher as estruturas e todas as opções das questões
passadas.
  */

typedef struct {
    char nome[30];
    char tipo[25];
    int n_integrantes;
    int pos;
}Banda; //struct banda

//função armazenarbandas
void armazenarBandas(Banda bandas[5]){
  for(int i = 0; i < 5; i++){
    printf("Digite o nome da banda: "); //pede o nome da banda
    fgets(bandas[i].nome,30,stdin); //recebe o nome da banda
    bandas[i].nome[strcspn(bandas[i].nome, "\n")] = '\0'; //substitui o \n por \0
    fflush(stdin); //limpa o buffer

    printf("O tipo de música que eles tocam: "); //pede o tipo de música
    fgets(bandas[i].tipo,25,stdin); //armazena o tipo de musica
    bandas[i].tipo[strcspn(bandas[i].tipo, "\n")] = '\0'; //substitui o \n por \0
    fflush(stdin); //limpa o buffer

    printf("O número de integrantes: "); //pede  numero de integrantes
    scanf("%i", &bandas[i].n_integrantes); //armazena o número de integrantes
    fflush(stdin); //limpa o buffer

    printf("A posição no seu ranking de favoritos: "); //pede a posição no rakning
    scanf("%i", &bandas[i].pos); //armazena  a posição
    fflush(stdin); //limpa o buffer

    printf("\n");
  }

  printf("\n");
  for (int i = 0; i < 5; i++) { //mostra os dados informados
    printf("Banda: %s \n",bandas[i].nome);
    printf("Tipo de música: %s \n",bandas[i].tipo);
    printf("N° de integrantes: %i \n",bandas[i].n_integrantes);
    printf("Posição: %i º \n",bandas[i].pos);
    printf("\n");
  }
}
//armazenarBandas

//função pedirPos
void pedirPos(Banda bandas[5]){
  int pos;
  printf("\n");
  printf("--------------------------------------\n");
  printf("--------------------------------------\n");
  printf("---- Digite a posição desejada: ------\n");
  printf("---- 1 : Banda na primeira posição ---\n");
  printf("---- 2 : Banda na segunda posição ----\n");
  printf("---- 3 : Banda na terceira posição ---\n");
  printf("---- 4 : Banda na quarta posição -----\n");
  printf("---- 5 : Banda na quinta posição -----\n");
  printf("--------------------------------------\n");
  printf("--------------------------------------\n");
  scanf("%i",&pos);
  //pede a posição que o usuário deseja ver a banda
  switch (pos) {
    case 1: //mostrara a banda na posição 1
      for(int i = 0; i < 5;i++){
        if(pos == bandas[i].pos){
          printf("Banda: %s \n",bandas[i].nome);
          printf("Tipo de música: %s \n",bandas[i].tipo);
          printf("N° de integrantes: %i \n",bandas[i].n_integrantes);
        }
      }
      break;

    case 2: //mostrara a banda na posição 2
    for(int i = 0; i < 5;i++){
      if(pos == bandas[i].pos){
        printf("Banda: %s \n",bandas[i].nome);
        printf("Tipo de música: %s \n",bandas[i].tipo);
        printf("N° de integrantes: %i \n",bandas[i].n_integrantes);
      }
     }
      break;

    case 3: //mostrara a banda na posição 3
    for(int i = 0; i < 5;i++){
      if(pos == bandas[i].pos){
        printf("Banda: %s \n",bandas[i].nome);
        printf("Tipo de música: %s \n",bandas[i].tipo);
        printf("N° de integrantes: %i \n",bandas[i].n_integrantes);
        }
      }
      break;

    case 4: //mostrara a banda na posição 4
    for(int i = 0; i < 5;i++){
      if(pos == bandas[i].pos){
        printf("Banda: %s \n",bandas[i].nome);
        printf("Tipo de música: %s \n",bandas[i].tipo);
        printf("N° de integrantes: %i \n",bandas[i].n_integrantes);
      }
    }
      break;

    case 5: //mostrara a banda na posição 5
    for(int i = 0; i < 5;i++){
      if(pos == bandas[i].pos){
        printf("Banda: %s \n",bandas[i].nome);
        printf("Tipo de música: %s \n",bandas[i].tipo);
        printf("N° de integrantes: %i \n",bandas[i].n_integrantes);
      }
    }
      break;
  }
}
//pedirPos

//função pedirTipo
char pedirTipo(Banda bandas[5]){
  char tipo[25];
  int band;

  fflush(stdin); //limpa o buffer
  printf("Digite um tipo de música: \n"); //pede um tipo de musica
  fgets(tipo,25,stdin); //armazena o Tipo
  tipo[strcspn(tipo, "\n")] = '\0'; //substitui o \n por \0
  fflush(stdin); //limpa o buffer

 for(int i = 0; i < 5; i++){
    band = strcasecmp(tipo,bandas[i].tipo); //procura os tipos iguais
    if(band == 0){ //exibe as bandas que tem o mesmo tipo informado
      printf("\n");
      printf("Banda: %s \n",bandas[i].nome);
      printf("N° de integrantes: %i \n",bandas[i].n_integrantes);
    }
  }
  return 0;
}
//pedirTipo

//função pedriNome
char pedirNome(Banda bandas[5]){
  char nbanda[30];
  int band, cont = 0;

  fflush(stdin);
  printf("Digite um nome de banda: \n"); //pede um nome de uma banda
  fgets(nbanda,30,stdin); //armazena esse nome
  nbanda[strcspn(nbanda, "\n")] = '\0';
  fflush(stdin);//limpa o buffer

 for(int i = 0; i < 5; i++){
    band = strcasecmp(nbanda,bandas[i].nome); //compaara com todos os elementos infomrados se existe algum igualç
    if(band == 0){ //acrescentara 1 na variável se o nome de banda informada existir
      cont++;
    }
 }

  if(cont != 0){ //se existir exibirá essa mensagem
    printf("Essa está entre as minhas favoritas! \n");
  }else{//caso não exista
    printf("Essa banda não está entre as minhas favoritas \n");
  }

  return 0;
}
//pedir nome

//função main
int main(){

  setlocale(LC_ALL, ""); //para poder fazer o uso de caracteres especiais
  Banda bandas[5];//declaração de variaveis

  armazenarBandas(bandas);
  printf("\n");
  pedirPos(bandas);
  printf("\n");
  pedirTipo(bandas);
  printf("\n");
  pedirNome(bandas);
  printf("\n");
  return 0;
}//main
