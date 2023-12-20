// lab16task4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>  
#include <cmath> 

int main() {
    int n;
    printf("Enter n (size of a matrix NxN):");
    scanf_s("%d", &n);
    int** array = new int* [n];
    bool isLeftToRight = true;
    for (int i = 0; i < n; i++) {
        array[i] = new int[n];
        printf("Enter row with index %d:\n", i);
        for (int j = 0; j < n; j++) {
            if (isLeftToRight) {
                scanf_s("%d", &array[i][j]);
            }
            else {
                scanf_s("%d", &array[i][n - j - i]);
            }
        }
        isLeftToRight = !isLeftToRight;
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
    return 0;
}
