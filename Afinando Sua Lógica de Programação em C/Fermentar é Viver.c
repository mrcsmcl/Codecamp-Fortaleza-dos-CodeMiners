#include <stdio.h>

int main() {
  int temperatura;
  scanf("%d", &temperatura);
  
  // TODO: Crie as condições de acordo com as saídas deste desafio.

    if (temperatura < 18) {
        printf("Baixa");
    } else if (temperatura >= 18 && temperatura < 24) {
        printf("Ideal");
    } else if (temperatura >= 24) {
        printf("Alta");
    }
  
  return 0;
}