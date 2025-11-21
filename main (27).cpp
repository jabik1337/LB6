#include <iostream>
using namespace std;

int main() {
    const int N = 10;          // розмір масиву (можеш змінити)
    int a[N];

    // Введення масиву
    cout << "Введіть " << N << " елементів масиву: ";
    for (int i = 0; i < N; i++) {
        cin >> a[i];
    }

    // 1. Підрахунок суми додатних елементів
    int sum = 0;
    for (int i = 0; i < N; i++) {
        if (a[i] > 0) {
            sum += a[i];
        }
    }

    cout << "Сума додатних елементів: " << sum << endl;

    // 2. Сортування методом обміну (bubble sort)
    for (int i = 0; i < N - 1; i++) {
        for (int j = 0; j < N - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    // Виведення відсортованого масиву
    cout << "Відсортований масив: ";
    for (int i = 0; i < N; i++) {
        cout << a[i] << " ";
    }

    return 0;
}
5678