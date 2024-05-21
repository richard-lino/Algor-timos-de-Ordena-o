/*Shell Sort*/

#include<stdio.h>
#include<stdlib.h>

// Função shell: implementa o algoritmo Shell Sort para ordenar o vetor
void shell(int v1[], int t) {
    int aux, i, j;
    int pulo = t / 2; // Define o tamanho do pulo inicial

    // Loop externo controla o tamanho do pulo
    while (pulo > 0) {
        // Loop interno percorre o vetor e realiza inserções parciais
        for (i = pulo; i < t; i++) {
            aux = v1[i]; // Armazena o valor a ser inserido na posição correta
            j = i;

            // Realiza a inserção parcial usando o método de inserção direta
            while (j >= pulo && v1[j - pulo] > aux) {
                v1[j] = v1[j - pulo]; // Move os elementos maiores para frente
                j = j - pulo;
            }
            v1[j] = aux; // Insere o valor na posição correta
        }
        pulo = pulo / 2; // Reduz o tamanho do pulo pela metade
    }
}

int main() {
    int i, n, v1[20];

    // Solicita ao usuário o número de elementos do vetor
    printf("Digite o numero de elementos que deseja no vetor: ");
    scanf("%d", &n);

    // Preenche o vetor com os elementos fornecidos pelo usuário
    for (i = 0; i < n; i++) {
        printf("Digite o valor da posição %d do vetor: ", i);
        scanf("%d", &v1[i]);
    }

    // Chama a função shell para ordenar o vetor
    shell(v1, n);

    // Imprime o vetor ordenado
    printf("Vetor ordenado:\n");
    for (i = 0; i < n; i++) {
        printf("%d\t\n", v1[i]);
    }

    return 0;
}

