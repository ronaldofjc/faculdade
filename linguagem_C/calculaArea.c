/*
Exemplo de um programa em linguagem C que calcula a área de um raio
Execução de uma função dentro do método main
*/

#include <stdio.h>
#include <stdlib.h>

void calculaarea(float r)
{
     float area;
     area = 2*3.14*r;
     printf("\nA area e: %.2f \n", area);
}

main()
{
      float r;
      printf("\nEntre com o raio: ");
      scanf("%f", &r);
      calculaarea(r);
      system("pause");
}
