//declaração de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/* */
int fibonacci(int n1){
  if(n1 == 1 || n1 == 2)
    return 1;
  else if (n1 >2)
    return fibonacci(n1-1) + fibonacci(n1-2);
}
//função main
int main(){
  int n1, res;
  //declaração de variaveis

  printf("Qual o valor de N?");
  scanf("%i",&n1);

  res = fibonacci(n1);
  printf("A soma dos %i elementos da sequencia de fibonacci e' = %i \n",n1, res);
  return 0;
}//main
