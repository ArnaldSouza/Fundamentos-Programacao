//declaração de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Elaborar um algoritmo para receber os seguintes dados dos funcionários de uma empresa:
salário e sexo (M ou F). Computar e escrever:
-quantidade de funcionarios do sexo masculino
-quantidades de funcionario do sexo feminino
-quantidade total de funcionarios
-media dos salarios
-encerrar o processo ao ler o valor 0 como salário */

//função main
int main(){

  setlocale(LC_ALL, ""); //para poder fazer o uso de caracteres especiais
  int sexoM = 0, sexoF = 0, ft = 0;//declaração de variaveis
  float salario = 0 , msalario = 0, salarioT = 0;
  int sexo;

  for(int i=1; i>0; i++){
    printf("Digite o valor do seu salário:\n"); //pedido do valor do salario
    scanf("%f",&salario); //armazenamento do salario

    if(salario < 0){
      break;
    }//quando o salario for negativo o loop irá parar

    printf("Qual seu sexo?\n"); //pede o sexo da pessoa
    printf("1 - Feminino\n"); //opção feminino
    printf("2 - Masculino\n"); //opção feminino
    scanf("%i",&sexo); //armazenamento do sexo da pessoa

    switch(sexo){
      case 1:
        printf("sexo feminino!!! \n"); //caso a opção for 1 mostrara que é sexo feminino
        sexoF++; //incrementa a variavel sexo feminino
        break;
      case 2:
        printf("sexo masculino!!! \n"); //caso a opção for 2 mostrara que é sexo masculino
        sexoM++; //incrementa a variavel sexo masculino
        break;
      default:
        printf("opção errada!\n"); //caso a opção não for 1 nem 2
        break;
    }//switch

  salarioT += salario; //soma os salarios

  ft++; //aumenta o numero de funcionarios a cada vez
  }//for

  msalario = salarioT / (float)ft; //calculo da media de salarios

  printf("A quantidade de funcionários do sexo feminino é: %i \n",sexoF); //mostra o nº de pessoas do sexo fem
  printf("A quantidade de funcionários do sexo masculino é: %i \n",sexoM); //mostra o nº de pessoas do sexo masc
  printf("A quantidade total de funcionários é: %i \n",ft); //mostra o n° total de funcionários
  printf("A média dos salários é: %.2f \n",msalario); //mostra a media de salario

  return 0;
}//main
