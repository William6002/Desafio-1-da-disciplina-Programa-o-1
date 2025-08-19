#include <stdio.h>
#include <stdlib.h>
int calculo(int array[], int valor_procurado, int size) {
    
    int contador = 0;
    for (int i = 0; i < size; i++) {
        if (array[i] == valor_procurado) {
            contador++;
        }
    }
    return contador;

}
  float media(int array[], int array2[], int size, int valor_procurado) {
    
    int contador1 = 0;
    int soma = 0;
    for (int i = 0; i < size; i++) {
        if (array[i] == valor_procurado) {
            soma = soma + array2[i];
            

            contador1++;
        }
       
    }
    if (contador1 == 0) {
        return 0;
    }
    float resultado = soma / contador1;
    return resultado;
}
int main() {
    int idades[5];
    int notas[5];
    for (int i = 0; i < 5; i++) {
        printf("Insira a idade do cliente %d (total de 5 clientes): ", i + 1);
        scanf("%d", &idades[i]);
        printf("Insira a nota do cliente %d (total de 5 clientes)(3 - excelente, 2 - bom, 1 - regular): ", i + 1);
        scanf("%d", &notas[i]);
    }

    int opiniao1 = calculo(notas, 1, 5);
    int opiniao2 = calculo(notas, 2, 5);
    int opiniao3 = calculo(notas, 3, 5);
    printf("Total de clientes que deram nota 1: %d\n", opiniao1);
    printf("Total de clientes que deram nota 2: %d\n", opiniao2);
    printf("Total de clientes que deram nota 3: %d\n", opiniao3);
    float media1 = media(notas, idades, 5, 1);
    float media2 = media(notas, idades, 5, 2);
    float media3 = media(notas, idades, 5, 3);
    printf("A media de idade dos clientes que deram nota 1 foi: %.2f\n", media1);
    printf("A media de idade dos clientes que deram nota 2 foi: %.2f\n", media2);
    printf("A media de idade dos clientes que deram nota 3 foi: %.2f\n", media3);
    float porcentagem1 = opiniao1 * 100 / 5;
    float porcentagem2 = opiniao2 * 100 / 5;
    float porcentagem3 = opiniao3 * 100 / 5;
    printf("%.2f%% dos clientes responderam 1, %.2f%% responderam 2 e %.2f%% responderam 3\n", porcentagem1, porcentagem2, porcentagem3);

    system("PAUSE");

}