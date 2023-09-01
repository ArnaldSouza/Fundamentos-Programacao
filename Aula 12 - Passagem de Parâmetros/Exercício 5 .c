//declara��o de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/* Crie um sistema de gerenciamento de bandas seguindo os seguintes passos:
1 - Defina uma estrutura que ir� representar as bandas de m�sica. Essa estrutura deve ter o nome da banda, que
  tipo de m�sica ela toca, o n�mero de integrantes e em que posi��o do ranking ela esta dentre as sua 5 favoritas.
2 - Crie uma fun��o para preencher as 5 estruturas de bandas criadas no exemplo passado. Ap�s criar e preencher,
  exibas todas as informa��es das bandas/estruturas.
3 - Crie uma fun��o que pe�a ao usu�rio o n�mero de 1 a 5. Em seguida, seu programa deve exibir informa��es da banda
  cuja posi��o no seu ranking � que foi solicitada pelo usu�rio.
4 - Crie uma fun��o que pe�a ao usu�rio um tipo de m�sica e exiba as bandas com este tipo de m�sica no seu ranking.
5 - Crie uma fun��o que pe�a o nome de uma banda ao usu�rio e diga se ela est� entre suas bandas favoritas ou n�o.
6 - Agora junte tudo  e crie um menu com as op��es de preencher as estruturas e todas as op��es das quest�es
passadas.
  */

typedef struct {
    char nome[30];
    char tipo[25];
    int n_integrantes;
    int pos;
}Banda; //struct banda

//fun��o armazenarbandas
void armazenarBandas(Banda bandas[5]){
  for(int i = 0; i < 5; i++){
    printf("Digite o nome da banda: "); //pede o nome da banda
    fgets(bandas[i].nome,30,stdin); //recebe o nome da banda
    bandas[i].nome[strcspn(bandas[i].nome, "\n")] = '\0'; //substitui o \n por \0
    fflush(stdin); //limpa o buffer

    printf("O tipo de m�sica que eles tocam: "); //pede o tipo de m�sica
    fgets(bandas[i].tipo,25,stdin); //armazena o tipo de musica
    bandas[i].tipo[strcspn(bandas[i].tipo, "\n")] = '\0'; //substitui o \n por \0
    fflush(stdin); //limpa o buffer

    printf("O n�mero de integrantes: "); //pede  numero de integrantes
    scanf("%i", &bandas[i].n_integrantes); //armazena o n�mero de integrantes
    fflush(stdin); //limpa o buffer

    printf("A posi��o no seu ranking de favoritos: "); //pede a posi��o no rakning
    scanf("%i", &bandas[i].pos); //armazena  a posi��o
    fflush(stdin); //limpa o buffer

    printf("\n");
  }

  printf("\n");
  for (int i = 0; i < 5; i++) { //mostra os dados informados
    printf("Banda: %s \n",bandas[i].nome);
    printf("Tipo de m�sica: %s \n",bandas[i].tipo);
    printf("N� de integrantes: %i \n",bandas[i].n_integrantes);
    printf("Posi��o: %i � \n",bandas[i].pos);
    printf("\n");
  }
}
//armazenarBandas

