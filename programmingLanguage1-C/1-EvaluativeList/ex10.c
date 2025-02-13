#include <stdio.h>
#include <locale.h>

int main() {
  setlocale(LC_ALL, "Portuguese");

int idade, salario, contEntre20e30=0, somaEntre20e30=0, maiorSalario=0, idadeDoMaiorSal=0, contMais5000=0, totalPessoas=0;
float mediaEntre20e30=0.0, porc5000=0.0;

  do{
    printf("\nQual � sua idade:\n");
    scanf("%d", &idade);
    printf("\nQual � seu sal�rio:\n");
    scanf("%d", &salario);

    if(idade <= 0 || salario < 0){
      printf("\nEntrada inv�lida.\n");
      break;
    }
    
    totalPessoas++;

    //maior sal�rio e idade
    if(salario > maiorSalario){
      maiorSalario = salario;
      idadeDoMaiorSal = idade;
    }

    //media sal�rio entre 20 e 30 anos
    if(idade > 20 && idade < 30){
      contEntre20e30++;
      somaEntre20e30+= salario;
    }

    if(salario > 5000){
      contMais5000++;
    } 


  } while(idade > 0);

  if(contEntre20e30 > 0){
    mediaEntre20e30 = (float)somaEntre20e30 / contEntre20e30;
    printf("\nA media dos sal�rios das pessoas entre 20 e 30 anos � de: %.1f\n", mediaEntre20e30);
  }
  if(contMais5000 > 0){
    porc5000 = ((float)contMais5000 / totalPessoas) * 100;
    printf("\nA porcentagem de pessoas que ganham mais de 5000 � de: %.2f porcento\n", porc5000);
  }
  printf("\n O maior sal�rio � de: %d, e a idade dessa pessoa � de: %d\n", maiorSalario, idadeDoMaiorSal);

}