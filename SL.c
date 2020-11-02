#include <stdio.h>
#include <stdlib.h>
int main(){
int x, y, z;
int cont;
int sair;
int igual1, igual2, igual3;
int co1, co2, co3, co4, co5, co6, co7, co8, co9;
float x1, y1, z1;
co1=0;
co2=0;
co3=0;
co4=0;
co5=0;
co6=0;
co7=0;
co8=0;
co9=0;
printf("Sejam bem vindos ao programa que calcula sistemas lineares! :v\n");
printf("\n\nAviso: Este programa so' trabalha com resultados inteiros!");
printf("\n------------------------");
printf("\nSeja os sistemas lineares com forma:");
printf("\n\t1. x + y + z");
printf("\n\t2. x + y + z");
printf("\n\t3. x + y + z");
printf("\n\nOBS: Caso alguma variavel for negativa, e' so colocar o sinal do coeficiente da variavel como negativo!\n");
printf("\n------------------------");
printf("\n\nPreencha as informacoes do Sistema 1: ");
printf("\nA variavel X tem algum coeficiente? (Caso nao tenha insira 1): ");
scanf("%d", &co1);
printf("A variavel Y tem algum coeficiente? (Caso nao tenha insira 1): ");
scanf("%d", &co2);
printf("A variavel Z tem algum coeficiente? (Caso nao tenha insira 1): ");
scanf("%d", &co3);
printf("O sistema 1 e' igual a que numero: ");
scanf("%d", &igual1);

printf("\nPreencha as informacoes do Sistema 2: ");
printf("\nA variavel X tem algum coeficiente? (Caso nao tenha insira 1): ");
scanf("%d", &co4);
printf("A variavel Y tem algum coeficiente? (Caso nao tenha insira 1): ");
scanf("%d", &co5);
printf("A variavel Z tem algum coeficiente? (Caso nao tenha insira 1): ");
scanf("%d", &co6);
printf("O sistema 2 e' igual a que numero: ");
scanf("%d", &igual2);
printf("\n\nPreencha as informacoes do Sistema 3: ");
printf("\nA variavel X tem algum coeficiente? (Caso nao tenha insira 1): ");
scanf("%d", &co7);
printf("A variavel Y tem algum coeficiente? (Caso nao tenha insira 1): ");
scanf("%d", &co8);
printf("A variavel Z tem algum coeficiente? (Caso nao tenha insira 1): ");
scanf("%d", &co9);
printf("O sistema 3 e' igual a que numero: ");
scanf("%d", &igual3);
printf("\n\tAtualizando os sistemas pra uma forma mais legivel e visivel para o Usuario: ");
printf("\nSistema 1: (%d * X) + (%d * Y) + (%d * Z) = %d", co1, co2, co3, igual1);
printf("\nSistema 2: (%d * X) + (%d * Y) + (%d * Z) = %d", co4, co5, co6, igual2);
printf("\nSistema 3: (%d * X) + (%d * Y) + (%d * Z) = %d", co7, co8, co9, igual3);
printf("\n------------------------");
cont = 1000000;
x = -100;
y = -100;
z = -100;
float sistema1, sistema2, sistema3, sistema4, sistema5, sistema6, sistema7, sistema8, sistema9;
while(cont > 0){
x++;
sistema1 = co1 * x;
sistema2 = co2 * y;
sistema3 = co3 * z;
sistema4 = co4 * x;
sistema5 = co5 * y;
sistema6 = co6 * z;
sistema7 = co7 * x;
sistema8 = co8 * y;
sistema9 = co9 * z;

if((sistema1 + sistema2 + sistema3 == igual1 && sistema4 + sistema5 + sistema6 == igual2) && sistema7 + sistema8 + sistema9 == igual3){
cont = 0;
x1 = x;
y1 = y;
z1 = z;
}
switch(y){
case 451:
y = -99;
x++;
z++;
break;
}
switch(x){
case 451:
x = -99;
y++;
break;
}
switch(z){
case 451:
z=-99;
break;
}
}
printf("\n\n\tValor das variaveis: ");
printf("\nX = %1.0f", x1);
printf("\nY = %1.0f", y1);
printf("\nZ = %1.0f", z1);
printf("\n------------------------");
printf("\n\tPrograma feito por Robson Filho! xD");
printf("\n\nSelecione qualquer caractere do seu Teclado e em Seguida aperte ENTER para sair: ");
scanf("%d", &sair);
return 0;
}
