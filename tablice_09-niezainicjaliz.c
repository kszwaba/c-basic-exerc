#include <stdio.h>

#define ROZMIAR 3

int main(void)
{

int tab[ROZMIAR];  // niezainicjowana tablica
int i = 0;
printf("%2s%14s", "i", " brak_danych[i]\n");

for (i = 0; i < ROZMIAR; i++)
{
    printf("%2d %14d\n", i, tab[i]);
}

return 0;

}

/*
Wartości tablicy zostały wypełnione losowymi danymi
*/