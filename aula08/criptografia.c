#include <stdio.h>

    int main(){
        // atribuir string
        //nome[30] = "Andre Souza Mattos";
    
        // atribuir um conjunto de caracteres
    char frase[31] = {'E','u',' ', 'p', 'r', 'o', 'g', 'r', 'a', 'm', 'o', ' ', 'e', 'm', ' ', 'C', '\0'};

        for(int i=0; i<30; i++){
            printf("%c", frase[i]);
        }
        printf("\n");

        printf("Entre com uma frase: ");
        scanf("%s\n", frase);

        char cesar[6][5];
        int k=0;
        for(int i=0; i<6; i++) {
            for(int j=0; j<5; j++) {
                cesar[i][j] = frase[k];
                k++;
            }
        }
        printf("A frase codificada: ");
        for(int j=0; j<5;j++) {
            for(int i=0; i<6; i++){
                printf("%c", cesar[i][j]);
            }
        }
        printf("\n");

    
    return 0;
}