/* program wypisuje liczby 0..9 */

#include <stdio.h>

int main(int argc, char **argv)
{
    int i = 0;

    while (i < 10)          // pętla while może się nie wykonać ani razu
    {
        printf("%d", i);
        i = i + 1;
    }
    printf("\n");
                            
    // pętla FOR wykona się przynajmniej jeden raz

                            // wyświetli: 0123456789
    for (i = 0; i < 10; i++) // i++ inkrementacja i wykona się PO iteracji pętli
    {
        printf("%d", i);
    }
    printf("\n");
                            // wyświetli: 0123456789
    for (i = 0; i < 10; ++i) // i++ inkrementacja i wykona się PRZED iteracją pętli
    {
        printf("%d", i);
    }
    printf("\n");
                            // wyświetli: 9876543210
    for (i=9; i >= 0; i--)
    {
        printf("%d", i);
    }
    printf("\n");

    return 0;
}