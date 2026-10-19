#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int zamiana(int a)
{
    a = 10;
    return zamiana;

}

int main(void)
{
    int liczba = 1;
    zamiana(liczba);
    printf("%d", liczba);
    return 0;
}