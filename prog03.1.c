#include <stdio.h>

int main() {
    
    int vetor[5];  

    printf("Digite 5 numeros inteiros:\n");
    for (int i = 0; i < 5; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("\nElementos do vetor:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
    
    return 0;
}