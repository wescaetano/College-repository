#include <stdio.h>
#include <locale.h>

int menor_numero(int matriz[3][5]);
int somaMult3(int matriz[3][5]);
int maior_num_terceira_Col(int matriz[3][5]);

int main() {
  setlocale(LC_ALL, "Portuguese");

  int matriz[3][5], menor=0;

  //Preenchendo a matriz
  for(int i=0; i<3; i++){
    for(int j=0; j<5; j++){
      printf("\nDigite um n�mero [%d][%d]: ", i, j);
      scanf("%d", &matriz[i][j]);
    }
  }

  //Printando o menor n�mero
  menor = menor_numero(matriz);
  printf("\nO menor n�mero da matriz �: %d", menor);
  printf("\nA soma dos multiplos de tr�s da ma triz �: %d", somaMult3(matriz));
  printf("\nO maior n�mero da terceira coluna da matriz �: %d", maior_num_terceira_Col(matriz));
}

//Fun��o para achar o menor n�mero
int menor_numero(int matriz[3][5]){

int menorNum= matriz[0][0];

for(int i=0; i<3; i++){
  for(int j=0; j<5; j++){
    //Achando o menor n�mero
    if(matriz[i][j] < menorNum){
      menorNum = matriz[i][j];
    }
  }
}
return menorNum;
}

//Fun��o para retornar os n�meros multiplos de tr�s
int somaMult3(int matriz[3][5]){

int soma=0;

for(int i=0; i<3; i++){
  for(int j=0; j<5; j++){
    //Fazendo a soma dos m�ltiplos de tr�s
    if(matriz[i][j] % 3 ==0){
      soma+= matriz[i][j];
    }
  }
}
return soma;
}

//Fun��o para retornar o maior n�mero da terceira coluna da matriz
int maior_num_terceira_Col(int matriz[3][5]){

int maiorNumero= matriz[0][2];

for(int i=0; i<3; i++){
  for(int j=0; j<5; j++){
    //Achando o maior n�mero da terceira coluna
    if(matriz[i][2] > maiorNumero){
      maiorNumero = matriz[i][2];
    }
  }
}
return maiorNumero;
}