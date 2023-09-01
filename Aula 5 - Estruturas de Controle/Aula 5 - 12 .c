//declaração de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* A prefeitura de uma cidade fez uma pesquisa entre seus habitantes, coletando dados sobre salários
e números de filhos. A prefeitura deseja saber:
- a média do salário da população;
- a média do número de filhos;
- o maior salário;
- a porcentagem de pessoas com salários até R$ 400,00.
Finalizar a entrada de dados ao ser digitado um valor negativo em salario*/

//função main
int main(){

  setlocale(LC_ALL, ""); //para poder fazer o uso de caracteres especiais
   int hab = 0, filhos = 0, habsal400 = 0, filhosT = 0; //declaração de variaveis
   //habitantes, filhos, habitantes com salario <=400;
   float salario = 0, msalario = 0 , mfilhos = 0, masalario = 0 , ps400 = 0, salarioT = 0;
   //salario, media salario , media filhos, maior salario, pessoas com slario menor ou igual a 400

   for(int i = 1;i >0 ; i++){
     printf("Digite o valor do salario: \n"); ///pedido do valor do salario
     scanf("%f",&salario); //armazenamento do salario

     if(salario < 0){ //se o salario for negativo o loop é parado automaticamente
      break;
     } //if salario < 0 para tudo

     printf("Digite o número de filhos: \n"); //pedido do numero de filhos
     scanf("%i",&filhos); //armazenamento do numero de filhos

     if(salario > masalario){ //se salario for maior que o maior salario então ele passa a ser maior salario
      masalario = salario;
    } //if maior salario
     if(salario <= 400){//se o salario for <=400 o numero de habitantes com salario <= 400 aumentara
       habsal400 ++;
     }  // if habitantes salario <=400

     filhosT += filhos; //soma os numeros de filhos
     salarioT += salario; //soma os salarios
     hab++; // numero de habitantes aumenta em 1
   }

    msalario = salarioT / hab; //calculo da media de salario
    mfilhos = filhosT / hab; //calculo da media de filhos
    ps400 = habsal400 / (float)hab ; //porcentagem de pessoas com salario >= 400
    ps400 *= 100;

    printf("A população é de: %i habitantes, o numero de filhos é: %i e as pessoas com salario <= 400 é de: %i \n",hab, filhosT, habsal400);
    printf("A média do salario da população é: %.2f \n",msalario); //mostra a media de salarios
    printf("A média do número de filhos é: %.2f \n",mfilhos); //mostra a media de filhos
    printf("A maior salário é: %.2f \n",masalario); //mostra o maior slario
    printf("A porcentagem da população com salario até R$400,00 é: %.2f porcento\n",ps400); //mostra a porcentgaem de salario <= 400

  return 0;
}//main
