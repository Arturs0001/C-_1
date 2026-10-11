#include <iostream>

using namespace std;

double power(double base, int exp) {
    if (exp == 0) return 1;
    if (exp > 0) return base * power(base, exp - 1);
    return 1.0 / power(base, -exp);
}

void printStars(int n) {
    if (n <= 0) return;
    cout << "*";
    printStars(n - 1);
}

int sumRange(int a, int b) {
    if (a > b) return sumRange(b, a);
    if (a == b) return a;
    return a + sumRange(a + 1, b);
}

void findMinSumSequence(int arr[], int size, int index, int &minPos, int &minSum) {
    if (index > size - 10) return;

    int currentSum = 0;
    for (int i = 0; i < 10; ++i) {
        currentSum += arr[index + i];
    }

    if (index == 0 || currentSum < minSum) {
        minSum = currentSum;
        minPos = index;
    }

    findMinSumSequence(arr, size, index + 1, minPos, minSum);
}

int main() {
    int choice;

    do {
        cout << "\n================ МЕНЮ (Рекурсія) ================\n";
        cout << "1 - Завдання 1 (Степінь числа рекурсивно)\n";
        cout << "2 - Завдання 2 (Вивід N зірок у рядок)\n";
        cout << "3 - Завдання 3 (Сума чисел у діапазоні від a до b)\n";
        cout << "4 - Завдання 4 (Позиція 10 чисел з мінімальною сумою)\n";
        cout << "0 - Вихід\n";
        cout << "Оберіть номер завдання: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                cout << "\n--- Завдання 1 ---\n";
                double base;
                int exp;
                cout << "Введіть число (основу): ";
                cin >> base;
                cout << "Введіть степінь: ";
                cin >> exp;
                cout << "Результат: " << power(base, exp) << "\n";
                break;
            }
            case 2: {
                cout << "\n--- Завдання 2 ---\n";
                int n;
                cout << "Введіть кількість зірок N: ";
                cin >> n;
                cout << "Результат: ";
                printStars(n);
                cout << "\n";
                break;
            }
            case 3: {
                cout << "\n--- Завдання 3 ---\n";
                int a, b;
                cout << "Введіть межу a: ";
                cin >> a;
                cout << "Введіть межу b: ";
                cin >> b;
                cout << "Сума чисел у діапазоні від " << a << " до " << b << " = " << sumRange(a, b) << "\n";
                break;
            }
            case 4: {
                cout << "\n--- Завдання 4 ---\n";
                const int size = 100;
                int arr[size];

                unsigned int seed = 42;
                for (int i = 0; i < size; ++i) {
                    seed = (1103515245 * seed + 12345) % 2147483648;
                    arr[i] = (seed % 200) - 100;
                }

                int minPos = 0;
                int minSum = 0;
                findMinSumSequence(arr, size, 0, minPos, minSum);

                cout << "Масив зі 100 випадкових чисел успішно заповнено.\n";
                cout << "Позиція (індекс), з якої починається послідовність із 10 чисел з мінімальною сумою: " << minPos << "\n";
                cout << "Мінімальна сума цієї послідовності: " << minSum << "\n";
                cout << "Сама послідовність: ";
                for (int i = 0; i < 10; ++i) {
                    cout << arr[minPos + i] << " ";
                }
                cout << "\n";
                break;
            }
            case 0:
                cout << "Завершення роботи програми.\n";
                break;
            default:
                cout << "Некоректний вибір. Спробуйте ще раз.\n";
                break;
        }
    } while (choice != 0);

    return 0;
}