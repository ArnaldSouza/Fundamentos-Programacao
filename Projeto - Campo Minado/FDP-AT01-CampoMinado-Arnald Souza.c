//autor:ARNALD SOUZA

//declaração de bibliotecas
#include <stdio.h> //biblioteca de entrada e saída
#include <stdlib.h> //biblioteca que contém funções e constantes básicas
#include <string.h> //usar string
#include <locale.h> //usar pontuação
#include <conio.h> //usanso para limpar tela de exibição
#include <time.h> //usa para colocar um delay na exibição

//estrutura definindo os tipos de bomba
typedef struct {
  char bomba;
  int bomba_vizinha;
  int nao_bomba;
} Estados_bombas; //condições possíveis das coordenadas

//função main
int main(){

    setlocale(LC_ALL, ""); //para poder utilizar pontuações

//declaração de variáveis
int opcao, linha, coluna, i, j, num_bombas = 0;
int l_usuario, c_usuario, lc_bomba, cc_bomba, auxilio_sair = 0;
char dificuldade;
int multiplica;
srand(time(NULL)); //para não colocar as bombas sempre nos mesmos lugares (para diferenciar sorteios dos numeros)

//Abrindo e lendo o arquivo de entrada
FILE *definicao = fopen("modo_de_jogo.txt", "r");

  //condição caso não haja nenhum arquivo com o nome, exibe "erro"
  if(definicao == NULL){
    printf("Arquivo não encontrado!\n");
  }//if

fscanf(definicao, "%i %i %c", &linha, &coluna, &dificuldade);
//lê o numero de linhas, colunas e dificuldade do jogo a partir do arquivo definido acima

//criando uma matriz para o campo minado com o tamanho digitado no arquivo texto
Estados_bombas campo_minado[linha][coluna]; //chamando a estrutura Estados e com ela compondo uma matriz

//Criando arquivo de saida , criado após o final do jogo (caso vitoria ou DERROTA)
FILE *saida;

//menu que exibirá as opções que o usúario poderá escolher
printf("***************************************************\n");
printf("*------ BEM-VINDO AO CAMPO MINADO DO ARNALD ------*\n");
printf("*-------------------------------------------------*\n");
printf("*-------- 1 - Para iniciar o jogo ----------------*\n");
printf("*-------- 2 - Para saber as regras do jogo -------*\n");
printf("*-------- 3 - Sair -------------------------------*\n");
printf("*-------------------------------------------------*\n");
printf("***************************************************\n");
scanf("%i",&opcao);//aramzena a opção digitada pelo usuário no menu
system("cls");//chamando o comando que limpa a tela de exibição

switch(opcao){
  //caso seja digitado opção 1, ele iniciará o jogo
  case 1 :
         //condição para saber a quantidade de bombas no jogo conforme a entrada do usuario
         //dependendo da dificuldade colcoada no arquivo pelo usario é calculado a quantidade de bombas que tera o campo
         if(dificuldade == 'f' || dificuldade == 'F' ){
            num_bombas = (linha * coluna) * 0.1;
            num_bombas += 3; //margem de erro por não solucionar o loop "tirar duvida com professor"
         }else
          if(dificuldade == 'm' || dificuldade == 'M'){
              num_bombas = (linha * coluna) * 0.2;
              num_bombas += 3;
            }else
              if(dificuldade == 'd' || dificuldade == 'D'){
                num_bombas = (linha * coluna) * 0.3;
                num_bombas += 3;
              }else{
                printf("Dificuldade de jogo inválida, coloque apenas m, n ou f!!!\n"); //se o usuário colocar uma dificuldade inexistente exibirá essa mensagem
              }//else

         //loop para iniciar todas as posições da matriz  em zero (0)
         //evitando que venham valores com lixo
         for(int i = 0; i <linha; i++){
           for(int j = 0; j < coluna; j++){
             campo_minado[i][j].bomba = 0;
             campo_minado[i][j].nao_bomba = 0;
             campo_minado[i][j].bomba_vizinha = 0;
           }//for interno
         }//for externo

         //loop para gerar e alocar as bombas em lugares aleatorios
         for (int k = 0; k < num_bombas; k++){ //locais onde as bombas estão sendo colocadas de acordo com o tamanho informado pelo usuario no arquivo
            i = rand() % linha; //alocando bomba conforme o tamanho da linha
            j = rand() % coluna; //alocando bomba conforme o tamanho da coluna
            campo_minado[i][j].bomba = 1;// pegando a linha e coluna aleatoria e "colocando" uma bomba
            //1 significa bomba
         }// for

    do{
         //loop para mostrar a organizção da estrutura do campo minado
         for (int i = 0; i < linha; i++){
           printf("\n");
           for (int j = 0; j < coluna; j++) {
             printf("| %.2i ", campo_minado[i][j].nao_bomba);
           }//for interno
         }//for externo

         //pedindo para o usuário entrar com uma coordenada para verificar se há uma bomba
         do {
           printf("\nDigite a coordenada da linha: ");
           scanf("%i", &l_usuario);
           printf("Digite a coordenada da coluna: ");
           scanf("%i", &c_usuario);
           l_usuario = l_usuario - 1;
           c_usuario = c_usuario - 1; //para a entrada do usuário ser compativel com a da matriz pois a matriz começa em zero

         if(l_usuario > linha || c_usuario > coluna){
           //se o usuario digite uma coordenada maior exibirá a mesnsagem
             printf("Uma das coordenadas Invalidas!\n\n");
           }//if
         }while(l_usuario >= linha || c_usuario >= coluna);

         for(int i = 0; i < linha; i++) {
           for(int j = 0; j < coluna; j++){
             //se o usuário escolher uma coodernada corresponde com uma coordenada que contém bomba
              if(campo_minado[i][j].bomba == 1 && l_usuario == i && c_usuario == j){
                campo_minado[i][j].bomba = 'x'; //colocara no lugar escolhido o caracetere X
                saida = fopen("resultado_do_jogo.txt","w+"); //abrindo o arquivo de saída por derrota
                fprintf(saida, "DERROTA", campo_minado[i][j]); //escrevendo DERROTA no arquivo
                printf("DERROTA\n"); //exibindo derrota na tela para o usuário
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
                    printf(" %c |", 88); //exibindo o caractere X para o usuário segundo a tabela ASCII
                  }//if
                  if (campo_minado[i][j].bomba == 1 && campo_minado[i][j].bomba != 'x') {
                    fprintf(saida," %c |", 79); //printando o caractere O no arquivo segundo a tabela ASCII
                    printf(" %c |", 79); //exibindo o caractere O para o usuário segundo a tabela ASCII
                  }else{
                    fprintf(saida," %c |", 48); //printando o caractere 0 no arquivo segundo a tabela ASCII
                    printf(" %c |",48); //exibindo o caractere 0 para o usuário segundo a tabela ASCII
                  }//else
                 }//for interno
               }//for externo
               auxilio_sair = 1;

    }while(auxilio_sair == 0); //laço de repetição para exibir a estutura e as alterações feitas na matriz durante o jogo
 //quando o auxilio_sair receber o valor 1, ou seja, o jogo acabou
   break;
   //caso seja digitado opção 2, o usuário verá as regras do jogo
  case 2 :
  //exibindo as regras necessárias para o entendimento do jogo
    printf(" 1º - Evitar onde há bombas;\n");
    printf(" 2º - Os espaços adjacentes ao quadro selecionado dirá quantas bombas existem ao redor do mesmo;\n");
    printf(" 3º - Para ganhar, deve-se preencher todos campos que não há bombas;\n");
    printf(" 4º - TENHA UM BOM JOGO.\n");
   break;
   //caso seja digitado opção 3, o programa será finalizado
  case 3 :
    printf("Finalizando...\n");//exibindo pora usúario que o programa será finalizado
    //sleep(3);//chamando o comando que dará um delay na tela antes do programa fechar por completo
    system("cls");//chamanco o comando que limpa a tela de exibição
    return 0;// retorna 0 como o valor da função, ou seja, finaliza a função main
}//switch

  fclose(definicao); //fechando o arquivo de entrada do jogo
  fclose(saida); //fechadno o arquivo de saida do jogo

printf("\n\n"); //para mostar o final do programa depois de 3 linhas (estética)
return 0;
}//main
