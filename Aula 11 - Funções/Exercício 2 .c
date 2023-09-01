//declara��o de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/* Fa�a uma fun��o que recebe a m�dia final de um aluno por par�metro e retorna seu conceito,
conforme a seguir:
                  [0,5[ ==> D
                  [5,7[ ==> C
                  [7,9[ ==> B
                  [9,10] ==> A
 */

 char media(float mediaf){
   if (mediaf >= 0 && mediaf < 5) //se for igual a 0 e menor que 5 retornar� D
     return 'D';
     else if (mediaf >= 5 && mediaf < 7){ //se for igual a 5 e menor que 7 retornar� C
       return 'C';
     } else if (mediaf >= 7 && mediaf < 9){ //se for igual a 7 e menor que 9 retornar� B
       return 'B';
     }else if(mediaf >= 9 && mediaf <= 10){ //se for igual a 9 e menor ou igual 10 retornar� A
       return 'A';
     }
 }//media

//fun��o main
int main(){

  setlocale(LC_ALL, ""); //para poder fazer o uso de caracteres especiais
  float mfinal;
  char medfinal;//declara��o de variaveis

  printf("Digite a media final do aluno: "); //pede a media final do aluno
  scanf("%f",&mfinal); //armazena a m�dia final

  medfinal = media(mfinal); //chama a fun��o media e coloca nela o valor d� m�dia final

  printf("O conceito final �: %c \n",medfinal); //exibe o conceito final

  return 0;
}//main
