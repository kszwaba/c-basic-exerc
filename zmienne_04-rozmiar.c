#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    //bool a = true;
    //size_t b =0;
    //printf("%d %zu\n", a, b);

    printf("%zu\n", sizeof(char));
    printf("%zu\n", sizeof(unsigned char));
    printf("%zu\n", sizeof(short));
    printf("%zu\n", sizeof(unsigned short));
    printf("%zu\n", sizeof(int));
    printf("%zu\n", sizeof(unsigned int));
    printf("%zu\n", sizeof(unsigned int));
    printf("%zu\n", sizeof(long));
    printf("%zu\n", sizeof(unsigned long));
    printf("%zu\n", sizeof(long long));
    printf("%zu\n", sizeof(unsigned long long));
    printf("%zu\n", sizeof(bool));
    printf("%zu\n", sizeof(size_t));

    return 0;
}