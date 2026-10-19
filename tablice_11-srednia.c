#include <stdio.h>

int main(int argc, char * arg[])
{

    int days[5] = {1, 2, 3, 4, 5};

    for (int i = 0; i < 5; i++)
        printf("%d\n", days[i]);
    //    return 0;

    float grades[] = {3.0f, 4.0f, 5.0f};
    float sum = 0.0f;

    for (int i = 0; i < 3; ++i)
            sum += grades[i];              // sum += jest odpowiednikiem sum = sum +i
        printf("result: %.1f\n", sum / 3);

    return 0;
}