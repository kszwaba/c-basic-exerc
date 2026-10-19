#include <stdio.h>

int main(void)
{
    unsigned int wiek;

    printf("Podaj ile masz lat\n");
    if (scanf("%d", &wiek) == 1)
    //    return -1;
    //else
    
    //scanf(" %d", &wiek);
    printf("Masz %d lat!\n", wiek);
    
    else
    printf("Błędne dane wejściowe");

    return 0;
}