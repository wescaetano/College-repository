#include <stdio.h>
#include <locale.h>

int main() {
  setlocale(LC_ALL, "Portuguese");
int mes;

do {
  printf("\n Digite um m�s: (entre 1 e 12, caso o valor n�o esteja entre essa faixa o sistema ser� encerrado!) \n");
scanf("%d", &mes);

switch(mes) {
  case 1:
  printf("\n O m�s escolhido foi: \n");
  printf("\n Janeiro \n");
  break;
  case 2:
  printf("\n O m�s escolhido foi: \n");
  printf("\n Feveiro \n");
  break;
  case 3:
  printf("\n O m�s escolhido foi: \n");
  printf("\n Mar�o \n");
  break;
  case 4:
  printf("\n O m�s escolhido foi: \n");
  printf("\n Abril \n");
  break;
  case 5:
  printf("\n O m�s escolhido foi: \n");
  printf("\n Maio \n");
  break;
  case 6:
  printf("\n O m�s escolhido foi: \n");
  printf("\n Junho \n");
  break;
  case 7:
  printf("\n O m�s escolhido foi: \n");
  printf("\n Julho \n");
  break;
  case 8:
  printf("\n O m�s escolhido foi: \n");
  printf("\n Agosto \n");
  break;
  case 9:
  printf("\n O m�s escolhido foi: \n");
  printf("\n Outubro \n");
  break;
  case 10:
  printf("\n O m�s escolhido foi: \n");
  printf("\n Janeiro \n");
  break;
  case 11:
  printf("\n O m�s escolhido foi: \n");
  printf("\n Novembro \n");
  break;
  case 12:
  printf("\n O m�s escolhido foi: \n");
  printf("\n Dezembro \n");
  break;
  default:
  printf("\n Entrada inv�lida!");
  break;
}
} while(mes > 0 && mes < 13);



  return 0;
}