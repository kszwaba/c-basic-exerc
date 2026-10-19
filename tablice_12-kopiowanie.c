#include <stdio.h>

// Funkcja do łączenia dwóch tablic jednowymiarowych
void polaczTablice(int tablica1[], int rozmiar1, int tablica2[], int rozmiar2, int wynik[]) {
    int i, j;

    // Kopiowanie elementów z tablicy 1 do wynikowej tablicy
    for (i = 0; i < rozmiar1; i++) {
        wynik[i] = tablica1[i];
    }

    // Kopiowanie elementów z tablicy 2 do wynikowej tablicy
    for (j = 0; j < rozmiar2; j++) {
        wynik[rozmiar1 + j] = tablica2[j];
    }
}

int main() {
    int tablica1[] = {1, 2, 3, 4, 5};
    int rozmiar1 = sizeof(tablica1) / sizeof(tablica1[0]);

    int tablica2[] = {6, 7, 8, 9, 10};
    int rozmiar2 = sizeof(tablica2) / sizeof(tablica2[0]);

    int wynik[rozmiar1 + rozmiar2];
    int i;

    // Wywołanie funkcji do łączenia tablic
    polaczTablice(tablica1, rozmiar1, tablica2, rozmiar2, wynik);

    // Wyświetlanie zawartości połączonej tablicy
    printf("Połaczona tablica: ");
    for (i = 0; i < rozmiar1 + rozmiar2; i++) {
        printf("%d ", wynik[i]);
    }
    printf("\n");

    return 0;
}

