#include <stdio.h>

int main(void)
{

int x, y;
int *p;     // inicjalizacja zmiennej wskaźnikowej p
p = &x;     // przypisanie zmiennej p wartości komórki o adresie x

printf("  p = %p\n &x = %p\n &y = %p\n", p, &x, &y);

p = &y;

printf(" &y = %p\n" , &y);



return 0;
}