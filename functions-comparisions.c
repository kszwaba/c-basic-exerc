#include <stdio.h>
#include <stdint.h>

int MAX(int, int); // function prototype for later use

int main(){

    int a, b, c, m, n, o;

    printf("enter number A:\n");
    scanf("%d", &a);
    printf("enter number B:\n");
    scanf("%d", &b);
    printf("enter number C:\n");
    scanf("%d", &c);

    m = MAX(a, b);              // max of A and B
    printf("m -> max of A and B: %d\n", m);
    n = MAX(b, c);              // max of B and C
    printf("n -> max of B and C: %d\n", n);
    o = MAX(m, n);              // max of m and n -> max of A, B, C
    printf("o -> max of A, B, C: %d\n", o);

    printf("Max of A, B, C is: %d\n", o);

    return 0;
}

int MAX(int liczba_1, int liczba_2){
    if(liczba_1 > liczba_2)
        return liczba_1;
    else
        return liczba_2;
}

/*
terminal output:

$ gcc exerc-01-functions.c -o program.bin && ./program.bin 
enter number A:
3
enter number B:
5
enter number C:
4
m -> max of A and B:5
n -> max of B and C:5
o -> max of A, B, C:5
Max of A, B,C is: 5
*/