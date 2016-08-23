#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

//Programa para calcular o salario de um funcionario
//A funcao deve retornar o salario para a funcao principal

//Funcao para calcular o salario
float calculaSalario(float hora, float valorHora){
	float salario;
	salario = (hora * valorHora) * 22;
	return salario;
}

//funcao principal
main(){
	float hora, valorHora, salario;
	printf("Programa para calcular o salario de um funcionario!\n");
	printf("Quantas horas voce trabalha por dia: ");
	scanf("%f", &hora);
	printf("Quanto voce recebe por hora: ");
	scanf("%f", &valorHora);
	salario = calculaSalario(hora, valorHora);
	printf("Seu salario por mes eh: %.2f \n\n", salario);
	system("pause");
}