//fun��o pedirPos
void pedirPos(Banda bandas[5]){
  int pos;
  printf("\n");
  printf("--------------------------------------\n");
  printf("--------------------------------------\n");
  printf("---- Digite a posi��o desejada: ------\n");
  printf("---- 1 : Banda na primeira posi��o ---\n");
  printf("---- 2 : Banda na segunda posi��o ----\n");
  printf("---- 3 : Banda na terceira posi��o ---\n");
  printf("---- 4 : Banda na quarta posi��o -----\n");
  printf("---- 5 : Banda na quinta posi��o -----\n");
  printf("--------------------------------------\n");
  printf("--------------------------------------\n");
  scanf("%i",&pos);
  //pede a posi��o que o usu�rio deseja ver a banda
  switch (pos) {
    case 1: //mostrara a banda na posi��o 1
      for(int i = 0; i < 5;i++){
        if(pos == bandas[i].pos){
          printf("Banda: %s \n",bandas[i].nome);
          printf("Tipo de m�sica: %s \n",bandas[i].tipo);
          printf("N� de integrantes: %i \n",bandas[i].n_integrantes);
        }
      }
      break;

    case 2: //mostrara a banda na posi��o 2
    for(int i = 0; i < 5;i++){
      if(pos == bandas[i].pos){
        printf("Banda: %s \n",bandas[i].nome);
        printf("Tipo de m�sica: %s \n",bandas[i].tipo);
        printf("N� de integrantes: %i \n",bandas[i].n_integrantes);
      }
     }
      break;

    case 3: //mostrara a banda na posi��o 3
    for(int i = 0; i < 5;i++){
      if(pos == bandas[i].pos){
        printf("Banda: %s \n",bandas[i].nome);
        printf("Tipo de m�sica: %s \n",bandas[i].tipo);
        printf("N� de integrantes: %i \n",bandas[i].n_integrantes);
        }
      }
      break;

    case 4: //mostrara a banda na posi��o 4
    for(int i = 0; i < 5;i++){
      if(pos == bandas[i].pos){
        printf("Banda: %s \n",bandas[i].nome);
        printf("Tipo de m�sica: %s \n",bandas[i].tipo);
        printf("N� de integrantes: %i \n",bandas[i].n_integrantes);
      }
    }
      break;

    case 5: //mostrara a banda na posi��o 5
    for(int i = 0; i < 5;i++){
      if(pos == bandas[i].pos){
        printf("Banda: %s \n",bandas[i].nome);
        printf("Tipo de m�sica: %s \n",bandas[i].tipo);
        printf("N� de integrantes: %i \n",bandas[i].n_integrantes);
      }
    }
      break;
  }
}
//pedirPos

//fun��o pedirTipo
char pedirTipo(Banda bandas[5]){
  char tipo[25];
  int band;

  fflush(stdin); //limpa o buffer
  printf("Digite um tipo de m�sica: \n"); //pede um tipo de musica
  fgets(tipo,25,stdin); //armazena o Tipo
  tipo[strcspn(tipo, "\n")] = '\0'; //substitui o \n por \0
  fflush(stdin); //limpa o buffer

 for(int i = 0; i < 5; i++){
    band = strcasecmp(tipo,bandas[i].tipo); //procura os tipos iguais
    if(band == 0){ //exibe as bandas que tem o mesmo tipo informado
      printf("\n");
      printf("Banda: %s \n",bandas[i].nome);
      printf("N� de integrantes: %i \n",bandas[i].n_integrantes);
    }
  }
  return 0;
}
//pedirTipo

//fun��o pedriNome
char pedirNome(Banda bandas[5]){
  char nbanda[30];
  int band, cont = 0;

  fflush(stdin);
  printf("Digite um nome de banda: \n"); //pede um nome de uma banda
  fgets(nbanda,30,stdin); //armazena esse nome
  nbanda[strcspn(nbanda, "\n")] = '\0';
  fflush(stdin);//limpa o buffer

 for(int i = 0; i < 5; i++){
    band = strcasecmp(nbanda,bandas[i].nome); //compaara com todos os elementos infomrados se existe algum igual�
    if(band == 0){ //acrescentara 1 na vari�vel se o nome de banda informada existir
      cont++;
    }
 }

  if(cont != 0){ //se existir exibir� essa mensagem
    printf("Essa est� entre as minhas favoritas! \n");
  }else{//caso n�o exista
    printf("Essa banda n�o est� entre as minhas favoritas \n");
  }

  return 0;
}
//pedir nome

//fun��o main
int main(){

  setlocale(LC_ALL, ""); //para poder fazer o uso de caracteres especiais
  Banda bandas[5];//declara��o de variaveis

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
