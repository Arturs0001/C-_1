#include <iostream>

using namespace std;

void printRectangle(int height, int width, char symbol) {
    for (int i = 0; i < height; ++i) {
        for (int j = 0; j < width; ++j) {
            cout << symbol;
        }
        cout << "\n";
    }
}

long long calculateFactorial(int n) {
    long long fact = 1;
    for (int i = 1; i <= n; ++i) {
        fact *= i;
    }
    return fact;
}

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) return false;
    }
    return true;
}

double cubeNumber(double n) {
    return n * n * n;
}

double getMax(double a, double b) {
    return (a > b) ? a : b;
}

bool isPositive(double n) {
    return n > 0;
}

void printMinMaxArray(int arr[], int size) {
    if (size <= 0) return;
    int minVal = arr[0], maxVal = arr[0];
    int minIndex = 0, maxIndex = 0;

    for (int i = 1; i < size; ++i) {
        if (arr[i] < minVal) {
            minVal = arr[i];
            minIndex = i;
        }
        if (arr[i] > maxVal) {
            maxVal = arr[i];
            maxIndex = i;
        }
    }

    cout << "Мінімум: значення = " << minVal << ", індекс = " << minIndex << "\n";
    cout << "Максимум: значення = " << maxVal << ", індекс = " << maxIndex << "\n";
}

void reverseArray(int arr[], int size) {
    for (int i = 0; i < size / 2; ++i) {
        int temp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;
    }
}

int countPrimesInArray(int arr[], int size) {
    int count = 0;
    for (int i = 0; i < size; ++i) {
        if (isPrime(arr[i])) {
            count++;
        }
    }
    return count;
}

int main() {
    int choice;

    do {
        cout << "\n================ МЕНЮ ================\n";
        cout << "1 - Завдання 1 (Прямокутник із символів)\n";
        cout << "2 - Завдання 2 (Факторіал числа)\n";
        cout << "3 - Завдання 3 (Перевірка на просте число)\n";
        cout << "4 - Завдання 4 (Куб числа)\n";
        cout << "5 - Завдання 5 (Найбільше з двох чисел)\n";
        cout << "6 - Завдання 6 (Перевірка на додатність)\n";
        cout << "7 - Завдання 7 (Мінімум і максимум масиву)\n";
        cout << "8 - Завдання 8 (Реверс масиву)\n";
        cout << "9 - Завдання 9 (Кількість простих чисел у масиві)\n";
        cout << "0 - Вихід\n";
        cout << "Оберіть номер завдання: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                cout << "\n--- Завдання 1 ---\n";
                int h, w;
                char s;
                cout << "Введіть висоту (N): ";
                cin >> h;
                cout << "Введіть ширину (K): ";
                cin >> w;
                cout << "Введіть символ (S): ";
                cin >> s;
                printRectangle(h, w, s);
                break;
            }
            case 2: {
                cout << "\n--- Завдання 2 ---\n";
                int n;
                cout << "Введіть число для обчислення факторіала: ";
                cin >> n;
                if (n < 0) {
                    cout << "Факторіал від'ємного числа не визначено.\n";
                } else {
                    cout << "Факторіал " << n << " = " << calculateFactorial(n) << "\n";
                }
                break;
            }
            case 3: {
                cout << "\n--- Завдання 3 ---\n";
                int n;
                cout << "Введіть число: ";
                cin >> n;
                if (isPrime(n)) {
                    cout << "Число є простим.\n";
                } else {
                    cout << "Число не є простим.\n";
                }
                break;
            }
            case 4: {
                cout << "\n--- Завдання 4 ---\n";
                double n;
                cout << "Введіть число: ";
                cin >> n;
                cout << "Куб числа = " << cubeNumber(n) << "\n";
                break;
            }
            case 5: {
                cout << "\n--- Завдання 5 ---\n";
                double a, b;
                cout << "Введіть перше число: ";
                cin >> a;
                cout << "Введіть друге число: ";
                cin >> b;
                cout << "Найбільше число = " << getMax(a, b) << "\n";
                break;
            }
            case 6: {
                cout << "\n--- Завдання 6 ---\n";
                double n;
                cout << "Введіть число: ";
                cin >> n;
                if (isPositive(n)) {
                    cout << "true (число додатне)\n";
                } else {
                    cout << "false (число від'ємне або нуль)\n";
                }
                break;
            }
            case 7: {
                cout << "\n--- Завдання 7 ---\n";
                const int size = 6;
                int arr[size] = {15, 3, 42, 8, 23, 4};
                cout << "Елементи масиву: ";
                for (int i = 0; i < size; ++i) cout << arr[i] << " ";
                cout << "\n";
                printMinMaxArray(arr, size);
                break;
            }
            case 8: {
                cout << "\n--- Завдання 8 ---\n";
                const int size = 6;
                int arr[size] = {1, 2, 3, 4, 5, 6};
                cout << "Масив до реверсу: ";
                for (int i = 0; i < size; ++i) cout << arr[i] << " ";
                cout << "\n";

                reverseArray(arr, size);

                cout << "Масив після реверсу: ";
                for (int i = 0; i < size; ++i) cout << arr[i] << " ";
                cout << "\n";
                break;
            }
            case 9: {
                cout << "\n--- Завдання 9 ---\n";
                const int size = 7;
                int arr[size] = {4, 7, 11, 8, 13, 20, 1};
                cout << "Елементи масиву: ";
                for (int i = 0; i < size; ++i) cout << arr[i] << " ";
                cout << "\n";
                cout << "Кількість простих чисел у масиві: " << countPrimesInArray(arr, size) << "\n";
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