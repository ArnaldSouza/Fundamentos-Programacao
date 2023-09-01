//declara��o de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <math.h>

typedef struct{
  char nome[30];
  char rua[30];
  int idade;
}Pessoa;

//fun��o main
int main(){

  setlocale(LC_ALL, ""); //para poder fazer o uso de caracteres especiais
  //declara��o de variaveis

  FILE *arquivo;

  Pessoa grupo[4] = {"Arnald", "Rua 1", 19, "Carlos", "Rua 2", 22, "Jo�o", "Rua 3", 23, "Luis", "Rua 4", 18};

  //gravar informa��o dentro do arquivo
  arquivo = fopen("Cadastro.bin","wb");
  if(arquivo == NULL){
    printf("Deu zica na abertura para escrita");
    //matar a execu��o do programa;
    exit(1);
  }
  //abriu com sucesso
  fwrite(grupo, sizeof(Pessoa), 4, arquivo);
  fclose(arquivo);

  arquivo = fopen("Cadastro.bin","rb");
  if(arquivo == NULL){
    printf("Deu zica na abertura para leitura");
    //matar a execu��o do programa;
    exit(1);
  }
  //abriu com sucesso (leitura)
  //deslocar pelo arquivo (fseek)
  //fseek(arquivo, qntd de bytes vai andar,origem - a partir de onde )
  // do come�o do arquivo (SEEK_SET) , vamos avan�ar 2* qtde de bytes do tipo pessoa
  int posicao;
  printf("Digite a posi��o do vetor que gostria de recuperar a posi��o: [0-3] ");
  scanf("%i",&posicao);
  //pede ao usuario uma posi��o desejada
  if(posicao > 3 || posicao < 0){
    printf("Posi��o inv�lida!\n");
    exit(1); //mata a execu��o do programa
  }//se posi��o for maior que 3 ou menor que 0 o programa para

  fseek(arquivo, posicao*sizeof(Pessoa), SEEK_SET);

  //POsso pegar os dados do 3 registro (pessoa)
  //pegar dados do arquivo (fread)
  Pessoa retorno;
  //pegando a informa��o de 1 pessoa no arquivo e salvando na variavel retorno
  fread(&retorno, sizeof(Pessoa), 1, arquivo);
  fclose(arquivo);

  //imprimir a informa��o lida
  printf("----------------\n");
  printf("Posi��o: %i\n", posicao);
  printf("----------------\n");
  printf("Nome: %s\n", retorno.nome);
  printf("Rua: %s\n", retorno.rua);
  printf("Idade: %i\n", retorno.idade);
  printf("----------------\n");


  return 0;
}//main
