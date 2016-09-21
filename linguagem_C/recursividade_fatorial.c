#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int fact(int n){
    int x, y;
    if(n == 0)
         return 1;
    x = n - 1;
    y = fact(x);
    return(n * y);
}

main(){
    printf("%d", fact(30));
    getch();     
}
