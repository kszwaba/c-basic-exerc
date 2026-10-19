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
                            // pętla for wykona się przynajmniej jeden raz
    for (i = 0; i < 10; i++) // i++ inkrementacja i wykona się PO iteracji pętli
    {
        printf("%d", i);
    }
    printf("\n");

    for (i = 0; i < 10; ++i) // i++ inkrementacja i wykona się PRZED iteracją pętli
    {
        printf("%d", i);
    }
    printf("\n");
                            //wyświetli: 9876543210
    for (i=9; i >= 0; i--)
    {
        printf("%d", i);
    }
    printf("\n");

    return 0;
}