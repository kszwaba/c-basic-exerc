#include <stdio.h>

int main(void)
{

int liczba = 80;
// liczba = 0x42;
int *wskaznik = &liczba;
*wskaznik = 42;
printf("Wartość zmiennej liczba: %d\n", liczba);
printf("adres zmiennej liczba: %p\n", &liczba);

printf("Wartość zmiennej: %d, jej adres: %p.\n", liczba, &liczba);
printf("Adres przechowywany we wskażniku: %p, wskazywana wartość: %d.\n", liczba, *wskaznik);

return 0;
}