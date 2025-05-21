#include <stdio.h>
#include <stdlib.h>

int main () {
    int valor_a = 0;
    int valor_b = 0;

    printf("Escreva o valor de a: ");
    scanf("%i", &valor_a);
    getchar();

    printf("Escreva o valor de b: ");
    scanf("%i", &valor_b);
    getchar();

    if (valor_a == 0 || valor_b == 0) {
        printf("Não existe MMC entre zero e outro número.\n");
        return 1;
    }

    int a = valor_a;
    int b = valor_b;

    int Q, Resto;

    while (valor_b != 0) {
        Q = valor_a / valor_b;
        Resto = valor_a - valor_b * Q;

        
        if (Resto < 0) {
            Resto += abs(valor_b);
            Q -= (valor_a * valor_b < 0);
        }

        
        if (Resto != 0) {
            printf("%i = %i * %i + %i   \t// diferente = de 0\n", valor_a, valor_b, Q, Resto);
        } else {
            printf("%i = %i * %i + %i   \t// = 0\n", valor_a, valor_b, Q, Resto);
        }

        valor_a = valor_b;
        valor_b = Resto;
    }

    int mdc = valor_a;
    int mmc = abs(a * b) / mdc;

    printf("\nO MMC entre variavel (a, b): %i\n", mmc);
    printf("\nO MDC entre variavel (a, b): %i\n", mdc);
    printf("\n\n");


    
int mod(int a, int n) {
    int q = a / n;
    return a - q * n;
}


    int n;
    do {
        printf("Digite o valor de n para as tabelas Z_n: ");
        scanf("%d", &n);

        if (n <= 0) {
            printf("Por favor, digite um valor para n positivo.\n");
        }
    } while (n <=0);

    // Tabela de Adição Modular
    printf("\nTabela de Adicao Modular Z_%d\n", n);
    printf("   |");
    for (int i = 0; i < n; i++) {
        printf("%3d", i);
    }
    printf("\n---+");
    for (int i = 0; i < n; i++) {
        printf("---");
    }
    printf("\n");

    for (int i = 0; i < n; i++) {
        printf("%2d |", i);
        for (int j = 0; j < n; j++) {
            int soma = i + j;
            printf("%3d", mod(soma, n));
        }
        printf("\n");
    }

    // Tabela de Multiplicação Modular
    printf("\nTabela de Multiplicacao Modular Z_%d\n", n);
    printf("   |");
    for (int i = 0; i < n; i++) {
        printf("%3d", i);
    }
    printf("\n---+");
    for (int i = 0; i < n; i++) {
        printf("---");
    }
    printf("\n");

    for (int i = 0; i < n; i++) {
        printf("%2d |", i);
        for (int j = 0; j < n; j++) {
            int multi = i * j;
            printf("%3d", mod(multi, n));
        }
        printf("\n");
    }
 
    return 0;
}