#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

//Programa para calcular o IMC
//deve retornar o IMC calculado para main

//Função para calcular o IMC
float imc(float altura, float peso){
	float imc;
	imc = peso / (altura * altura);
	return imc;
}

//Função principal
main(){
	float peso,altura, seuIMC;
	char sexo;
	printf("Programa para calcular o IMC \n");
	printf("Voce eh homem ou mulher: (H = Homem, M = Mulher):");
	scanf("%s", &sexo);
	printf("Informe o seu peso: ");
	scanf("%f", &peso);
	printf("Informe a sua altura: ");
	scanf("%f", &altura);
	seuIMC = imc(altura, peso);

	if((sexo == 'M') || (sexo == 'm')){
		if(seuIMC < 19.1){
			printf("Voce esta abaixo do peso, IMC: %.2f \n", seuIMC);
		}
		else if(seuIMC < 25.8){
			printf("Voce esta no peso ideal, IMC: %.2f \n", seuIMC);
		}
		else if(seuIMC < 27.3){
			printf("Voce esta um pouco acima do peso, IMC: %.2f \n", seuIMC);
		}
		else if(seuIMC < 32.3){
			printf("Voce esta acima do peso ideal, IMC: %.2f \n", seuIMC);
		}
		else{
			printf("Voce esta obeso, IMC: %.2f \n", seuIMC);
		}
	}

	if((sexo == 'H') || (sexo == 'h')){
		if(seuIMC < 20.7){
			printf("Voce esta abaixo do peso, IMC: %.2f \n", seuIMC);
		}
		else if(seuIMC < 26.4){
			printf("Voce esta no peso ideal, IMC: %.2f \n", seuIMC);
		}
		else if(seuIMC < 27.8){
			printf("Voce esta um pouco acima do peso, IMC: %.2f \n", seuIMC);
		}
		else if(seuIMC < 31.1){
			printf("Voce esta acima do peso ideal, IMC: %.2f \n", seuIMC);
		}
		else{
			printf("Voce esta obeso, IMC: %.2f \n", seuIMC);
		}
	}
	system("pause");
}
