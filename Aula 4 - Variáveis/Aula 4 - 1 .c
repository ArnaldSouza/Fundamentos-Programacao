#include stdio.h
#include stdlib.h
#include locale.h
#include math.h

/*Peça a altura (em metros) e o peso (Kg) de uma pessoa. Calcule e
mostre o IMC da pessoa
imc=peso/altura*altura
Dica: para usar potência, deve-se inserir a biblioteca math.h no começo
do arquivo e usar a função pow
*/

int main(){
    float altura, peso, imc = 0; //declaração das variáveis

  //pedindo e armazendando altura e peso do usuario
  printf("Forneça sua altura:\n");
  scanf("%f",&altura);
  printf("Forneça seu peso:\n");
  scanf("%f",&peso);

  //calculo do imc e impressão do mesmo
  imc = peso / pow(altura,2);
  printf("Seu imc é: %.2f \n",imc);

  return 0;
}
