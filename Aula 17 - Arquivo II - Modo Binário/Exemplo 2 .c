//declaração de bibliotecas
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

//função main
int main(){

  setlocale(LC_ALL, ""); //para poder fazer o uso de caracteres especiais
  //declaração de variaveis

  FILE *arquivo;

  Pessoa grupo[4] = {"Arnald", "Rua 1", 19, "Carlos", "Rua 2", 22, "João", "Rua 3", 23, "Luis", "Rua 4", 18};

  //gravar informação dentro do arquivo
  arquivo = fopen("Cadastro.bin","wb");
  if(arquivo == NULL){
    printf("Deu zica na abertura para escrita");
    //matar a execução do programa;
    exit(1);
  }
  //abriu com sucesso
  fwrite(grupo, sizeof(Pessoa), 4, arquivo);
  fclose(arquivo);

  arquivo = fopen("Cadastro.bin","rb");
  if(arquivo == NULL){
    printf("Deu zica na abertura para leitura");
    //matar a execução do programa;
    exit(1);
  }
  //abriu com sucesso (leitura)
  //deslocar pelo arquivo (fseek)
  //fseek(arquivo, qntd de bytes vai andar,origem - a partir de onde )
  // do começo do arquivo (SEEK_SET) , vamos avançar 2* qtde de bytes do tipo pessoa
  int posicao;
  printf("Digite a posição do vetor que gostria de recuperar a posição: [0-3] ");
  scanf("%i",&posicao);
  //pede ao usuario uma posição desejada
  if(posicao > 3 || posicao < 0){
    printf("Posição inválida!\n");
    exit(1); //mata a execução do programa
  }//se posição for maior que 3 ou menor que 0 o programa para

  fseek(arquivo, posicao*sizeof(Pessoa), SEEK_SET);

  //POsso pegar os dados do 3 registro (pessoa)
  //pegar dados do arquivo (fread)
  Pessoa retorno;
  //pegando a informação de 1 pessoa no arquivo e salvando na variavel retorno
  fread(&retorno, sizeof(Pessoa), 1, arquivo);
  fclose(arquivo);

  //imprimir a informação lida
  printf("----------------\n");
  printf("Posição: %i\n", posicao);
  printf("----------------\n");
  printf("Nome: %s\n", retorno.nome);
  printf("Rua: %s\n", retorno.rua);
  printf("Idade: %i\n", retorno.idade);
  printf("----------------\n");


  return 0;
}//main
