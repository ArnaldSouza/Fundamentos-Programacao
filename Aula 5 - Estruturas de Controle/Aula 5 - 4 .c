//declaração de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Faça um programa que recebe a idade de um nadador e
classifique-o numa das seguintes categorias:
– Adulto (idade >=18);
– Juvenil (idade >=14 e idade < 18);
– Infantil (idade >=9 e idade < 14);
– Mirim (Idade < 9)*/

//função main
int main(){

  setlocale(LC_ALL, ""); //para poder fazer o uso de caracteres especiais

  int idade;//declaração de variáveis
  printf("Qual sua idade? ");//inserção da idade
  scanf("%i",&idade);//armazenamento da idade

  if(idade >= 18){//se a categoria for adulto
    printf("A sua categoria e' adulto \n");//mostrando qual a categoria pertence
  }else{
    if(idade >= 14){//se a categoria for juvenil
      printf("A sua categoria e' juvenil \n");//mostrando qual a categoria pertence
    }else{
      if(idade >= 9){//se a categoria for infantil
        printf("A sua categoria e' infantil \n");//mostrando qual a categoria pertence
      }else{//se a categoria for mirim
        printf("A sua categoria e' mirim \n");//mostrando qual a categoria pertence
      }
    }
  }

return 0;
}//main
