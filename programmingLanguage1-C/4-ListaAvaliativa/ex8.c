#include <stdio.h>
#include <locale.h>

int menor_numero(int numeros[10]){
  int menorNumero;

  for(int i=0; i<10; i++){
    if(i == 0){
      menorNumero = numeros[i];
    }
    if(numeros[i] < menorNumero){
      menorNumero = numeros[i];
    }
  }

  return menorNumero;
}


int pares_maiores_dez(int numeros[10]){
  int somaPares = 0;

  for(int i=0; i<10; i++){
    if(numeros[i] > 10 && numeros[i] % 2 == 0){
      somaPares += numeros[i];
    }
  }

  return somaPares;
}


int impares(int numeros[10]){
  int impares=0;
  for(int i=0; i<10; i++){
    if(numeros[i] % 2 != 0){
      impares++;
    }
  }

  return impares;
}

float media_maiores20(int numeros[10]){
  int soma=0, cont=0;
  float media=0.0;

  for(int i=0; i<10; i++){
    if(numeros[i] > 20 && numeros[i] % 2 == 0){
      soma += numeros[i];
      cont++;
    }
  }

  media = (float)soma / cont;

  return media;
}

int main() {
  setlocale(LC_ALL, "Portuguese");

  int numeros[10], menor=0, paresMaior10=0, quant_impares=0;
  float media=0.0;

  for(int i=0; i<10; i++){
    printf("\nDigite um n�mero [%d]:", i+1);
    scanf("%d", &numeros[i]);
  }

  //Impress�o do menor n�mero
  menor = menor_numero(numeros);
  printf("\nO menor n�mero �: %d", menor);

  //Impress�o da soma dos n�meros pares maiores que 10
  paresMaior10 = pares_maiores_dez(numeros);
  printf("\nA soma dos n�meros pares maiores que 10 � de: %d", paresMaior10);

  //Impress�o da quantidade de n�meros impares
  quant_impares = impares(numeros);
  printf("\nA quantidade de n�meros �mpares � de: %d", quant_impares);

  //Impress�o da media dos n�meros pares maiores que 20
  media = media_maiores20(numeros);
  printf("\nA media dos n�meros pares maiores que 20 � de: %.1f", media);
}