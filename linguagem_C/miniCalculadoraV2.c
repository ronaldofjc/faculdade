#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

//Data 15/08/2016
//Mini Calculadora utilizando funcoess com parametros e retornos

float pergunta1() {
	float n1;
	printf("Entre com o primeiro numero: ");
	scanf("%f", &n1);
	return n1;
}

float pergunta2() {
	float n2;
	printf("Entre com o segundo numero: ");
	scanf("%f", &n2);
	return n2;
}

float somar(float n1, float n2){
	return n1 + n2;
}

float subtrair(float n1, float n2){
	return n1 - n2;
}

float multiplicar(float n1, float n2){
	return n1 * n2;
}

float dividir(float n1, float n2){
	return n1 / n2;
}

main(){
	int opcao;
	float numero1, numero2,res;
	while(opcao != 5){
		printf("Digite 1 para somar \n");
		printf("Digite 2 para subtrair \n");
		printf("Digite 3 para multiplicar \n");
		printf("Digite 4 para dividir \n");
		printf("Digite 5 para sair \n");
		printf("Opcao: ");
		scanf("%d", &opcao);

		switch(opcao){
		case 1: 
		numero1 = pergunta1();
		numero2 = pergunta2();
		res = somar(numero1,numero2);
		printf("%.2f + %.2f = %.2f \n\n", numero1, numero2, res);
		break;
		case 2: 
		numero1 = pergunta1();
		numero2 = pergunta2();
		res = subtrair(numero1,numero2);
		printf("%.2f - %.2f = %.2f \n\n", numero1, numero2, res);
		break;
		case 3: 
		numero1 = pergunta1();
		numero2 = pergunta2();
		res = multiplicar(numero1,numero2);
		printf("%.2f * %.2f = %.2f \n\n", numero1, numero2, res);
		break;
		case 4:
		numero1 = pergunta1();
		numero2 = pergunta2();
		res = dividir(numero1,numero2);
		printf("%.2f / %.2f = %.2f \n\n", numero1, numero2, res);
		break; 
		case 5: exit(1);
		}
	}
}
