#include <stdio.h>

int main(){
    char nome_produto[31];
    int quantidade;
    float preco;
    float valor_total;

    printf("\nEntre com o nome do produto: ");
    scanf("%[^\n]s", nome_produto);
    getchar();

    printf("Entre com a quantidade do produto: ");
    scanf("%i", &quantidade);
    getchar();

    printf("Entre com o preco do produto: ");
    scanf("%f", &preco);
    getchar();

    valor_total = preco * quantidade;

    printf("\t\tNOTA LEGAL\n");
    printf("Iten               Qtd   Preco       Valor\n");
    printf("%-20s %03i %7.2f %7.2f\n", nome_produto, quantidade, preco, valor_total);
    printf("TOTAL: %15.2f", valor_total);

    


    return 0;
}