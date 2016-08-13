/* Exemplo de um programa em linguagem C para contornar a frase com linhas */

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void linha()
{
     for(int j=1;j<=20;j++)
     {
             printf("\xDB");
     }
     printf("\n");
}

main()
{
      linha();
      printf("\xDB Um programa em C \xDB\n");
      linha();
      system("pause");
}
