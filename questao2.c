#include <stdio.h>
#include <stdlib.h>
int main() {
    float salario, emprestimo, parcela, juros, total; 
    int prestacoes;
    printf("Digite o valor do salario: ");
    scanf("%f", &salario);
    printf("Digite o valor do emprestimo: ");
    scanf("%f", &emprestimo);
    printf("Digite o numero de prestacoes: ");
    scanf("%d", &prestacoes);
    printf("Digite o valor dos juros(em porcentagem): ");
    scanf("%f", &juros);
    juros = juros + 100;
    juros = juros / 100;
    total = juros * emprestimo;
    parcela = total / prestacoes;


  


    if (parcela > salario * 0.3) {
        printf("Emprestimo negado.\n");
    } else {
        printf("Emprestimo concedido.\n");
        printf("O valor das prestacoes e: %.2f\n", parcela);
        printf("O total a pagar e: %.2f\n", total);
    }
    system("PAUSE");
}