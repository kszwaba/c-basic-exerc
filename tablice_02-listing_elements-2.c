#include <stdio.h>

int main()
{

    //int ROZM = 4;
    //int tablica[ROZM];
    
    int tablica[4];

    tablica[0] = 0;
    tablica[1] = 10;
    tablica[2] = -20;
    tablica[3] = 3;

    //scanf("%d)", &tablica[0]);
    //scanf("%d %d", &tablica[1], &tablica[2]);
    //scanf("%d", &tablica[3]);

    //printf("Podaj 4-ty element tablicy =");
    //scanf("%d", &tablica[3]);

    for(int i = 0; i < 4; i++)
    printf("%d ", tablica[i]);

    return 0;
}