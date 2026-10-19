#include <stdio.h>

int imin(int, int); // prototyp funkcji

int main(void)
{
int num1, num2;
printf("Podaj dwie liczby całkowite (q kończy program):\n");
while (scanf("%d %d", &num1, &num2) == 2) // "== 2" 
    {
    printf("Mniejsza liczba spośród %d - %d jest %d.\n", num1, num2, imin(num1, num2));
    printf("Podaj dwie liczby całkowite (q kończy program):\n");
    }
printf("Gotowe.\n");

return 0;
}

int imin(int n, int m)
{
int min;
if (n < m)
    min = n;
else
    min = m;
return min;
}
