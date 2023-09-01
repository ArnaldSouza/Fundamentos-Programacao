//declaração de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/* Escreva um trecho de código para fazer a criação dos novos tipos de dados conforme
solicitado abaix:
- Horário: composto de hora, minutos e segundos
- Data: composto de dia, mês e ano.
- Compromisso: local horário e texto que descreve o compromisso.*/

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


//função main
int main(){

  setlocale(LC_ALL, ""); //para poder fazer o uso de caracteres especiais
   //declaração de variaveis
    
  return 0;
}//main
