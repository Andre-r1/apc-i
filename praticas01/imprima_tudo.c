#include <stdio.h>

int main(){
    printf("Pat Quebra Barraco\n");
    printf("%i\n", 1234);
    printf("%i\n", 123);
    printf("%i\n", 56789);
    printf("%5i\n", 123);
    printf("%5i\n", 56789);
    printf("%05i\n", 1);
    printf("(%i, %i)\n", -1, 1);
    printf("%02i/%02i/%4i\n", 5, 8, 2024);
    
    //imprimindo decimais
    printf("%f\n", 3.141592);
    printf("%.2f\n", 3.141592);
    printf("%.7f\n", 3.1415926f);
    printf("%4.1f\n", 10.0);
    printf("%4.1f\n", 8.4);
    printf("R$ %6.2f\n", 297.85);

    //imprimindo caracteres
    printf("%c\n", 'A');
    printf("%s\n", "Eu estou aprendendo a programar em C!");
    printf("%20s\n", "Cafe");
    printf("%-20s\n", "Cafe");
    return 0;
}