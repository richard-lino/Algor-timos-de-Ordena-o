/*Inserction Sort*/

#include<stdio.h>
#include<stdlib.h>

// Função situ: imprime a situação atual do vetor
void situ(int vet[10], int n){
    int i;
    printf("\nSituação atual:\n ");
    for (i=0; i<n; i++){
        printf("%d\t", vet[i]);
    }
}

// Função ins: implementa o algoritmo de insertion sort
void ins(int vet[10], int n, int *trocas){
    int i, j, t;
    for (i=1; i<n; i++){
        j=i;
        t=vet[i];
        // Move os elementos maiores que t para frente
        while (j>0 && vet[j-1] > t){
            situ(vet, n); // Chama a função situ para imprimir a situação atual
            vet[j]=vet[j-1]; // Move o elemento para frente
            j=j-1;
            *trocas = *trocas + 1; // Incrementa o número de trocas
        }
        vet[j]=t; // Insere t na posição correta
        *trocas = *trocas + 1; // Incrementa o número de trocas
        situ(vet, n); // Chama a função situ para imprimir a situação atual
    }
}

int main(){
    int i, n, vet[10], trocas=0;

    // Solicita ao usuário o número de elementos do vetor
    printf("Digite o numero de elementos que deseja: ");
    scanf("%d", &n);

    // Preenche o vetor com os elementos fornecidos pelo usuário
    for (i=0; i<n; i++){
        printf("Digite o valor da posição %d: ", i);
        scanf("%d", &vet[i]);
    }

    // Chama a função ins para ordenar o vetor e conta o número de trocas
    ins(vet, n, &trocas);

    // Imprime o número de trocas realizadas durante a ordenação
    printf("\nExecuções: %d\n", trocas);

    // Imprime o vetor ordenado
    printf("Vetor ordenado:\n");
    for (i=0; i<n; i++){
        printf("%d\t", vet[i]);
    }

    return 0;
}

