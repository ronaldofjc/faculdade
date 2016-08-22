#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

//Programa que calcula a média de uma aluno
//Usando função media, passando as notas como parametro

void media(float nota1, float nota2){
	float suaMedia;
	suaMedia = ((nota1 + nota2) / 2);
	printf("A sua media foi: %.2f \n\n", suaMedia);
}

main(){
	float n1, n2;
	
	printf("Entre com a primeira nota: ");
	scanf("%f", &n1);

	printf("Entre com a segunda nota: ");
	scanf("%f", &n2);

	media(n1, n2);
	system("pause");
}
