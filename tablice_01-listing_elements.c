#include <stdio.h>

int main(void)
{

//#define ROZMIAR 10
int ROZMIAR = 10;

//int tablica [ROZMIAR];
//int tablica [10];
int tablica [10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

for(int i = 0; i < ROZMIAR; ++i)
printf("%d", tablica[i]);

return 0;
}