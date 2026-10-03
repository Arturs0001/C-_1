#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    int choice;

    do {
        cout << "\n================ МЕНЮ ================\n";
        cout << "1 - Завдання 1 (Сума, середнє, min, max у 2D масиві)\n";
        cout << "2 - Завдання 2 (Суми по рядках і стовпцях з оформленням)\n";
        cout << "3 - Завдання 3 (Заповнення 5х5 на основі 5х10)\n";
        cout << "0 - Вихід\n";
        cout << "Оберіть номер завдання: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                cout << "\n--- Завдання 1 ---\n";
                const int ROWS = 3;
                const int COLS = 4;
                int matrix[ROWS][COLS];

                cout << "Згенерований масив:\n";
                for (int i = 0; i < ROWS; ++i) {
                    for (int j = 0; j < COLS; ++j) {
                        matrix[i][j] = rand() % 50;
                        cout << matrix[i][j] << "\t";
                    }
                    cout << "\n";
                }

                int sum = 0;
                int minVal = matrix[0][0];
                int maxVal = matrix[0][0];

                for (int i = 0; i < ROWS; ++i) {
                    for (int j = 0; j < COLS; ++j) {
                        sum += matrix[i][j];
                        if (matrix[i][j] < minVal) minVal = matrix[i][j];
                        if (matrix[i][j] > maxVal) maxVal = matrix[i][j];
                    }
                }

                double avg = static_cast<double>(sum) / (ROWS * COLS);

                cout << "\nСума всіх елементів: " << sum << "\n";
                cout << "Середнє арифметичне: " << avg << "\n";
                cout << "Мінімальний елемент: " << minVal << "\n";
                cout << "Максимальний елемент: " << maxVal << "\n";
                break;
            }
            case 2: {
                cout << "\n--- Завдання 2 ---\n";
                int matrix[3][4] = {
                    {3, 5, 6, 7},
                    {12, 1, 1, 1},
                    {0, 7, 12, 1}
                };

                int rowSums[3] = {0};
                int colSums[4] = {0};
                int totalSum = 0;

                for (int i = 0; i < 3; ++i) {
                    for (int j = 0; j < 4; ++j) {
                        rowSums[i] += matrix[i][j];
                        colSums[j] += matrix[i][j];
                        totalSum += matrix[i][j];
                    }
                }

                cout << "\n";
                for (int i = 0; i < 3; ++i) {
                    for (int j = 0; j < 4; ++j) {
                        cout << matrix[i][j] << "\t";
                    }
                    cout << "|\t" << rowSums[i] << "\n\n";
                }

                cout << "------------------------------------------\n\n";

                for (int j = 0; j < 4; ++j) {
                    cout << colSums[j] << "\t";
                }
                cout << "|\t" << totalSum << "\n";
                break;
            }
            case 3: {
                cout << "\n--- Завдання 3 ---\n";
                int arr1[5][10];
                int arr2[5][5];

                cout << "Масив 5x10 (згенеровані числа 0..50):\n";
                for (int i = 0; i < 5; ++i) {
                    for (int j = 0; j < 10; ++j) {
                        arr1[i][j] = rand() % 51;
                        cout << arr1[i][j] << "\t";
                    }
                    cout << "\n";
                }

                for (int i = 0; i < 5; ++i) {
                    for (int j = 0; j < 5; ++j) {
                        arr2[i][j] = arr1[i][j * 2] + arr1[i][j * 2 + 1];
                    }
                }

                cout << "\nМасив 5x5 (суми пар сусідніх елементів):\n";
                for (int i = 0; i < 5; ++i) {
                    for (int j = 0; j < 5; ++j) {
                        cout << arr2[i][j] << "\t";
                    }
                    cout << "\n";
                }
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