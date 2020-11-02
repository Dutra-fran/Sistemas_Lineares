#include <stdio.h>
#include <stdlib.h>
int main(){
  // 
  int x, y, z; // variáveis que carregarão os valores corretos dos sistemas informado.
  int cont; // variável responsável pela contagem do loop while.
  int sair; // Não tem muita utilidade, além de somente ser a última função do programa para sair do programa.
  int igual1, igual2, igual3; // variáveis que carregarão os valores de igualdade dos sistemas. Ex: 3X + Y - 2Z = 7; Esse número 7, seria o nosso número de igualdade.
  int co1, co2, co3, co4, co5, co6, co7, co8, co9; // variáveis relacionadas aos coeficientes das incógnitas. Ex: 2X; neste caso, o número 2 é coeficiente de X.
  int x_resp, y_resp, z_resp;
  int sistema1, sistema2, sistema3; // variáveis que carregarão valores dos sistemas de forma simplificada lá no loop while.

  cont = 1000000; // O loop while fará no máximo 1.000.000 de repetições
  x = -100; // o resultado negativo de X poderá ser, no máximo, até -100.
  y = -100; // o resultado negativo de Y poderá ser, no máximo, até -100.
  z = -100; // o resultado negativo de Z poderá ser, no máximo, até -100.
  
  co1=0;
  co2=0;
  co3=0;
  co4=0;
  co5=0;
  co6=0;
  co7=0;
  co8=0;
  co9=0;

  printf("Sejam bem-vindos ao programa que calcula sistemas lineares! :v\n");
  printf("\n\nAviso: este programa so' trabalha com resultados inteiros!");

  printf("\n------------------------");
  printf("\nSeja os sistemas lineares com forma:");
  printf("\n\t1. X + Y + Z");
  printf("\n\t2. X + Y + Z");
  printf("\n\t3. X + Y + Z");
  printf("\n\nOBS: Caso alguma variavel for negativa, e' so' colocar o sinal do coeficiente da variavel como negativo!\n");
  printf("\n------------------------");

  printf("\n\nPreencha as informacoes do Sistema 1: ");
  printf("\nA variavel X tem algum coeficiente? (Caso nao tenha insira 1): ");
  scanf("%d", &co1); // Recebe o valor do usuário e armazena na variável co1.
  printf("A variavel Y tem algum coeficiente? (Caso nao tenha insira 1): ");
  scanf("%d", &co2); // Recebe o valor do usuário e armazena na variável co2.
  printf("A variavel Z tem algum coeficiente? (Caso nao tenha insira 1): ");
  scanf("%d", &co3); // Recebe o valor do usuário e armazena na variável co3.
  printf("O sistema 1 e' igual a que numero: ");
  scanf("%d", &igual1); // Recebe o valor da igualdade, informada pelo usuário, e armazena na variável igual1.

  printf("\nPreencha as informacoes do Sistema 2: ");
  printf("\nA variavel X tem algum coeficiente? (Caso nao tenha insira 1): ");
  scanf("%d", &co4); // Recebe o valor do usuário e armazena na variável co4.
  printf("A variavel Y tem algum coeficiente? (Caso nao tenha insira 1): ");
  scanf("%d", &co5); // Recebe o valor do usuário e armazena na variável co5.
  printf("A variavel Z tem algum coeficiente? (Caso nao tenha insira 1): ");
  scanf("%d", &co6); // Recebe o valor do usuário e armazena na variável co6.
  printf("O sistema 2 e' igual a que numero: "); 
  scanf("%d", &igual2); // Recebe o valor da igualdade, informada pelo usuário, e armazena na variável igual2.

  printf("\n\nPreencha as informacoes do Sistema 3: ");
  printf("\nA variavel X tem algum coeficiente? (Caso nao tenha insira 1): ");
  scanf("%d", &co7); // Recebe o valor do usuário e armazena na variável co7.
  printf("A variavel Y tem algum coeficiente? (Caso nao tenha insira 1): ");
  scanf("%d", &co8); // Recebe o valor do usuário e armazena na variável co8.
  printf("A variavel Z tem algum coeficiente? (Caso nao tenha insira 1): ");
  scanf("%d", &co9); // Recebe o valor do usuário e armazena na variável co9.
  printf("O sistema 3 e' igual a que numero: ");
  scanf("%d", &igual3); // Recebe o valor da igualdade, informada pelo usuário, e armazena na variável igual3.

  // Mostrando ao usuário como ficaram os sistemas lineares.
  printf("\n\tAtualizando os sistemas pra uma forma mais legivel e visivel para o Usuario: ");
  printf("\nSistema 1: (%d * X) + (%d * Y) + (%d * Z) = %d", co1, co2, co3, igual1);
  printf("\nSistema 2: (%d * X) + (%d * Y) + (%d * Z) = %d", co4, co5, co6, igual2);
  printf("\nSistema 3: (%d * X) + (%d * Y) + (%d * Z) = %d", co7, co8, co9, igual3);
  printf("\n------------------------");

  while(cont > 0){
    x++; // toda vez que esse laço for se repetindo, essa variável irá ficar incrementando-se +1.
    sistema1 = (co1 * x) + (co2 * y) + (co3 * z); // Valor do primeiro sistema.
    sistema2 = (co4 * x) + (co5 * y) + (co6 * z); // Valor do segundo sistema.
    sistema3 = (co7 * x) + (co8 * y) + (co9 * z); // Valor do terceiro sistema.

    switch(x){
      case 451:
        // Caso o X chegue no valor 451, esse bloco de códigos irá executar as instruções abaixo:
        x = -99;
        y++; // a variável Y será incrementado.
        break;
    }

    switch(y){
      case 451:
        // Caso o Y chegue no valor 451, esse bloco de códigos irá executar as instruções abaixo:
        y = -99; // a variável Y receberá o valor de -99.
        z++; // a variável Z será incrementado.
        break;
    }

    switch(z){
      case 451:
        // Caso o Z chegue no valor 451, esse bloco de códigos irá executar as instruções abaixo:
        z=-99; // a variável Z receberá o valor de -99
        break;
    }

    if((sistema1 == igual1 && sistema2 == igual2) && sistema3 == igual3){
      // Se os sistemas forem iguais às suas respectivas igualdades, esse laço condicional irá ser executado.
      cont = 0; // a variável de contagem receberá valor 0, para que o laço de repetição se encerre.

      // Atribuição de respostas.
      x_resp = x;
      y_resp = y;
      z_resp = z;
    }
  }

  printf("\n\n\tValor das variaveis: ");
  printf("\nX = %d", x_resp);
  printf("\nY = %d", y_resp);
  printf("\nZ = %d", z_resp);

  printf("\n------------------------");
  printf("\n\tPrograma feito por Robson Dutra! xD");

  printf("\n\nSelecione qualquer caractere do seu Teclado e em Seguida aperte ENTER para sair: ");
  scanf("%d", &sair); // esse valor recebido não servirá de nada. Esse scanf, serve apenas para que no final do programa, ele aguarde o usuário digitar algo para se encerrar.

  return 0; // se o programa chegou até aqui sem erros, irá retornar 0.
}
