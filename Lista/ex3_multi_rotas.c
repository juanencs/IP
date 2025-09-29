#include <stdio.h>



int main(){

    float vlitro;
    float di, df;
    float conslitro;
    float pedagio;
    float vpercurso;
    int sn;
    float totalkm = 0;
    float countpedagio = 0;
    float vtot = 0;

    do {
        printf("Digite o valor do litro de combustivel:\n");
        scanf("%f", &vlitro);
        printf("Digite o valor da distancia do inicio do percurso:\n");
        scanf("%f", &di);
        printf("Digite o valor da distancia do final do percurso:\n");
        scanf("%f", &df);
        printf("Digite o consumo medio do veiculo por litro:\n");
        scanf("%f", &conslitro);
        printf("Digite o valor do pedagio (caso nao haja pedagio, digite 0):\n");
        scanf("%f", &pedagio);
        printf("Deseja continuar? (1)SIM (2)NAO\n");
        scanf("%d", &sn);
        printf ("\n");

        vpercurso = ((df-di)/conslitro)*vlitro;
        vtot += vpercurso*2; //
        totalkm += 2*(df-di);
        countpedagio +=pedagio;

    } while (sn == 1);

    if (sn ==2){
        printf("%.2f quilometros percorridos considerando ida e volta\n", totalkm);
        printf("Quantidade total gasta com pedagio: R$%.2f\n", countpedagio);
        printf("Gasto total de combustivel: R$%.2f\n", vtot);
    }

    //calcula o custo do combustivel gasto.

    return 0;
}