#include <iostream>

using namespace std;

int main() {
    int choice;

    do {
        cout << "\n================ МЕНЮ ================\n";
        cout << "1 - Завдання 1 (Прибуток фірми за рік)\n";
        cout << "2 - Завдання 2 (Масив у зворотному порядку)\n";
        cout << "3 - Завдання 3 (Периметр п'ятикутника)\n";
        cout << "4 - Завдання 4 (Стискання масиву)\n";
        cout << "5 - Завдання 5 (Об'єднання двох масивів з сортуванням)\n";
        cout << "0 - Вихід\n";
        cout << "Оберіть номер завдання: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                cout << "\n--- Завдання 1: Прибуток фірми ---\n";
                double profit[12];
                double total = 0;

                for (int i = 0; i < 12; ++i) {
                    cout << "Введіть прибуток за " << i + 1 << "-й місяць: ";
                    cin >> profit[i];
                    total += profit[i];
                }

                int minMonth = 0;
                int maxMonth = 0;

                for (int i = 1; i < 12; ++i) {
                    if (profit[i] < profit[minMonth]) {
                        minMonth = i;
                    }
                    if (profit[i] > profit[maxMonth]) {
                        maxMonth = i;
                    }
                }

                cout << "\nЗагальний прибуток за рік: " << total << "\n";
                cout << "Середній прибуток на місяць: " << total / 12.0 << "\n";
                cout << "Місяць з максимальним прибутком: " << maxMonth + 1 << " (" << profit[maxMonth] << ")\n";
                cout << "Місяць з мінімальним прибутком: " << minMonth + 1 << " (" << profit[minMonth] << ")\n";
                break;
            }
            case 2: {
                cout << "\n--- Завдання 2: Зворотний порядок ---\n";
                int arr[10] = {15, 42, 8, 99, 23, 4, 16, 72, 31, 50};

                cout << "Початковий масив: ";
                for (int i = 0; i < 10; ++i) {
                    cout << arr[i] << " ";
                }

                cout << "\nМасив у зворотному порядку: ";
                for (int i = 9; i >= 0; --i) {
                    cout << arr[i] << " ";
                }
                cout << "\n";
                break;
            }
            case 3: {
                cout << "\n--- Завдання 3: Периметр п'ятикутника ---\n";
                double sides[5];
                double perimeter = 0;

                for (int i = 0; i < 5; ++i) {
                    cout << "Введіть довжину " << i + 1 << "-ї сторони: ";
                    cin >> sides[i];
                    perimeter += sides[i];
                }

                cout << "Периметр п'ятикутника: " << perimeter << "\n";
                break;
            }
            case 4: {
                cout << "\n--- Завдання 4: Стискання масиву ---\n";
                int arr[9] = {0, -11, 0, 12, 54, 0, 0, -40, 11};
                int result[9];

                cout << "Масив до стискання: ";
                for (int i = 0; i < 9; ++i) {
                    cout << arr[i] << " ";
                }

                int index = 0;
                for (int i = 0; i < 9; ++i) {
                    if (arr[i] != 0) {
                        result[index] = arr[i];
                        index++;
                    }
                }

                while (index < 9) {
                    result[index] = -1;
                    index++;
                }

                cout << "\nМасив після стискання: ";
                for (int i = 0; i < 9; ++i) {
                    cout << result[i] << " ";
                }
                cout << "\n";
                break;
            }
            case 5: {
                cout << "\n--- Завдання 5: Об'єднання масивів ---\n";
                int arr1[5] = {10, 0, 52, -10, -44};
                int arr2[5] = {54, 0, -100, 12, 4};
                int result[10];

                cout << "Перший масив: ";
                for (int i = 0; i < 5; ++i) {
                    cout << arr1[i] << " ";
                }

                cout << "\nДругий масив: ";
                for (int i = 0; i < 5; ++i) {
                    cout << arr2[i] << " ";
                }

                int index = 0;

                for (int i = 0; i < 5; ++i) {
                    if (arr1[i] > 0) result[index++] = arr1[i];
                }
                for (int i = 0; i < 5; ++i) {
                    if (arr2[i] > 0) result[index++] = arr2[i];
                }

                for (int i = 0; i < 5; ++i) {
                    if (arr1[i] == 0) result[index++] = arr1[i];
                }
                for (int i = 0; i < 5; ++i) {
                    if (arr2[i] == 0) result[index++] = arr2[i];
                }

                for (int i = 0; i < 5; ++i) {
                    if (arr1[i] < 0) result[index++] = arr1[i];
                }
                for (int i = 0; i < 5; ++i) {
                    if (arr2[i] < 0) result[index++] = arr2[i];
                }

                cout << "\nРезультат: ";
                for (int i = 0; i < 10; ++i) {
                    cout << result[i] << " ";
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