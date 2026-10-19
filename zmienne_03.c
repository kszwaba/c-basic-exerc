#include <stdio.h>

int main(void)
{

    float czas;
    float dystans;
    float predkosc;

    czas = 10.0f;
    dystans = 1000.0f;
    predkosc = dystans / czas;
    printf("Średnia prędkość to: %.2f\n", predkosc);

    return 0;

}