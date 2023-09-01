//declara��o de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

  float mediaP (float p1, float p2, float p3, float trab){
    float mponderada;
    mponderada = (p1 * 2 + p2 * 2 + p3 * 4 + trab * 2) / 10;// Calcula media ponderada
    return mponderada;//retorna a media ponderada

  }//mediaP, Calcula a media ponderada do aluno

//fun��o main
int main(){

  setlocale(LC_ALL, ""); //para poder fazer o uso de caracteres especiais
  float p1, p2, p3, trab, mediaPonderada, notaMini, exame, notaFinal;//declara��o de variaveis

  do{
    printf("Forne�a a nota da prova 1: ");//Pedindo para insirir a nota da prova 01
    scanf("%f",&p1);//armazenando o valor da prova 01
  }while(p1 < 0 || p1 > 10);//Cria um la�o de repeti��o que apenas permiti que o usu�rio insira notas no intervalo de [0-10]

  do{
    printf("Forne�a a nota da prova 2: ");//Pedindo para insirir a nota da prova 02
    scanf("%f",&p2);//armazenando o valor da prova 02
  }while(p2 < 0 || p2 > 10);//Cria um la�o de repeti��o que apenas permiti que o usu�rio insira notas no intervalo de [0-10]

  do{
    printf("Forne�a a nota da prova 3: ");//Pedindo para insirir a nota da prova 03
    scanf("%f",&p3);//armazenando o valor da prova 03
  }while(p3 < 0 || p3 > 10 );//Cria um la�o de repeti��o que apenas permiti que o usu�rio insira notas no intervalo de [0-10]

  do{
    printf("Forne�a a nota do trabalho: ");//Pedindo para insirir a nota do trabalho
    scanf("%f",&trab);//armazenando o valor da nota do trabalho
  }while(trab < 0 || trab > 10 );//Cria um la�o de repeti��o que apenas permiti que o usu�rio insira notas no intervalo de [0-10]

  mediaPonderada = mediaP(p1, p2, p3, trab);//Chamando fun��o mediaP

  notaMini = 12 - mediaPonderada;//Calcula a nota minima para o exame

  if(mediaPonderada >= 6 ){
    printf("O aluno foi aprovado com nota %.1f!\n", mediaPonderada);//Exibe seu o aluno foi aprovado
  }else{//caso o aluno n�o tenha nota >= 6
    printf("O aluno ficou de Exame!\n");
    printf("A nota minima para o aluno ser aprovado �: %.1f\n", notaMini);

    do{
      printf("Forne�a a nota do exame: ");//Pedindo para insirir a nota do exame
      scanf("%f",&exame);//armazenando o valor da nota do exame
    }while(exame < 0 || exame > 10 );//Cria um la�o de repeti��o que apenas permiti que o usu�rio insira notas no intervalo de [0-10]

    notaFinal = (mediaPonderada + exame) / 2; //calculo da nota final ap�s exame

    if(exame >= notaMini){//Verifica se o aluno foi aprovado no exame
      printf("O aluno foi aprovado no exame com m�dia 6 \n");
    }else{
      printf("O aluno n�o foi aprovado e ficou com m�dia final: %.1f \n", notaFinal);
    }//else
  }//else

  return 0;
}//main
