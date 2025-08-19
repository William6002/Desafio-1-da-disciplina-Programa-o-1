#include <stdio.h>
#include <stdlib.h>
int main() {
    float produto, venda;
    printf("Digite o valor do produto: ");
    scanf("%f", &produto);
    if (produto < 20.0) {
        venda = produto * 1.45;
    } else {
        venda = produto * 1.30;
    }
    printf("O valor de venda do produto e: %.2f\n", venda);
    system("PAUSE");
    return 0;
}