#include <stdio.h>
#include <stdlib.h>

int main() {
    int opcao;
    float vista = 0.0, prazo = 0.0, valor;
    char codigo;
    int n;

    printf("Quantas transacoes deseja registrar? ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("\nTransacao %d\n", i + 1);
        printf("Digite o codigo (V para a vista, P para a prazo): ");
        scanf(" %c", &codigo); 
        printf("Digite o valor da transacao: R$ ");
        scanf("%f", &valor);

        if (codigo == 'V' || codigo == 'v') {
            vista += valor;
        } else if (codigo == 'P' || codigo == 'p') {
            prazo += valor;
        } else {
            printf("Codigo invalido!\n");
        }
    }

    do {
        printf("\n===== MENU DE OPCOES =====\n");
        printf("1 - Valor total das compras a vista\n");
        printf("2 - Valor total das compras a prazo\n");
        printf("3 - Valor total das compras efetuadas\n");
        printf("4 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Total a vista: R$ %.2f\n", vista);
                break;
            case 2:
                printf("Total a prazo: R$ %.2f\n", prazo);
                break;
            case 3:
                printf("Total geral: R$ %.2f\n", vista + prazo);
                break;
            case 4:
                printf("Encerrando o programa...\n");
                break;
            default:
                printf("Opcao invalida. Tente novamente.\n");
        }
        
    } while (opcao != 4);

    return 0;
}