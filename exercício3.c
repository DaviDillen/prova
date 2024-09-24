#include <stdio.h>
#include <stdlib.h>

int main(){
    double farenheit;
    printf ("digite os graus em farenheit");
    scanf ("%lf", &farenheit);
    double celsius;
    celsius = (farenheit - 32.0) * (5.0/9.0);
    printf ("%lf", celsius);
    return 0;
}
