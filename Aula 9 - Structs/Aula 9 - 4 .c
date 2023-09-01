//declaração de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
/* Construa uma estrutura aluno com nome, numero de
matrícula e curso. Leia do usuário a informação de 5 alunos,
armazene em vetor dessa estrutura e imprima os dados na
tela. Ordene o vetor de acordo com o nome do aluno. Ordene em
ordem alfabética. */

typedef struct { /*//definindo a estrutura*/
	char nome[30];
	char matricula[10];
	char curso[20];
} Alunos;

int main() {
	int i,j;
	Alunos turma[6]; //definindo turma como uma variavel do tipo alunos

	for(i=1; i<6; i++){
	    printf("Digite o seu nome:"); //pedindo o nome
	    fflush(stdin);
	    fgets(turma[i].nome, 30, stdin); //armazenando o nome

	    printf("Digite o seu numero da matricula:"); //pedindo a matricula
	    fflush(stdin);
	    fgets(turma[i].matricula,10,stdin); //armazenando a matricula

	    printf("Digite o seu curso:"); //pedindo o curso
	    fflush(stdin);
	    fgets(turma[i].curso, 20, stdin);//armazenando o curso

      printf("\n");
	}

	printf("\nPessoas em ordem alfabetica:\n");
	for(i=1; i<6; i++){
        for(j=i+1;j<6;j++){
	        if(strcoll(turma[i].nome , turma[j].nome) > 0 ){
                turma[0]=turma[i];
                turma[i]=turma[j];
                turma[j]=turma[0];
	        }
        }
	}
	for(i=1;i<6;i++){
        printf("NOME: %s\n",turma[i].nome);
	}
	return 0;
}
