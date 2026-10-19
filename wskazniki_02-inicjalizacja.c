#include <stdio.h>

int main(void)
{
    int updates = 6;        // deklaracja zmiennej
    int * p_updates;        // deklaracja wskaźnika na typ int
    //int * pt;               // wskaźnik na typ int

    int higgens = 5;
    int * pt = &higgens;    // deklaracja wskaźnika + jednoczesna inicjalizacja

    printf("adres zmiennej wskaźnikowej \"pt\" %d", higgens);

    return 0;
}

/*
W deklaracji zmiennej wskaźnikowej należy określić typ 
*/