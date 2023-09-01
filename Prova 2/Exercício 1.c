//declaração de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <math.h>

int *soma(int *vetor, int cont_linha){
  if(cont_linha == 0){
    return 0;
  }else{
    return vetor[cont_linha] + soma(*vetor, cont_linha - 1);
  }//else
}//função recursiva soma, ela soma os numeros do arquivo

//função main
int main(){

  setlocale(LC_ALL, ""); //para poder fazer o uso de caracteres especiais

  //declaração do arquivo numeros
  FILE *arq;
  arq = fopen("C:\\Users\\Arninho\\Desktop\\Aulas Eng. Computação\\AULAS\\3º Semestre\\Fundamentos de Programação\\Códigos\\Prova 2\\numeros.txt", "r+");

  //declaração de variaveis
  int cont_linha = 0, soma_total;
  char conta = 0;
  int *vetor;

  //caso o arquivo não seja encontrado retorna o erro
  if(arq == NULL){
    perror("");
    printf("\n");
    exit(1);
  }//if

  //conta a quantidade de linhas do arquivo
  while((conta = fgetc(arq)) != EOF){
    if(conta == '\n'){
      cont_linha++;
    }//if
  }//while

  //aloca dinamicamente o vetor
  vetor = (int*) malloc (cont_linha * sizeof(int));

  //le os valores  do arquivo
  while(((fscanf(arq, "%d", vetor[cont_linha])) != EOF)){
    cont_linha++; //Incremento de posicao
  }//while

  for (int i = 0; i <= 1; i++){
    for(int j = 0; j < cont_linha; j++){
      fscanf(arq, "%d", &vetor[j]);
    }//for interno
  }//for externo

  for (int i = 0; i <= 1; i++){
    for(int j = 0; j < cont_linha; j++){
      printf("%i\n" ,vetor[j]);
    }//for interno
  }//for externo


  soma_total = soma(vetor,cont_linha); //iguala a variavel soma a função soma
  printf("A soma dos numeros do arquivo é: %i\n", soma_total);//mostra o valor da soma

  //declaração dos arquivos imapres e pares
  FILE *arqpares;
  FILE *arqimpares;
  arqpares = fopen("C:\\Users\\Arninho\\Desktop\\Aulas Eng. Computação\\AULAS\\3º Semestre\\Fundamentos de Programação\\Códigos\\Prova 2\\pares.txt","w+");
  arqimpares = fopen("C:\\Users\\Arninho\\Desktop\\Aulas Eng. Computação\\AULAS\\3º Semestre\\Fundamentos de Programação\\Códigos\\Prova 2\\impares.txt", "w+");

  //salva o conteudo do vetor nos arquivos se o conteudo for par ele vai para o arquivo par,
  //se impar vai para o arquivo impar
  if(vetor[cont_linha]%2 == 0){
    fprintf(arqpares, "%s\n",vetor[cont_linha]);
  }else{
    fprintf(arqimpares, "%s\n",vetor[cont_linha]);
  }

  free(vetor);//libera o vetor
  fclose(arq);//fecha o arquivo numeros
  fclose(arqpares); //fecha o arquivo pares
  fclose(arqimpares); //fecha o arquivo impares

  return 0;
}//main
