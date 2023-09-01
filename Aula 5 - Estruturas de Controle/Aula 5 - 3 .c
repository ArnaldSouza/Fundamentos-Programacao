//declaração de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Desenvolver a lógica para um programa que efetue o cálculo do
reajuste de salário de um funcionário
– Salario <= 500, reajuste de 15%
– Salario > 500, mas Salario <= 1000, reajuste será de 10%
– Salario > 1000, reajuste será de 5%
Ao final do programa, mostrar o valor do salário somado ao
reajuste. */

//função main
int main(){
  setlocale(LC_ALL,""); //para poder fazer o uso de caracteres especiais
  float salario, salarioT;//declaração de variáveis

  printf("Digite o valor do salário:");//pedido do salario
  scanf("%f", &salario);//armazenamento da variavel salario

  if(salario <= 500 ){ //reajuste de 15%
    salarioT = salario + salario * 0.15;
    printf("O salario total e': %.2f ",salarioT);//salario com 15% de reajuste
  }else{
    if(salario <= 1000){//reajuste de 10%
      salarioT = salario + salario * 0.10;
      printf("O salario total e': %.2f ",salarioT);//salario com 10% de reajuste
    }else{//reajuste de 5%
      salarioT = salario + salario * 0.05;
      printf("O salario total e': %.2f ",salarioT);//salario com 5% de reajuste
      }
    }

return 0;
}//main
