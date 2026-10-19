/*
inicjalizacja oznaczona
Umożliwia zainicjalizowanie wskazanych indeksami elementów tablicy okreslonymi wartościami
Pozostałe elementy talicy są automatycznie inicalizowane wartościami "0"
*/

#include <stdio.h>

#define ROZMIAR 3

int main(void)
{

int tab[ROZMIAR] = {[2] = 100};  // element o indeksie = 2 zainicjalizowany wartością 100
int i = 0;
printf("%2s%14s", "i", " brak_danych[i]\n");

for (i = 0; i < ROZMIAR; i++)
{
    printf("Element number %d = %d\n", i, tab[i]);
}

return 0;

}
