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

printf("Podaj indeks \"i\" elementu, którego wartość chcesz wczytać:");
scanf("%d", &i);
printf("Podaj wartośc elementu okreslonego indeksem \"i\" tab[%d]", i);
scanf("%d", &tab[i]);
//printf("Nowa wartość tab[%d] wynosi %d", i, tab[i]);

printf("Nowa zawartośc tablicy tab wynosi:\n");

for(i = 0; i < ROZMIAR; ++i)
    {
        printf("Element number %d = %d\n", i, tab[i]);
    }

return 0;

}

/*
sizeof(tab) / sizeof(tab[0] = ilośc elemetów tablicy
sizeof(tab) - rozmiar tablcy w bajtach
sizeof(tab[0] - rozmiar pierwszego elementu
*/

/*
Problem do rozwiązania: jak w UI przekazywać indeks-y od 1 ?
*/