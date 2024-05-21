/*Selection Sort*/

#include<stdio.h>
#include<stdlib.h>

// Função situ: imprime a situação atual do vetor
int situ(int vet[10], int n) {
    int i;
    printf("\nSituação atual:\n ");
    for (i = 0; i < n; i++) {
        printf("%d\t", vet[i]);
    }
    return 0;
}

// Função sel: implementa o algoritmo de selection sort
int sel(int vet[10], int n) {
    int i, j, m, t, k = 0; // Variáveis de iteração, mínimo, temporária e contador de trocas
    for (i = 0; i < n - 1; i++) {
        m = i; // Assume o índice atual como o mínimo
        for (j = i + 1; j < n; j++) {
            // Encontra o índice do menor elemento no restante do vetor
            if (vet[j] < vet[m]) {
                m = j;
            }
        }
        // Troca o elemento atual pelo menor encontrado (se necessário)
        if (m != i) {
            t = vet[i];
            vet[i] = vet[m];
            vet[m] = t;
            k++; // Incrementa o contador de trocas
        }
        situ(vet, n); // Imprime a situação atual do vetor
    }
    return k; // Retorna o número total de trocas realizadas
}

int main() {
    int i, aux, n, vet[10];

    // Solicita ao usuário o número de elementos do vetor
    printf("Digite o numero de elementos que deseja: ");
    scanf("%d", &n);

    // Preenche o vetor com os elementos fornecidos pelo usuário
    for (i = 0; i < n; i++) {
        printf("Digite o valor da posição %d: ", i);
        scanf("%d", &vet[i]);
    }

    // Chama a função sel para ordenar o vetor e contar o número de trocas
    aux = sel(vet, n);

    // Imprime o número de trocas realizadas
    printf("\nExecuções: %d\n", aux);

    // Imprime o vetor ordenado
    printf("Vetor ordenado:\n");
    for (i = 0; i < n; i++) {
        printf("%d\t", vet[i]);
    }

    return 0;
}

