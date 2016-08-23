#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

//Programa para preencher um vetor de 10 posicoes
//E ao final,ordenar e apresentar os valores 


//funcao para ordenar o vetor
void ordenar(int vet[], int tamVet){
	int i, j, temp;
	for(i=0;i<tamVet;++i){
		temp = vet[i];
		for(j=i-1;j>=0 && temp<vet[j];j--){
			vet[j+1] = vet[j];
			printf("%i \n", vet);
		}
		vet[j+1] = temp;
	}
}


//Funcao principal
main(){
	int vet[10], i;
	for(i=0;i<10;i++){
		printf("Entre com o valor: ");
		scanf("%i", &vet[i]);
	}

	ordenar(vet, 10);
	for(i=0;i<10;i++){
		printf("Vetor ordenado: %i \n", vet[i]);
	}
	system("pause");
}