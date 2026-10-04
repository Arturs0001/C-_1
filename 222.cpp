#include <iostream>

using namespace std;

int main() {
    int choice;

    do {
        cout << "\n================ МЕНЮ ================\n";
        cout << "1 - Завдання 1 (Два алгоритми сортування: Bubble та Insertion)\n";
        cout << "2 - Завдання 2 (Програма \"Успішність\")\n";
        cout << "3 - Завдання 3 (Швидке сортування / Quick Sort)\n";
        cout << "4 - Завдання 4 (Умовне сортування частин масиву)\n";
        cout << "0 - Вихід\n";
        cout << "Оберіть номер завдання: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                cout << "\n--- Завдання 1: Bubble Sort & Insertion Sort ---\n";
                int arr1[8] = {64, 34, 25, 12, 22, 11, 90, 5};
                int arr2[8] = {64, 34, 25, 12, 22, 11, 90, 5};
                int n = 8;

                cout << "Початковий масив: ";
                for (int i = 0; i < n; ++i) cout << arr1[i] << " ";
                cout << "\n";

                for (int i = 0; i < n - 1; ++i) {
                    for (int j = 0; j < n - i - 1; ++j) {
                        if (arr1[j] > arr1[j + 1]) {
                            int temp = arr1[j];
                            arr1[j] = arr1[j + 1];
                            arr1[j + 1] = temp;
                        }
                    }
                }

                cout << "Після Bubble Sort: ";
                for (int i = 0; i < n; ++i) cout << arr1[i] << " ";
                cout << "\n";

                for (int i = 1; i < n; ++i) {
                    int key = arr2[i];
                    int j = i - 1;
                    while (j >= 0 && arr2[j] > key) {
                        arr2[j + 1] = arr2[j];
                        j = j - 1;
                    }
                    arr2[j + 1] = key;
                }

                cout << "Після Insertion Sort: ";
                for (int i = 0; i < n; ++i) cout << arr2[i] << " ";
                cout << "\n";
                break;
            }
            case 2: {
                cout << "\n--- Завдання 2: Успішність ---\n";
                int grades[10];
                cout << "Введіть 10 оцінок студента:\n";
                for (int i = 0; i < 10; ++i) {
                    cout << "Оцінка " << i + 1 << ": ";
                    cin >> grades[i];
                }

                int subChoice;
                do {
                    cout << "\n--- Меню Успішності ---\n";
                    cout << "1 - Виведення оцінок\n";
                    cout << "2 - Перескладання іспиту\n";
                    cout << "3 - Перевірка стипендії\n";
                    cout << "0 - Повернутися до головного меню\n";
                    cout << "Вибір: ";
                    cin >> subChoice;

                    switch (subChoice) {
                        case 1: {
                            cout << "Оцінки студента: ";
                            for (int i = 0; i < 10; ++i) {
                                cout << "[" << i + 1 << "]: " << grades[i] << "  ";
                            }
                            cout << "\n";
                            break;
                        }
                        case 2: {
                            int index, newGrade;
                            cout << "Введіть номер предмета для перескладання (1-10): ";
                            cin >> index;
                            if (index >= 1 && index <= 10) {
                                cout << "Введіть нову оцінку: ";
                                cin >> newGrade;
                                grades[index - 1] = newGrade;
                                cout << "Оцінку успішно оновлено!\n";
                            } else {
                                cout << "Некоректний номер предмета.\n";
                            }
                            break;
                        }
                        case 3: {
                            double sum = 0;
                            for (int i = 0; i < 10; ++i) sum += grades[i];
                            double avg = sum / 10.0;
                            cout << "Середній бал: " << avg << "\n";
                            if (avg >= 10.7) {
                                cout << "Студент ОТРИМАЄ стипендію!\n";
                            } else {
                                cout << "Студент НЕ отримує стипендію (потрібно від 10.7).\n";
                            }
                            break;
                        }
                        case 0:
                            break;
                        default:
                            cout << "Некоректний вибір.\n";
                            break;
                    }
                } while (subChoice != 0);
                break;
            }
            case 3: {
                cout << "\n--- Завдання 3: Quick Sort ---\n";
                const int n = 10;
                int arr[n] = {42, 15, 88, 3, 27, 91, 56, 12, 74, 30};

                cout << "Початковий масив: ";
                for (int i = 0; i < n; ++i) {
                    cout << arr[i] << " ";
                }
                cout << "\n";

                int stack[n];
                int top = -1;

                stack[++top] = 0;
                stack[++top] = n - 1;

                while (top >= 0) {
                    int high = stack[top--];
                    int low = stack[top--];

                    int pivot = arr[high];
                    int i = (low - 1);

                    for (int j = low; j <= high - 1; ++j) {
                        if (arr[j] < pivot) {
                            i++;
                            int temp = arr[i];
                            arr[i] = arr[j];
                            arr[j] = temp;
                        }
                    }
                    int temp = arr[i + 1];
                    arr[i + 1] = arr[high];
                    arr[high] = temp;

                    int p = i + 1;

                    if (p - 1 > low) {
                        stack[++top] = low;
                        stack[++top] = p - 1;
                    }

                    if (p + 1 < high) {
                        stack[++top] = p + 1;
                        stack[++top] = high;
                    }
                }

                cout << "Відсортований масив (Quick Sort): ";
                for (int i = 0; i < n; ++i) cout << arr[i] << " ";
                cout << "\n";
                break;
            }
            case 4: {
                cout << "\n--- Завдання 4: Умовне сортування частин масиву ---\n";
                const int n = 9;
                int arr[n] = {12, -5, 8, 3, -15, 20, 7, -2, 4};

                cout << "Початковий масив: ";
                for (int i = 0; i < n; ++i) cout << arr[i] << " ";
                cout << "\n";

                double sum = 0;
                for (int i = 0; i < n; ++i) sum += arr[i];
                double avg = sum / n;
                cout << "Середній бал/середнє значення: " << avg << "\n";

                int sortLimit = (avg > 0) ? (2 * n / 3) : (n / 3);
                cout << "Сортуємо перші " << sortLimit << " елементів.\n";

                for (int i = 0; i < sortLimit - 1; ++i) {
                    for (int j = 0; j < sortLimit - i - 1; ++j) {
                        if (arr[j] > arr[j + 1]) {
                            int temp = arr[j];
                            arr[j] = arr[j + 1];
                            arr[j + 1] = temp;
                        }
                    }
                }

                int left = sortLimit;
                int right = n - 1;
                while (left < right) {
                    int temp = arr[left];
                    arr[left] = arr[right];
                    arr[right] = temp;
                    left++;
                    right--;
                }

                cout << "Результуючий масив: ";
                for (int i = 0; i < n; ++i) cout << arr[i] << " ";
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