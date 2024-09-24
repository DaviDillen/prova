#include <stdio.h>
#include <stdlib.h>

int main(){
    int celsius;
    printf("insira a temperatura em graus celsius: ");
    scanf("%i", &celsius);
    if(celsius <= 0){
        printf("geleira - Temperatura muito fria!");
    }else{
        if (1 < celsius <= 15);
            printf ( "Frio");
            if ( 16 < celsius <= 25){
                printf("Agradável");
            }else{
                if (26 < celsius <= 35)
                    printf("Quente");
                     if (celsius <= 35){
                        printf("Muito Quente");

                    }

                }

            }
}
