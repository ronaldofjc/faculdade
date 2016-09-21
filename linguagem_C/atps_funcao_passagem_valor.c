#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

//Programa que verifica se o usuario e maior ou menor de 18 anos
//Usando funcao com passagem de parametro

void maiorOuMenor(int n){
   int idade;
   idade = 2016 - n;
   if(idade >= 18){
      printf("Voce eh maior de 18 anos\n\n");
      system("pause");
   }
   else{ 
      printf("Voce ainda eh menor de idade\n\n");
      system("pause");
   }
}

main(){
     int nasc, idade;  
     printf("Informe o seu ano de nascimento: ");
     scanf("%d", &nasc);
     maiorOuMenor(nasc);
}
