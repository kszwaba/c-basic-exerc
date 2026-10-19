#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stddef.h>
#include <ctype.h>

int x;
int y;

int iloczyn(int a, int b) 
{
    int iloczyn_ab = a * b;
    return iloczyn_ab;

}

int main(void)
{
    printf("Podaj pierwszą liczbę:\n");
    scanf("%d", &x);
    printf("Wprowadzono liczbę: %d\n", x);
    printf("Podaj drugą liczbę:\n");
    scanf("%d", &y);

    printf("Iloczyn liczb wynosi:\n");
    iloczyn(x, y);  // wywołaanie funkcji iloczyn

    return 0;
}

/*
funkcja iloczyn przyjmuje jako argumenty wejściowe dwie wartości wejściowe typu int 
i zwraca jedną wartośc typu int będacą iloczynem wartości wejściowych
zmienne int a oraz int b są zmiennymi lokalnymi funkcji iloczyn (int a, int b)
*/
