//declara��o de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/* Escreva um trecho de c�digo para fazer a cria��o dos novos tipos de dados conforme
solicitado abaix:
- Hor�rio: composto de hora, minutos e segundos
- Data: composto de dia, m�s e ano.
- Compromisso: local hor�rio e texto que descreve o compromisso.*/

typedef struct{
  int hora;
  int minutos;
  int segundos;
}Horario;

typedef struct{
  int dia;
  int mes;
  int ano;
}Data;

typedef struct{
  char local[17];
  Horario h;
  char info[33];
}Compromisso;


//fun��o main
int main(){

  setlocale(LC_ALL, ""); //para poder fazer o uso de caracteres especiais
   //declara��o de variaveis
    
  return 0;
}//main
