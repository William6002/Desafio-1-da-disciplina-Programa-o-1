#include <stdio.h>
#include <stdlib.h>
 int main () {
    int chico = 170;
    int juca = 110;
    int anos = 0;
    while (juca < chico) {
        chico += 2;
        juca += 3;
        anos++;
    }
    printf("Juca sera maior que Chico em %d anos\n", anos);
    system("PAUSE");

 }
