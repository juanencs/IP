#include <stdio.h>

int main(){
    
    float p0, p1; //p0: preco inicial; p1: preco final
    int categoria;

    printf("Digite o valor do preço inicial do produto:\n");
    scanf("%f", &p0);
    printf("Informe a categoria: (1 para normal, 2 para prata, 3 para dourada:)\n");
    scanf("%d", &categoria);

    if (categoria == 1){
        p1 = p0*0.9;
    } else if (categoria == 2){
        p1 = (p0*0.9)*0.8;
    } else if (categoria == 3){
        p1 = (p0*0.9)*0.7;
    } else {
        printf("Categoria invalida.\n");
    }

    if (p0 >= 100 && p0<= 250){
        p1 = p1-10.0;
    } else if (p0 > 250 && p0 <= 500){
        p1 = p1-20.0;
    } else if (p0 > 500){
        p1 = p1-30.0;
    }

    printf("Preço original: R$ %.2f\n", p0);
    printf("Preço final: R$ %.2f\n", p1);
    
    return 0;
}