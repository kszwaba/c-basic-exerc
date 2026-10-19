/* program dokonuje mnożenia dwóch liczb a wynik porównuje z liczbą 100 */

#include <stdio.h>

int main(void)
{
    float liczba_1;
    float liczba_2;
    float wynik_mnozenia;
    int porownanie=100;
    // alternatywnie #define porownanie 100

    printf("Podaj pierwszą liczbę:\n");
    scanf("%f",&liczba_1);
    printf("Podaj drugą liczbę:\n");
    scanf("%f",&liczba_2);

    wynik_mnozenia = liczba_1 * liczba_2;

    if (wynik_mnozenia > porownanie)
        printf("Wynik mnożenia %.2f jest większy od %d\n",wynik_mnozenia, porownanie);

    if (wynik_mnozenia < porownanie)
        printf("Wynik mnożenia %.2f jest mniejszy od %d\n",wynik_mnozenia, porownanie);
    
    if (wynik_mnozenia == porownanie)
        printf("Wynik mnożenia %.2f jest równy %d\n",wynik_mnozenia,porownanie);

    return 0;
}