#include <stdio.h>

#define ROZMIAR 3

int main(void)
{

int tab[ROZMIAR] = {3, 6, 8}; 
int i = 0;
printf("Wydruk tablicy tab w pętli:\n");

// for(i = 0; i < ROZMIAR; ++i)
for(i = 0; i < sizeof(tab) / sizeof(tab[0]) ; ++i) //automatyczne obliczanie ilości elementów tab
    {
        printf("Element numer %d = %d\n", i + 1, tab[i]);
    }


return 0;

}

/*
sizeof(tab) / sizeof(tab[0] = ilośc elemetów tablicy
sizeof(tab) - rozmiar tablcy w bajtach
sizeof(tab[0] - rozmiar pierwszego elementu
*/