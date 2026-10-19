#include <stdio.h>
#include <string.h>

int main (void)
{
    char s1[] = "Wikibooks";
    char s2[] = "Wikibooks";
   
    if (strcmp(s1, s2) == 0)
        printf("Łańcuchy s1 i s2 są takie same");
    else
        printf("Łańcuchy s1 i s2 nie są takie same");

    // program wyświetli: Łańcuchy s1 i s2 są takie same

    return 0;
}
