#include <stdio.h>
#include <stdlib.h>

//Feito por:Pedro Guilherme, 202210020 (@PedrogcOliveira),
//Neste código é um exercício em C, uma repodução das funções básicas da calculadora.
//No primeiro momento o programa irá solicitar a operação que desejamos realizar(soma, subtração, multiplicação, divisão, raiz, potência),
//em seguida ele solicita os números no qual deseja calcular, porém existe algumas validações presentes,
//tais como: se não inserir um número válido para uma operação, ou se tentar a divisão por 0.


void main(){
  int operacao;
  float primeiroNumero, segundoNumero, resultado;
  char controle;

  printf("Pedro Guilherme Carvalho Oliveira\nAnálise e Desenvolvimento de Sistemas\nUniversidade La Salle\nMatrícula: 202210020\n\n");

  printf("Calculadora em C:\n");

  do{
    do{
      printf("\nSelecione a operação que deseja executar:\n");
      printf("1. Adição\n2. Subtração\n3. Multiplicação\n4. Divisão\n5. Raiz Quadrada\n6. Potênciação\n");
      scanf("%d", &operacao);

      if(operacao > 6 || operacao < 1) {
        
        printf("\nValor inválido, digite um valor válido.\n\n");
        
      }
 
    }while(operacao > 6 || operacao < 1);

    if(operacao == 6) {
      
      printf("\nDigite a base da potenciação: ");
      scanf("%f", &primeiroNumero);
      printf("\nDigite o expoente da potenciação: ");
      scanf("%f", &segundoNumero);
      
      }
    else if(operacao == 5) {
      
      printf("\nDigite o valor a ser usado na raiz quadrada: ");
      scanf("%f", &primeiroNumero);
      
    }
    else {
      do {
        
        printf("\nEscolha o primeiro número: ");
        scanf("%f", &primeiroNumero);
        printf("\nEscolha o segundo número: ");
        scanf("%f", &segundoNumero);

        if(operacao == 4 && segundoNumero == 0) {
          
          printf("\nNão é possível dividir o número escolhido por 0, digite outro.");
        }
        
      } while(operacao == 4 && segundoNumero == 0);
    }

    switch(operacao) {
      case 1:
        resultado = primeiroNumero+segundoNumero;
      break;
      case 2:
        resultado = primeiroNumero-segundoNumero;
      break;
      case 3:
        resultado = primeiroNumero*segundoNumero;
      break;
      case 4:
        resultado = primeiroNumero/segundoNumero;
      break;
      case 5:
        resultado = sqrt(primeiroNumero);
      break;
      case 6:
        resultado = pow(primeiroNumero, segundoNumero);
      break;
    }

    printf("\nO resultado da operação é: %.02f \n\n", resultado);

    printf("\nPressione 0 para encerrar o programa, ou quaisquer tecla para reiniciar: \n\n");
    scanf("%c", &controle);
  } while(controle != '0');
}