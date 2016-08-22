#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

void celsius(float fahr){
	float celsius;
	celsius = (fahr - 32) / 1.8;

	printf("Fahrenheit convertido para Celsius: %.2f Graus \n\n", celsius);
}

int main(int argc, char const *argv[])
{
	float Fahrenheit;
	printf("Informe o valor dos Graus Fahrenheit: ");
	scanf("%f", &Fahrenheit);

	celsius(Fahrenheit);
	system("pause");
}
