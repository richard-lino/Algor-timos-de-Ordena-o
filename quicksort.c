/*Quick Sort*/

#include<stdio.h>
#include<stdlib.h>

// Função que implementa o algoritmo Quick Sort
int quick(int v1[], int e, int d) {
    int aux, pivo, i = e, j = d;

    // Escolhe o pivô como elemento central
    pivo = v1[(e + d) / 2];
    
    // Particiona o vetor em duas partes
    while (i <= j) {
        // Encontra elementos maiores que o pivô à direita
        while (v1[i] < pivo) {
            i++;
        }
        
        // Encontra elementos menores que o pivô à esquerda
        while (v1[j] > pivo) {
            j--;
        }
        
        // Troca os elementos de posição se necessário
        if (i < j) {
            aux = v1[i];
            v1[i] = v1[j];
            v1[j] = aux;
            i++;
            j--;
        } else {
            // Retorna o índice onde os elementos se cruzam
            return i;
        }
    }
    
    // Retorna o índice onde os elementos se cruzam
    return j;
}

// Função recursiva para ordenar o vetor usando Quick Sort
void sort(int v1[], int e, int d) {
    int pivo;
    
    // Se a posição inicial for menor que a final, continua a ordenação
    if (e < d) {
        // Encontra o índice do pivô após a partição
        pivo = quick(v1, e, d);
        
        // Ordena as subpartições à esquerda e à direita do pivô
        sort(v1, e, pivo - 1);
        sort(v1, pivo + 1, d);
    }
}

int main() {
    int i, n, d, e, v1[10];
    
    // Solicita ao usuário o número de elementos no vetor
    printf("Digite o numero de elementos que deseja no vetor: ");
    scanf("%d", &n);
    
    // Preenche o vetor com os valores fornecidos pelo usuário
    for (i = 0; i < n; i++) {
        printf("Digite o valor da posição %d do vetor: ", i);
        scanf("%d", &v1[i]);
    }
    
    // Define os índices de início e fim do vetor
    e = 0;
    d = n - 1;
    
    // Chama a função para ordenar o vetor usando Quick Sort
    sort(v1, e, d);
    
    // Imprime o vetor ordenado
    for (i = 0; i < n; i++) {
        printf("%d\t\n", v1[i]);
    }
    
    return 0;
}

