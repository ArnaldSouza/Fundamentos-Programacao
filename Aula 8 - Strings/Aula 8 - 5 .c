//declara��o de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/* Escreva um programa que leia uma senha alfanum�rica. Utilize a fun��o
strcmp() para compar�-la com uma senha definida internamente no
programa e retorne ao usu�rio a validade ou n�o da senha fornecida por
ele, em fun��o do resultado da compara��o */

//fun��o main
int main(){

  setlocale(LC_ALL, ""); //para poder fazer o uso de caracteres especiais
  char senha[11] = "Arnald1234"; //declara��o de variaveis
  char senha2[11];

  printf("Digite a sua senha:");//pede a senha ao usu�rio
  fgets(senha2,11,stdin); //recebe a senha digitada
  senha2[strcspn(senha2, "\n")] = '\0'; //troca o \n por \0

  if(strcmp(senha,senha2) == 0){ //se a senha for correta a linha 24 executar�
    printf("A senha est� correta!!! \n");
  }else{
    printf("Senha Incorreta!!! \n"); //caso algum caractere estiver errado
  }

  return 0;
}//main
