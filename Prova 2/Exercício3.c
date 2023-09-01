//declaração de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <math.h>

//função main
int main(){

  setlocale(LC_ALL, ""); //para poder fazer o uso de caracteres especiais

  //declaração do arquivo numeros
  FILE *arq;
  arq = fopen("C:\\Users\\Arninho\\Desktop\\Aulas Eng. Computação\\AULAS\\3º Semestre\\Fundamentos de Programação\\Códigos\\Prova 2\\poema.txt", "r+");

  if(arq == NULL){
    perror("");
    printf("\n");
    exit(1);
  }//if

  //declaração de variaveis
  char linha_arquivo[14][50];
  char arquivo_novo[14][50];
  int i,j, k, l;

  //inserindo valores do arquivo no vetor
  for(i = 0; i < 14;i++){
    for(j = 0; j < 50; j++){
      linha_arquivo[i][j] = fgetc(arq);
    }//for interno
  }//for externo

  //invertendo texto e inserindo em uma nova variavel
  for(i = 0 ,k = 14; i < 14, k > 0; i++,k--){
    for(j = 0, l = 0; j <50, l<50; j++, l++){
      arquivo_novo[k][l] = linha_arquivo[i][j];//inverte o texto
    }//for interno
  }//for externo

  FILE *arq2;
  arq2 = fopen("C:\\Users\\Arninho\\Desktop\\Aulas Eng. Computação\\AULAS\\3º Semestre\\Fundamentos de Programação\\Códigos\\Prova 2\\poema_inv.txt", "w+");

  for(i = 0; i < 14; i++){
  for(j = 0; j < 50; j++){
      fputc(arquivo_novo[i][j], arq2);//Gera um novo arquivo com o texto invertido
    }//for interno
  }//for externo

  return 0;
}//main
