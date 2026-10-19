#include <stdio.h>

int main(void)
{
    unsigned char age;

    printf("Ile masz lat?: ");
    if (scanf("%u", &age) != 1)
        //return -1;
    printf("Złe dane wejściowe");
    else
    printf("Masz %u lat!\n", age);

    return 0;
}
