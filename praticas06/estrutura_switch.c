#include <stdio.h>
int main()
{

    int nota = 0;
    printf("TELA INICIAL\n");
    printf("1 - Nota entre 0 e 3\n");
    printf("2 - Nota entre 4 e 5\n");
    printf("3 - Nota entre 6 e 7\n");
    printf("4 - Nota entre 8 e 9\n");
    printf("5 - Nota 10\n");

    printf("Escolha uma opcao =>");
    scanf("%i", &nota);
    switch (nota)
    {
    case 1:
        printf("Voce ganhou '*'.\n");
        break;
    case 2:
        printf("Voce ganhou '**'.\n");
        break;
    case 3:
        printf("Voce ganhou '***'.\n");
        break;
    case 4:
        printf("Voce ganhou ****!\n");
        break;
    case 5:
        printf("Voce ganhou *****!\n");
        break;

    defalt:
        printf("Nota invalida! Tente novamente.\n");
    }
    return 0;
}