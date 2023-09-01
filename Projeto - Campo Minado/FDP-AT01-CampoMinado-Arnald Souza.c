//autor:ARNALD SOUZA

//declara��o de bibliotecas
#include <stdio.h> //biblioteca de entrada e sa�da
#include <stdlib.h> //biblioteca que cont�m fun��es e constantes b�sicas
#include <string.h> //usar string
#include <locale.h> //usar pontua��o
#include <conio.h> //usanso para limpar tela de exibi��o
#include <time.h> //usa para colocar um delay na exibi��o

//estrutura definindo os tipos de bomba
typedef struct {
  char bomba;
  int bomba_vizinha;
  int nao_bomba;
} Estados_bombas; //condi��es poss�veis das coordenadas

//fun��o main
int main(){

    setlocale(LC_ALL, ""); //para poder utilizar pontua��es

//declara��o de vari�veis
int opcao, linha, coluna, i, j, num_bombas = 0;
int l_usuario, c_usuario, lc_bomba, cc_bomba, auxilio_sair = 0;
char dificuldade;
int multiplica;
srand(time(NULL)); //para n�o colocar as bombas sempre nos mesmos lugares (para diferenciar sorteios dos numeros)

//Abrindo e lendo o arquivo de entrada
FILE *definicao = fopen("modo_de_jogo.txt", "r");

  //condi��o caso n�o haja nenhum arquivo com o nome, exibe "erro"
  if(definicao == NULL){
    printf("Arquivo n�o encontrado!\n");
  }//if

fscanf(definicao, "%i %i %c", &linha, &coluna, &dificuldade);
//l� o numero de linhas, colunas e dificuldade do jogo a partir do arquivo definido acima

//criando uma matriz para o campo minado com o tamanho digitado no arquivo texto
Estados_bombas campo_minado[linha][coluna]; //chamando a estrutura Estados e com ela compondo uma matriz

//Criando arquivo de saida , criado ap�s o final do jogo (caso vitoria ou DERROTA)
FILE *saida;

//menu que exibir� as op��es que o us�ario poder� escolher
printf("***************************************************\n");
printf("*------ BEM-VINDO AO CAMPO MINADO DO ARNALD ------*\n");
printf("*-------------------------------------------------*\n");
printf("*-------- 1 - Para iniciar o jogo ----------------*\n");
printf("*-------- 2 - Para saber as regras do jogo -------*\n");
printf("*-------- 3 - Sair -------------------------------*\n");
printf("*-------------------------------------------------*\n");
printf("***************************************************\n");
scanf("%i",&opcao);//aramzena a op��o digitada pelo usu�rio no menu
system("cls");//chamando o comando que limpa a tela de exibi��o

switch(opcao){
  //caso seja digitado op��o 1, ele iniciar� o jogo
  case 1 :
         //condi��o para saber a quantidade de bombas no jogo conforme a entrada do usuario
         //dependendo da dificuldade colcoada no arquivo pelo usario � calculado a quantidade de bombas que tera o campo
         if(dificuldade == 'f' || dificuldade == 'F' ){
            num_bombas = (linha * coluna) * 0.1;
            num_bombas += 3; //margem de erro por n�o solucionar o loop "tirar duvida com professor"
         }else
          if(dificuldade == 'm' || dificuldade == 'M'){
              num_bombas = (linha * coluna) * 0.2;
              num_bombas += 3;
            }else
              if(dificuldade == 'd' || dificuldade == 'D'){
                num_bombas = (linha * coluna) * 0.3;
                num_bombas += 3;
              }else{
                printf("Dificuldade de jogo inv�lida, coloque apenas m, n ou f!!!\n"); //se o usu�rio colocar uma dificuldade inexistente exibir� essa mensagem
              }//else

         //loop para iniciar todas as posi��es da matriz  em zero (0)
         //evitando que venham valores com lixo
         for(int i = 0; i <linha; i++){
           for(int j = 0; j < coluna; j++){
             campo_minado[i][j].bomba = 0;
             campo_minado[i][j].nao_bomba = 0;
             campo_minado[i][j].bomba_vizinha = 0;
           }//for interno
         }//for externo

         //loop para gerar e alocar as bombas em lugares aleatorios
         for (int k = 0; k < num_bombas; k++){ //locais onde as bombas est�o sendo colocadas de acordo com o tamanho informado pelo usuario no arquivo
            i = rand() % linha; //alocando bomba conforme o tamanho da linha
            j = rand() % coluna; //alocando bomba conforme o tamanho da coluna
            campo_minado[i][j].bomba = 1;// pegando a linha e coluna aleatoria e "colocando" uma bomba
            //1 significa bomba
         }// for

    do{
         //loop para mostrar a organiz��o da estrutura do campo minado
         for (int i = 0; i < linha; i++){
           printf("\n");
           for (int j = 0; j < coluna; j++) {
             printf("| %.2i ", campo_minado[i][j].nao_bomba);
           }//for interno
         }//for externo

         //pedindo para o usu�rio entrar com uma coordenada para verificar se h� uma bomba
         do {
           printf("\nDigite a coordenada da linha: ");
           scanf("%i", &l_usuario);
           printf("Digite a coordenada da coluna: ");
           scanf("%i", &c_usuario);
           l_usuario = l_usuario - 1;
           c_usuario = c_usuario - 1; //para a entrada do usu�rio ser compativel com a da matriz pois a matriz come�a em zero

         if(l_usuario > linha || c_usuario > coluna){
           //se o usuario digite uma coordenada maior exibir� a mesnsagem
             printf("Uma das coordenadas Invalidas!\n\n");
           }//if
         }while(l_usuario >= linha || c_usuario >= coluna);

         for(int i = 0; i < linha; i++) {
           for(int j = 0; j < coluna; j++){
             //se o usu�rio escolher uma coodernada corresponde com uma coordenada que cont�m bomba
              if(campo_minado[i][j].bomba == 1 && l_usuario == i && c_usuario == j){
                campo_minado[i][j].bomba = 'x'; //colocara no lugar escolhido o caracetere X
                saida = fopen("resultado_do_jogo.txt","w+"); //abrindo o arquivo de sa�da por derrota
                fprintf(saida, "DERROTA", campo_minado[i][j]); //escrevendo DERROTA no arquivo
                printf("DERROTA\n"); //exibindo derrota na tela para o usu�rio
              }//if
           }//for interno
         }//for externo

         //loop para a estrutura do campo minado
         for (int i = 0; i < linha; i++){
            fprintf(saida,"\n", campo_minado[i][j]); //imprimindo o resultado da matriz
            printf("\n");
                 for (int j = 0; j < coluna; j++){
                  if(campo_minado[i][j].bomba == 'x' && l_usuario == i && c_usuario == j){
                    fprintf(saida," %c |", 88); //printando o caractere X no arquivo segundo a tabela ASCII
                    printf(" %c |", 88); //exibindo o caractere X para o usu�rio segundo a tabela ASCII
                  }//if
                  if (campo_minado[i][j].bomba == 1 && campo_minado[i][j].bomba != 'x') {
                    fprintf(saida," %c |", 79); //printando o caractere O no arquivo segundo a tabela ASCII
                    printf(" %c |", 79); //exibindo o caractere O para o usu�rio segundo a tabela ASCII
                  }else{
                    fprintf(saida," %c |", 48); //printando o caractere 0 no arquivo segundo a tabela ASCII
                    printf(" %c |",48); //exibindo o caractere 0 para o usu�rio segundo a tabela ASCII
                  }//else
                 }//for interno
               }//for externo
               auxilio_sair = 1;

    }while(auxilio_sair == 0); //la�o de repeti��o para exibir a estutura e as altera��es feitas na matriz durante o jogo
 //quando o auxilio_sair receber o valor 1, ou seja, o jogo acabou
   break;
   //caso seja digitado op��o 2, o usu�rio ver� as regras do jogo
  case 2 :
  //exibindo as regras necess�rias para o entendimento do jogo
    printf(" 1� - Evitar onde h� bombas;\n");
    printf(" 2� - Os espa�os adjacentes ao quadro selecionado dir� quantas bombas existem ao redor do mesmo;\n");
    printf(" 3� - Para ganhar, deve-se preencher todos campos que n�o h� bombas;\n");
    printf(" 4� - TENHA UM BOM JOGO.\n");
   break;
   //caso seja digitado op��o 3, o programa ser� finalizado
  case 3 :
    printf("Finalizando...\n");//exibindo pora us�ario que o programa ser� finalizado
    //sleep(3);//chamando o comando que dar� um delay na tela antes do programa fechar por completo
    system("cls");//chamanco o comando que limpa a tela de exibi��o
    return 0;// retorna 0 como o valor da fun��o, ou seja, finaliza a fun��o main
}//switch

  fclose(definicao); //fechando o arquivo de entrada do jogo
  fclose(saida); //fechadno o arquivo de saida do jogo

printf("\n\n"); //para mostar o final do programa depois de 3 linhas (est�tica)
return 0;
}//main
