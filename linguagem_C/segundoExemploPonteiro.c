#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

main(){
	int x, *y;
	printf("Endereco de x: %i \n", &x);
	printf("Endereco de y: %i \n", &y);
	x = 25;
	y = &x;
	printf("Endereco de x: %i \n", &x);
	printf("Endereco que y aponta: %i \n", y);	
	system("pause");
}