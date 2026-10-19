#include <stdio.h>

int main(void)
{

char word[20];

    //if (scanf("%19s", word) == 1)
    //    scanf("%19s", word); 
    //    printf(word);

//char bufor[100];
//scanf("%99s", bufor);
//printf(bufor);

char buf[100];
   scanf("%99s", buf); /* funkcja wczytuje tekst do tablicy buf */
   printf("%s\n", buf);
   
return 0;

}
