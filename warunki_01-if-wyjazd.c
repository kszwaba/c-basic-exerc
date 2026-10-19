#include <stdio.h>

int main(void)
{
    int miesiac;
    int freetime_Klaudia;
    int freetime_Karol;
        
    printf("Jeśli Klaudia ma wolne wpisz 1 w przeciwnym wypadku wpisz 0:\n");
    scanf("%d",&freetime_Klaudia);      
    if (freetime_Klaudia == 1)
        {
            printf("Super, Klaudia może jechac :)\n");
        }
    else
        {
        printf("Klaudia nie ma czasu, czekamy na inny termin :(\n");
        return 1;
        }
    
    printf("Jeśli Karol ma wolne wpisz 1 w przeciwnym wypadku wpisz 0:\n");
    scanf("%d",&freetime_Karol);  
    
    if (freetime_Karol == 1)
        printf("Super, Karol może jechac :)\n");
    else
    {
        printf("Karol nie ma czasu, czekamy na inny termin :(\n");
        return 1;
    }

    printf("Podaj numer miesiąca, 1 - styczeń, 2 - luty itd:\n");
    scanf("%d",&miesiac);
    
    if ((miesiac == 7 || miesiac == 8) && freetime_Klaudia == 1 && freetime_Karol == 1)
        printf("Wygląda na to że jedziemy :) Krzysiek się dostosuje :P\n");
    else
        printf("Czekamy na wakacje :(\n");


    return 0;
}