#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void funct(int *py){
	++(*py);
	printf("O valor de py: %i \n", *py);
}

main(){
	int x;
	x = 5;
	printf("O valor de x : %i \n", x);
	funct(&x);
	printf("O valor de x : %i \n", x);
	getche();
}
