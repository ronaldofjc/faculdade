#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

//Programa utilizando ponteiro

void mostrarValor(int *v1, int *v2, int *v3){
	int temp;
	printf("Informe um dos tres valores que deseja imprimir na tela: ");
	scanf("%d", &temp);
	if(*v1 == temp){
		printf("Valor solicitado %d \n\n", *v1);	
	} else if(*v2 == temp){
		printf("Valor solicitado %d \n\n", *v2);
	} else if(*v3 == temp){
		printf("Valor solicitado %d \n\n", *v3);	
	} else
		printf("O valor informado nao eh nenhum dos tres passados anteriormente\n\n");
}

main(){
	int n1, n2, n3;
	
	printf("Informe o primeiro numero: ");
	scanf("%d", &n1);
	printf("Informe o segundo numero: ");
	scanf("%d", &n2);
	printf("Informe o terceiro numero: ");
	scanf("%d", &n3);
	mostrarValor(&n1, &n2, &n3);	
}
