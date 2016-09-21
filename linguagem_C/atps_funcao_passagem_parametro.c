#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

//Programa usando função com passagem de parametro por referencia

void troca(int *num1, int *num2){
	int tmp;
	
	tmp = *num1;
	*num1 = *num2;
	*num2 = tmp;
}

main(){
	int n1, n2;
	printf("Informe o primeiro numero: ");
	scanf("%d", &n1);
	printf("Informe o segundo numero: ");
	scanf("%d", &n2);
	
	printf("O primeiro numero informado foi %d e o segundo %d \n", n1, n2);
	troca(&n1, &n2);
	printf("Trocando os numeros, ficaram %d e %d \n\n", n1, n2);
	system("pause");
}
