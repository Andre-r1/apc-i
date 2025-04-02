#include <stdio.h>

int main(){
    char tecla;
    printf("pressione uma tecla e depois ENTER: \n");
    scanf("%c", &tecla); // tecla = 'a';
    getchar(); // ler o/n da leitura anterior


    printf("Voce pressionou a tecla %c\n", tecla);
    printf("\n");

    printf("pressione outra tecla e depois ENTER: \n");
    scanf("%c", &tecla); // tecla = 'a';
    getchar();

    printf("Voce pressionou a tecla %c\n", tecla);
    
    char nome [31];
    printf("entre com seu nome: ");
    scanf("%[^\n]s", nome);
    printf("voce digitou %s\n", nome);


    return 0;
}