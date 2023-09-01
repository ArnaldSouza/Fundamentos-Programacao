//declara��o de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Elaborar um algoritmo para receber os seguintes dados dos funcion�rios de uma empresa:
sal�rio e sexo (M ou F). Computar e escrever:
-quantidade de funcionarios do sexo masculino
-quantidades de funcionario do sexo feminino
-quantidade total de funcionarios
-media dos salarios
-encerrar o processo ao ler o valor 0 como sal�rio */

//fun��o main
int main(){

  setlocale(LC_ALL, ""); //para poder fazer o uso de caracteres especiais
  int sexoM = 0, sexoF = 0, ft = 0;//declara��o de variaveis
  float salario = 0 , msalario = 0, salarioT = 0;
  int sexo;

  for(int i=1; i>0; i++){
    printf("Digite o valor do seu sal�rio:\n"); //pedido do valor do salario
    scanf("%f",&salario); //armazenamento do salario

    if(salario < 0){
      break;
    }//quando o salario for negativo o loop ir� parar

    printf("Qual seu sexo?\n"); //pede o sexo da pessoa
    printf("1 - Feminino\n"); //op��o feminino
    printf("2 - Masculino\n"); //op��o feminino
    scanf("%i",&sexo); //armazenamento do sexo da pessoa

    switch(sexo){
      case 1:
        printf("sexo feminino!!! \n"); //caso a op��o for 1 mostrara que � sexo feminino
        sexoF++; //incrementa a variavel sexo feminino
        break;
      case 2:
        printf("sexo masculino!!! \n"); //caso a op��o for 2 mostrara que � sexo masculino
        sexoM++; //incrementa a variavel sexo masculino
        break;
      default:
        printf("op��o errada!\n"); //caso a op��o n�o for 1 nem 2
        break;
    }//switch

  salarioT += salario; //soma os salarios

  ft++; //aumenta o numero de funcionarios a cada vez
  }//for

  msalario = salarioT / (float)ft; //calculo da media de salarios

  printf("A quantidade de funcion�rios do sexo feminino �: %i \n",sexoF); //mostra o n� de pessoas do sexo fem
  printf("A quantidade de funcion�rios do sexo masculino �: %i \n",sexoM); //mostra o n� de pessoas do sexo masc
  printf("A quantidade total de funcion�rios �: %i \n",ft); //mostra o n� total de funcion�rios
  printf("A m�dia dos sal�rios �: %.2f \n",msalario); //mostra a media de salario

  return 0;
}//main
