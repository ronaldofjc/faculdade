#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

//Programa que calcula os minutos

//função para calcular a hora e os minutos, retornando o resultado
int minutos(){
    int hora, min;
    printf("Entre com a hora: ");
    scanf("%d", &hora);
    printf("Entre com os minutos: ");
    scanf("%d", &min);
    return(hora*60 + min);
}

//função principal do programa em C
main(){
       int mins1, mins2;
       mins1 = minutos();
       mins2 = minutos();
       printf("A diferenca eh %d minutos \n", mins2-mins1);
       system("pause");
}
