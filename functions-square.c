#include <stdio.h>

int kwadrat(int); // tylko deklaracja funkcji podnoszenia do kwadratu

int main(void)
{
int kw, wartosc;
printf("Podaj wartość:\n");
scanf("%d", &wartosc);
kw = kwadrat(wartosc); //do zmiennej pomocnieczej przypisujemy wynik funkcji "kwadrat"
printf("Kwardat wprowadzonej liczby %d to: %d\n", wartosc, kw);
// alternatywne rozwiązanie gdzie jako argument podajemy wywołanie funkcji "kwadrat"
printf("Kwadrat wprowadzonej liczby %d to: %d\n", wartosc, kwadrat(wartosc));
return 0;
}

int kwadrat(int num) //funkcja podnoszenia do kwadratu
{
int pom; // zmienna lokalna funkcji
pom = num * num;
return pom; // zwracanie wyniku, zmienna pom nie jest konieczna, może być return pom * pom
}

/*
W momencie zakończenia działania, funkcja kwadrat przesyła do funkcji main() obliczoną
wartość i wartość ta jest wstawiana w miejsce wywołania funkcji. W kolejnym etapie następuje
wstawienie tej wartości do zmiennej kw.
*/