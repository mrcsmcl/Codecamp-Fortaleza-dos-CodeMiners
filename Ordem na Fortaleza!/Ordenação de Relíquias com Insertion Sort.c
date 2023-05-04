#include <stdio.h>
#include <stdlib.h>

void insertionSort(int reliquias[], int quantidade) {
  // TODO: Implemente o algoritmo de ordenação "Insertion Sort".

    int i, j, aux;
    for (i = 1; i < quantidade; i++) {
        aux = reliquias[i];
        j = i - 1;
        while (j >= 0 && reliquias[j] > aux) {
            reliquias[j+1] = reliquias[j];
            j--;
        }
        reliquias[j+1] = aux;
    }
}

int main() {
  // Lê os nossos dados de entrada:
  int quantidade;
  scanf("%d", &quantidade);
  int  reliquias[quantidade];
  for (int i = 0; i < quantidade; i++) {
    scanf("%d", & reliquias[i]);
  }

  // Executa o algoritmo "insertionSort" para ordenar os "reliquias".
  insertionSort(reliquias, quantidade);

  // Imprime as "reliquias" ordenados
  for (int i = 0; i < quantidade; i++) {
    printf("%d ",  reliquias[i]);
  }
  return 0;
}