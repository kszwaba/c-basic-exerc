#include <stdio.h>

int main(void)
{

int tablica[5] = {0}; // zerowanie tablicy 5-elementowej
int i = 0;
tablica[2] = 3;
tablica[3] = 7;
for(i = 0; i != 5; ++i)
    {
        printf("tablica[%d]=%d\n", i, tablica[i]);
    }

return 0;

}

// tablica[i] -  element tablicy "tablica" o indexie i