#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

//Mini Calculadora utilizando funções sem parametros e sem retornos

void somar(){
	float n1, n2;
	printf("Entre com o primeiro numero: ");
	scanf("%f", &n1);
	printf("Entre com o segundo numero: ");
	scanf("%f", &n2);
	printf("%.2f + %.2f = %.2f \n\n", n1, n2, n1 + n2);
}

void subtrair(){
	float n1, n2;
	printf("Entre com o primeiro numero: ");
	scanf("%f", &n1);
	printf("Entre com o segundo numero: ");
	scanf("%f", &n2);
	printf("%.2f - %.2f = %.2f \n\n", n1, n2, n1 - n2);
}

void multiplicar(){
	float n1, n2;
	printf("Entre com o primeiro numero: ");
	scanf("%f", &n1);
	printf("Entre com o segundo numero: ");
	scanf("%f", &n2);
	printf("%.2f x %.2f = %.2f \n\n", n1, n2, n1 * n2);
}

void dividir(){
	float n1, n2;
	printf("Entre com o primeiro numero: ");
	scanf("%f", &n1);
	printf("Entre com o segundo numero: ");
	scanf("%f", &n2);
	printf("%.2f / %.2f = %.2f \n\n", n1, n2, n1 / n2);
}

main(){
	int opcao;
	while(opcao != 5){
		printf("Digite 1 para somar \n");
		printf("Digite 2 para subtrair \n");
		printf("Digite 3 para multiplicar \n");
		printf("Digite 4 para dividir \n");
		printf("Digite 5 para sair \n");
		printf("Opcao: ");
		scanf("%d", &opcao);

		switch(opcao){
		case 1: somar();
		break;
		case 2: subtrair();
		break;
		case 3: multiplicar();
		break;
		case 4: dividir();
		break; 
		case 5: exit(1);
		}
	}
}