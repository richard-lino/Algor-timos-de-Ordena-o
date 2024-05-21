/*Merge*/

#include<stdio.h>
#include<stdlib.h>

// Função merge: combina duas partes ordenadas do vetor em uma única parte ordenada
void merge(int v1[], int e1, int d1, int e2, int d2) {
    int i = e1, j = e2, k = 0;
    int n = d2 - d1 + 1; // Calcula o tamanho do vetor resultante
    int v2[n]; // Vetor temporário para armazenar a fusão

    // Compara os elementos de ambas as partes e os mescla em v2
    while (i <= d1 && j <= d2) {
        if (v1[i] <= v1[j]) {
            v2[k] = v1[i];
            i++;
        } else {
            v2[k] = v1[j];
            j++;
        }
        k++;
    }

    // Copia os elementos restantes da primeira parte (se houver)
    while (i <= d1) {
        v2[k] = v1[i];
        i++;
        k++;
    }

    // Copia os elementos restantes da segunda parte (se houver)
    while (j <= d2) {
        v2[k] = v1[j];
        j++;
        k++;
    }

    // Copia os elementos ordenados de v2 de volta para v1
    for (i = e1, k = 0; i <= d2; i++, k++) {
        v1[i] = v2[k];
    }
}

// Função sort: implementa o algoritmo de merge sort recursivamente
void sort(int e, int d, int v1[]) {
    int m;
    if (d > e) {
        m = (e + d) / 2;
        // Divide o vetor em duas partes e ordena recursivamente cada parte
        sort(e, m, v1);
        sort(m + 1, d, v1);
        // Combina as partes ordenadas usando a função merge
        merge(v1, e, m, m + 1, d);
    }
}

int main() {
    int i, n, d, e, v1[20];
 
    // Solicita ao usuário o número de elementos do vetor
    printf("Digite o numero de elementos que deseja no vetor: ");
    scanf("%d", &n);

    // Preenche o vetor com os elementos fornecidos pelo usuário
    for (i = 0; i < n; i++) {
        printf("Digite o valor da posição %d do vetor : ", i);
        scanf("%d", &v1[i]);
    }

    e = 0; // Limite inferior do vetor
    d = n - 1; // Limite superior do vetor

    // Chama a função sort para ordenar o vetor
    sort(e, d, v1);

    // Imprime o vetor ordenado
    printf("Vetor ordenado:\n");
    for (i = 0; i < n; i++) {
        printf("%d\t\n", v1[i]);
    }

    return 0;
}

