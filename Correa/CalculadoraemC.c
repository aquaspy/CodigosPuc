#include <stdio.h>
int divi(float, float);
int mult(float, float);
int soma(float, float);
int sub(float, float);
int main(){
  short int tipo;
  float num1;
  float num2;
  printf("Digite o tipo de operacao desejada:\n 1- Soma\n 2- Subtracao\n 3-Divisao\n 4-Multiplicacao\n\n");
  scanf("%d", &tipo);
  printf("Digite o primeiro numero: \n");
  scanf("%f", &num1);
  printf("Digite o segundo numero: \n");
  scanf("%f", &num2);
  if (tipo == 1){
    soma(num1, num2);

  }
  if (tipo == 2){
    sub(num1, num2);

  }
  if (tipo == 3){
    divi(num1, num2);

  }
  if (tipo ==4){
    mult(num1, num2);

  }
}
  int soma(float x,float y){
    printf("O resultado eh: %.1f\n ",x + y);


  }
  int sub(float x, float y){
    printf("O resultado eh:  %.1f\n", x - y);


  }
  int divi(float x,float y){
    printf("O resultado eh:  %.1f\n", x/y);


  }
  int mult(float x,float y){
    printf("O resultado eh:  %.1f\n", x*y);


  }
