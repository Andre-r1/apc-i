#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero1 = 0;
    int numero2 = 0;
    

    printf("Escreva o numero1: ");
    scanf("%i", &numero1);
    getchar();

    printf("Escreva o numero2: ");
    scanf("%i", &numero2);
    getchar();

    if (numero1 == 0 || numero2 == 0)
    {
        printf("Não existe MMC entre zero e outro número.\n");
        return 1;
    }

    int a = numero1;
    int b = numero2;

    int quociente, Resto;

    while (numero2 != 0)
    {
        quociente = numero1 / numero2;
        Resto = numero1 - numero2 * quociente;

        if (Resto < 0)
        {
            Resto += abs(numero2);
            quociente -= (numero1 * numero2 < 0);
        }

        if (Resto != 0)
        {
            printf("%i = %i * %i + %i   // diferente de 0\n", numero1, numero2, quociente, Resto);
        }
        else
        {
            printf("%i = %i * %i + %i   // = 0\n", numero1, numero2, quociente, Resto);
        }

        numero1 = numero2;
        numero2 = Resto;
    }

    int mdc = numero1;
    int mmc = abs(a * b) / mdc;

    printf("O MMC entre esses dois numeros e: %i\n", mmc);
    printf("O MDC entre esses dois numeros e: %i\n", mdc);

    int t = 0;
    int mod(int t, int n)
    {
        int quociente = t / n;
        return t - quociente * n;
    }

    int n;

    printf("Digite o valor de n para as tabelas Z_n: ");
    scanf("%i", &n);

    if (n <= 0)
    {
        printf("Por favor, digite um numero positivo.\n");
        return 1;
    }

    // Tabela de Adição
    printf("\nTabela de Adicao Z_%i\n", n);
    printf("   |");
    for (int i = 0; i < n; i++)
    {
        printf("%3i", i);
    }
    printf("\n---+");
    for (int i = 0; i < n; i++)
    {
        printf("---");
    }
    printf("\n");

    for (int i = 0; i < n; i++){
        printf("%2i |", i);
    for(int t = 0; t < n; t++) { 
        int soma = i + t;
        printf("%3i", mod(soma, n));
    }
    printf("\n");
}
    

    // Tabela de Multiplicação
    printf("\nTabela de Multiplicacao Z_%i\n", n);
    printf("   |");
    for (int i = 0; i < n; i++)
    {
        printf("%3i", i);
    }
    printf("\n---+");
    for (int i = 0; i < n; i++)
    {
        printf("---");
    }
    printf("\n");

    for (int i = 0; i < n; i++)
    {
        printf("%2i |", i);
        for (int t = 0; t < n; t++)
        {
            int multi = i * t;
            printf("%3i", mod(multi, n));
        }
        printf("\n");
    }

    return 0;
}
