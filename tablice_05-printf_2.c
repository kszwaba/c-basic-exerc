#include <stdio.h>

#define ROZMIAR 3

int main(void)
{

int tab[ROZMIAR] = {3, 6, 8}; 
// int tab[] = {3, 6, 8};       // rozmiar tablicy nie musi być jawnie określony
int i = 0;
printf("Wydruk tablicy tab w pętli:\n");

for(i = 0; i < ROZMIAR; ++i)
    {
        printf("Element numer %d = %d\n", i + 1, tab[i]);
    }

printf("Wydruk tablicy tab bez pętli:\n");
printf("Element numer 1 = %d\n", tab[0]);
printf("Element numer 2 = %d\n", tab[1]);
printf("Element numer 3 = %05d\n", tab[2]);

return 0;

}