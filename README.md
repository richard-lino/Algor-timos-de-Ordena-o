# Algoritmos de Ordenação

Bem-vindo ao repositório **Algoritmos de Ordenação**! Aqui você encontrará implementações em linguagem C de seis dos principais algoritmos de ordenação.

## Algoritmos

1. **Selection Sort**
   - **Ideia:** Dado um vetor com n elementos, a cada iteração seleciona o menor elemento do subconjunto não ordenado e o insere no subconjunto ordenado.

2. **Insertion Sort**
   - **Ideia:** Semelhante à ordenação de uma mão de cartas. A cada iteração, o elemento selecionado é inserido na sua posição correta dentro do conjunto ordenado.

3. **Shell Sort**
   - **Ideia:** Usa um pulo para separar a distância entre os números comparados dentro do vetor. Conforme o algoritmo avança, o pulo diminui até ser 1, deixando o vetor devidamente ordenado.

4. **Merge Sort**
   - **Ideia:** Realiza a operação de Merge (união, fusão, intercalação) em vetores ordenados, gerando um novo vetor ordenado.

5. **Quick Sort**
   - **Ideia:** Usa um pivô para particionar o vetor em partes menores, organizando essas partes recursivamente.

6. **Heap Sort**
   - **Ideia:** Constrói um heap máximo a partir do vetor fornecido e, em seguida, ordena esse heap, movendo o elemento máximo (raiz) para o final do vetor em cada iteração.

## Execução dos Programas

Para executar os programas em C disponíveis neste repositório, siga os passos abaixo:

1. **Compilar o arquivo fonte (.c)**:
   ```bash
   gcc arquivo.c -o arquivo

2. **Executar o programa compilado**
   ```bash
   ./arquivo
