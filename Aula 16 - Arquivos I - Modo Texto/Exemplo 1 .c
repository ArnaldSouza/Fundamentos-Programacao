//declaração de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/*  */

//função main
int main(){
  FILE *arq;
  char str[] = " Hello" ;

  int i = 0;

  arq = fopen("arquivo.txt", "a");
  if(arq == NULL){
    printf("Erro ao abrir o arquivo");
    system("pause");
    exit(1);
  }

  while(str[i] != '\0'){
    fputc(str[i], arq);
    i++;
  }

  fclose(arq);

  return 0;
}//main
