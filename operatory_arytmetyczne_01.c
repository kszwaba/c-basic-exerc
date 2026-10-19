#include <stdio.h>
//#include <conio.h>

int main(int argc, char* argv[])
{

    unsigned int a,b,c;
    
    printf("Operatory arytmetyki dla typu unsigned int ");
    printf("Podaj a:\n");
    scanf("%u", &a);
    printf("Podaj b:\n");
    scanf("%u", &b);
    c = a + b;
    printf("Suma %u + %u = %u\n", a,b,c);
    c = a - b;
    printf("Roznica %u - %u = %u\n", a,b,c);
    c = a * b;
    printf("Iloczyn %u * %u = %u\n", a,b,c);
    c = a / b;
    printf("Iloraz calkowity %u / %u =%u\n", a,b,c);
    c = a % b;
    printf("Reszta z dzielenia całkowitego %u / %u = %u\n", a,b,c);

    return 0;
}

/* 
scanf("%u", &a);
Zastosowano tutaj deskryptor formatu %u służący do wprowadzania i wyprowadzania zmiennych
bez znaku typu unsigned int, typ ten jest typem 32-bitowym o zakresie [0, 2^32 - 1 ]. 
Jeśli wynik operacji arytmetycznej przekracza ten zakres, wynik jest obliczany modulo 2^32 .
*/