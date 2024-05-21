/*Heap Sort*/

#include <stdio.h>

// Função peneira: rearranja o vetor para manter a propriedade de heap
void peneira(int *vet, int raiz, int fundo) {
    int pronto = 0, filhoMax, tmp;

    // Loop para rearranjar o vetor
    while ((raiz * 2 <= fundo) && (!pronto)) {
        // Determina o índice do filho com o maior valor
        if (raiz * 2 == fundo || vet[raiz * 2] > vet[raiz * 2 + 1]) {
            filhoMax = raiz * 2;
        } else {
            filhoMax = raiz * 2 + 1;
        }

        // Se o filho com o maior valor é maior que a raiz, troca os elementos
        if (vet[raiz] < vet[filhoMax]) {
            tmp = vet[raiz];
            vet[raiz] = vet[filhoMax];
            vet[filhoMax] = tmp;
            raiz = filhoMax; // Atualiza a raiz para o filho com o maior valor
        } else {
            pronto = 1; // Se não houver troca, a propriedade de heap está restaurada
        }
    }
}

// Função heapsort: implementa o algoritmo Heap Sort
void heapsort(int *vet, int n) {
    int i, tmp;

    // Constrói o heap inicial
    for (i = (n / 2) - 1; i >= 0; i--) {
        peneira(vet, i, n - 1);
    }

    // Ordena o heap
    for (i = n - 1; i >= 1; i--) {
        // Troca a raiz (maior elemento) com o último elemento
        tmp = vet[0];
        vet[0] = vet[i];
        vet[i] = tmp;

        // Restaura a propriedade de heap no restante do vetor
        peneira(vet, 0, i - 1);
    }
}

int main() {
    int i, n;

    // Solicita ao usuário o número de elementos que deseja digitar
    printf("Digite o número de elementos que deseja digitar: ");
    scanf("%d", &n);

    int vetor[n];

    // Preenche o vetor com os elementos fornecidos pelo usuário
    for (i = 0; i < n; i++) {
        printf("Digite o elemento %d: ", i);
        scanf("%d", &vetor[i]);
    }

    // Chama a função heapsort para ordenar o vetor
    heapsort(vetor, n);

    // Imprime o vetor ordenado
    printf("\nHeap de Mínimo:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", vetor[i]);
    }

    // Imprime o vetor ordenado em ordem decrescente
    printf("\n\nHeap de Máximo:\n");
    for (i = n - 1; i >= 0; i--) {
        printf("%d ", vetor[i]);
    }
    printf("\n\n");

    return 0;
}

