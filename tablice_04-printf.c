#include <stdio.h>

#define ROZMIAR 3

int main(void)
{

int tab[ROZMIAR] = {3, 6, 8}; 
// int tab[] = {3, 6, 8};       // rozmiar tablicy nie musi być jawnie określony
int i = 0;
printf("Wydruk tablicy tab:\n");

for(i = 0; i < ROZMIAR; ++i)
    {
        printf("Element numer %d = %d\n", i, tab[i]);
    }

return 0;

}