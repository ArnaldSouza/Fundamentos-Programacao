//declaração de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/* Escreva uma função que receba por parametro as 3 notas de um aluno e uma letra.
Se a letra for A. o procedimento calcula a média aritmética das notas do aluno, se for P,
a sua média ponderada (pesos: 5. 3 e 2)  e se for S somas das notas. O valor calculado
também deve ser mostrado dentro da função. */

//função media
float media(float n1, float n2, float n3, char op){
  if (op == 'A' || op == 'a') //se for a calculara a média aritmética
    return (n1 + n2 + n3) / 3;
    else if (op == 'P' || op == 'p'){ //se for p calculara a média ponderada
      return (n1 * 5 + n2 * 3 + n3 * 2) / 10;
    } else if (op == 'S' || op == 's'){ //se for igual a s somara as notas
      return n1 + n2 + n3;
    }
}//media

//função main
int main(){

  setlocale(LC_ALL, ""); //para poder fazer o uso de caracteres especiais
  float nota1, nota2, nota3, calc;//declaração de variaveis
  char op;

  //pede a opção desejada
  printf("******************************************* \n");
  printf("*********** Escolha a opção: ************** \n");
  printf("*********** A - média aritmética ********** \n");
  printf("*********** P - média ponderdada ********** \n");
  printf("*********** S - Soma das notas ************ \n");
  printf("******************************************* \n");
  printf("Insira aqui:");
  scanf("%c",&op); //aramzena qual a opção escolhida

  printf("Digite as notas:"); //pede e armazena as notas
  scanf("%f %f %f", &nota1, &nota2, &nota3);

  calc = media(nota1, nota2, nota3, op);//chama a função media e informa a el os valores

  printf("Media ou soma = %.2f \n",calc); //exibe o que foi escolhido 

  return 0;
}//main
