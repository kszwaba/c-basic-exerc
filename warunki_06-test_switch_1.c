#include <stdio.h>

int main(void)
{
    int option;
    printf("Podaj opcję wyboru:\n");
    scanf("%d", &option);

    switch(option)
    {
        case 1:
            printf("Wybrano 1\n");
            break;
        case 2:
            printf("Wybrano 2\n");
            break;
        case 3:
            printf("Wybrano 3\n");
            break;
        default:
            printf("Wybrano opcję >3");
            break;

    }

    return 0;
}