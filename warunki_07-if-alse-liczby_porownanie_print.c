/*  program wykonuje operacje dodawania dwóch liczb jeśli nie będa sobie równe
    w przeciwnym wypadku dzieli pierszą przez drugą */
#include <stdio.h>

int main()
{
int x, y, z;
        printf("Podaj pierwszą liczbę:\n");
        scanf("%d",&x);
        printf("Podaj drugą liczbę:\n");
        scanf("%d",&y);
        if (x != y)
        {
            z = x + y;
            printf("suma x + y: \n%d", z);
        }
        else
        
            if (y == 0)
            {
                printf("y musi być <> 0 !");        
                return 1;
            }
            else
            {
                z = x / y;
                printf("iloraz x/y:%d", z);
            }
            
                
        return 0;
}