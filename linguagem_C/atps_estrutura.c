#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

//Programa usando estrutura 

main(){
	
	struct cadastro_quadrinho{
		char titulo[50];
		char editora[30];
		int edicao;
		float valor;
	};
	
	struct cadastro_quadrinho hq;
	
	printf("------Cadastro de Quadrinho-------\n");
	printf("Informe o titulo: ");
	gets(hq.titulo);
	printf("Editora: ");
	gets(hq.editora);
	printf("Edicao numero: ");
	scanf("%d", &hq.edicao);
	printf("Valor: ");
	scanf("%f", &hq.valor);
	
	printf("\nQuadrinho Cadastrado\n");
	printf("Titulo: %s \n", hq.titulo);
	printf("Editora: %s \n", hq.editora);
	printf("Edicao: %d \n", hq.edicao);
	printf("Valor: %.2f \n", hq.valor);
	system("pause");
}
