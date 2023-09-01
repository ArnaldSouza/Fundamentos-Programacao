//declaração de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/* Escreva um programa que leia uma senha alfanumérica. Utilize a função
strcmp() para compará-la com uma senha definida internamente no
programa e retorne ao usuário a validade ou não da senha fornecida por
ele, em função do resultado da comparação */

//função main
int main(){

  setlocale(LC_ALL, ""); //para poder fazer o uso de caracteres especiais
  char senha[11] = "Arnald1234"; //declaração de variaveis
  char senha2[11];

  printf("Digite a sua senha:");//pede a senha ao usuário
  fgets(senha2,11,stdin); //recebe a senha digitada
  senha2[strcspn(senha2, "\n")] = '\0'; //troca o \n por \0

  if(strcmp(senha,senha2) == 0){ //se a senha for correta a linha 24 executará
    printf("A senha está correta!!! \n");
  }else{
    printf("Senha Incorreta!!! \n"); //caso algum caractere estiver errado
  }

  return 0;
}//main
