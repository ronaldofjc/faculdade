#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

//Programa que verifica se o usuario e maior ou menor de 18 anos

void idadeMaior(){
     printf("Voce ja eh maior de 18 anos! \n\n");
     system("pause");
}

void idadeMenor(){
     printf("Voce ainda eh de menor! \n\n");
     system("pause");
}

main(){
     int nasc, idade;  
     printf("Informe o seu ano de nascimento: ");
     scanf("%d", &nasc);
     idade = 2016 - nasc;
     if(idade >= 18)
         idadeMaior();
     else
         idadeMenor(); 
}
