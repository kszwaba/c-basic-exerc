#include <stdio.h>
#include <math.h>

int compare_with_precision(double num1, double num2, double precision) {
    double diff = fabs(num1 - num2);
    if (diff <= precision) {
        return 0; // Liczby są równe
    } else if (num1 < num2) {
        return -1; // Pierwsza liczba jest mniejsza
    } else {
        return 1; // Pierwsza liczba jest większa
    }
}

int main() {
    double liczba1, liczba2, precyzja;
    
    printf("Podaj pierwszą liczbę: ");
    scanf("%lf", &liczba1);
    
    printf("Podaj drugą liczbę: ");
    scanf("%lf", &liczba2);
    
    printf("Podaj precyzję: ");
    scanf("%lf", &precyzja);
    
    int wynik = compare_with_precision(liczba1, liczba2, precyzja);
    
    if (wynik == 0) {
        printf("Liczby są równe z precyzją %lf\n", precyzja);
    } else if (wynik < 0) {
        printf("Pierwsza liczba jest mniejsza od drugiej z precyzją %lf\n", precyzja);
    } else {
        printf("Pierwsza liczba jest większa od drugiej z precyzją %lf\n", precyzja);
    }
    
    return 0;
}
