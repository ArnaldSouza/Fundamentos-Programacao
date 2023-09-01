//declara��o de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

typedef struct{
  char rua[50];
  int numero;
  int num_caso;
}Dados;

//fun��o main
int main(){
    //para poder utilizar pontua��es
    setlocale(LC_ALL, "");
//declara��o de vari�veis
Dados cadastro;
int opcao;
int num_casa;
int ncasa_excluir;
char pesquisa_rua[50];
char modificar_casa[50];
char excluir_casa[50];

//criando e abrindo arquivo para armazenar os cadastros
FILE *arquivo = fopen("cadastro.txt","w");
//verificando se o arquivo foi aberto
if(arquivo == NULL){
printf("Erro ao abrir o arquivo!\n");
exit(1);// 1 significa erro
}// if


//chamando a fun��o GOTO
retorno:

//menu que o usuario pode escolher uma das op��es
printf("1 - cadastrar uma residencia;\n");
printf("2 - consultar uma residencia;\n");
printf("3 - modificar uma residencia;\n");
printf("4 - remover uma residencia;\n");
printf("5 - sair.\n");
scanf("%i",&opcao);//armazenando a entrada do usuario
setbuf(stdin, NULL); // limpando lixo

//casos referente a escolha do usuario
switch (opcao) {
  case 1:

      printf("Digite o nome da rua: "); // pedindo pro usu�rio entrar com nome
      fgets(cadastro.rua, 50, stdin);// armazenando um nome digitado pelo usuario
      cadastro.rua[strcspn(cadastro.rua, "\n")] = '\0'; // troca o \n por \0
      setbuf(stdin, NULL); // limpando lixo

      printf("Digite o numero da casa: "); // pedindo pro usuario entar com o numero
      scanf("%i", &cadastro.numero); // armaenando numero digitado pelo usuario
      setbuf(stdin, NULL); // limpando lixo

      //condi��o para o numero da casa ser valido, se n�o for, retornar ao menu
      if(cadastro.numero < 0){
        goto retorno;
      }//if

      printf("Digite o numero de casos dentro da casa: "); // pedindo pro usuario entar com o numeor de casos
      scanf("%i", &cadastro.num_caso); // armaenando numero de casos digitado pelo usuario
      setbuf(stdin, NULL); // limpando lixo

      //condi��o para o numero de casos na casa ser valido, se n�o for, retornar ao menu
      if(cadastro.num_caso < 0){
        goto retorno;//func�o GOTO
      }//if
      fprintf(arquivo, "%s\n",cadastro.rua);//armazenando nome da rua no arquivo
      fprintf(arquivo, "%d\n", cadastro.numero); //armazenando numero da casa no arquivo
      fprintf(arquivo, "%d\n", cadastro.num_caso); //armazenando numero de casos da casa no arquivo

      fclose(arquivo);
    break;
  case 2:
      printf("Digite o nome da rua para ver os dados:");// digitantando o nome da rua para ver
      fgets(pesquisa_rua, 50, stdin);// armazenando o  digitado pelo usuario
      pesquisa_rua[strcspn(pesquisa_rua, "\n")] = '\0'; // troca o \n por \0
      setbuf(stdin, NULL); // limpando lixo
    break;

  case 3:
      printf("Digite o nome da rua que deseja modificar: "); // pedindo pro usu�rio entrar com nome
      fgets(modificar_casa, 50, stdin);// armazenando um nome digitado pelo usuario
      modificar_casa[strcspn(modificar_casa, "\n")] = '\0'; // troca o \n por \0
      setbuf(stdin, NULL); // limpando lixo

      printf("Digite o numero da casa que deseja modificar: "); // pedindo pro usuario entar com o numero
      scanf("%i", &num_casa); // armaenando numero digitado pelo usuario
      setbuf(stdin, NULL); // limpando lixo
    break;

  case 4:
    printf("Digite o nome da rua que deseja modificar: "); // pedindo pro usu�rio entrar com nome
    fgets(excluir_casa, 50, stdin);// armazenando um nome digitado pelo usuario
    excluir_casa[strcspn(excluir_casa, "\n")] = '\0'; // troca o \n por \0
    setbuf(stdin, NULL); // limpando lixo

    printf("Digite o numero da casa que deseja modificar: "); // pedindo pro usuario entar com o numero
    scanf("%i", &ncasa_excluir); // armaenando numero digitado pelo usuario
    setbuf(stdin, NULL); // limpando lixo
    break;

  case 5:
      return 0;
    break;

  default:
      printf("Op��o inv�lida, digite um n�mero que exista no menu\n");
    break;
}//switch



return 0;
}//main
