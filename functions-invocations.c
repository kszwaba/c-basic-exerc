#include <stdio.h>

int lokaj(void);

int main(void)
{
    printf("Wywołam funkcję lokaja.\n");
    lokaj();
    printf("Tak. Przynieś mi herbatę i zapisywalne DVS.\n");
    return 0;
}

int lokaj(void)
{
    printf("Pan wzywał ?\n");
}