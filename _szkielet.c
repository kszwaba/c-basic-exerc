#include <assert.h>
#include <fcntl.h>
#include <ctype.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <semaphore.h>
#include <sys/mman.h>
#include <sys/stat.h>
#include <pthread.h>
#include <unistd.h>

//alternatywna deklaracja umożliwiająca wyciągnięcie parametrów wejściowych
// int main(int argc, char * arg[])

/* alternatywna sygntura funkcji main
pozwalająca na przekazywanie danych wejsciowych jako parmaetrów
np ./program parametr1 parametr2
*/
// int main(int argc, char **argv)

// int minmax;

int a;
int b;
int c;

int minmax (a, b, c) 
{
      
    if ( a > b && a > c )
      return a;
  else if ( b > a && b > c )
      return b;
  else if ( c > a && c > b )
      return c;

   
}

int main(void)
{

   printf("Podaj pierwszą liczbę: ");
    scanf("%lf", &a);
    
    printf("Podaj drugą liczbę: ");
    scanf("%lf", &b);
    
    printf("Podaj precyzję: ");
    scanf("%lf", &c);

    cout << minmax(a,b,c);



}