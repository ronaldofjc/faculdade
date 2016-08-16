#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

//Exemplo de funcao com parametros

int calculaMinutos(int hora, int min){
	return (hora*60 + min);
} 

int main()
{
	int mins1, mins2, hora, min;
	printf("Primeira hora \n");
	printf("Entre com a hora: ");
	scanf("%d", &hora);
	printf("Entre com o minuto: ");
	scanf("%d", &min);
	mins1 = calculaMinutos(hora, min);

	printf("Segunda hora \n");
	printf("Entre com a hora: ");
	scanf("%d", &hora);
	printf("Entre com o minuto: ");
	scanf("%d", &min);
	mins2 = calculaMinutos(hora, min);

	printf("A diferenca eh %d minutos \n", mins2 - mins1);
	system("pause");

}
