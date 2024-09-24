#include <stdio.h>
#include <stdlib.h>

int main(){
    int temperatura;
    printf("digite a temperatura: ");
    scanf("%i", &temperatura);
    if (temperatura < -10){
        printf ("risco baixo");
    } else {
            if (-10 < temperatura < 0){
            printf ("risco moderado");
        } else {
                if ( 0 < temperatura < 10){
                printf ("risco elevado");
            } else {
                    if (10 < temperatura < 20){
                    printf ("risco crítico");

                }
            }
        }
    }
}

