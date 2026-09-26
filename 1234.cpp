#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));

    int choice;

    do {
        cout << "\n================ МЕНЮ ================\n";
        cout << "1 - Завдання 1 (Вивід чисел від 0 до N)\n";
        cout << "2 - Завдання 2 (Аналіз діапазону: парні, непарні, кратні 7)\n";
        cout << "3 - Завдання 3 (Сума чисел у діапазоні)\n";
        cout << "4 - Завдання 4 (Сума введених чисел до 0)\n";
        cout << "5 - Завдання 5 (Гра \"Вгадай число\")\n";
        cout << "6 - Завдання 6 (Конвертер валют)\n";
        cout << "0 - Вихід\n";
        cout << "Оберіть номер завдання: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                cout << "\n--- Завдання 1: Числа від 0 до N ---\n";
                int n;
                cout << "Введіть число N: ";
                cin >> n;

                if (n >= 0) {
                    for (int i = 0; i <= n; ++i) {
                        cout << i << " ";
                    }
                } else {
                    for (int i = 0; i >= n; --i) {
                        cout << i << " ";
                    }
                }
                cout << "\n";
                break;
            }
            case 2: {
                cout << "\n--- Завдання 2: Аналіз діапазону ---\n";
                int a, b;
                cout << "Введіть першу межу: ";
                cin >> a;
                cout << "Введіть другу межу: ";
                cin >> b;

                int start = (a < b) ? a : b;
                int end = (a > b) ? a : b;

                cout << "\nУсі числа з діапазону [" << start << "; " << end << "]:\n";
                for (int i = start; i <= end; ++i) {
                    cout << i << " ";
                }

                cout << "\n\nПарні числа:\n";
                for (int i = start; i <= end; ++i) {
                    if (i % 2 == 0) {
                        cout << i << " ";
                    }
                }

                cout << "\n\nНепарні числа:\n";
                for (int i = start; i <= end; ++i) {
                    if (i % 2 != 0) {
                        cout << i << " ";
                    }
                }

                cout << "\n\nЧисла, кратні 7:\n";
                for (int i = start; i <= end; ++i) {
                    if (i % 7 == 0) {
                        cout << i << " ";
                    }
                }
                cout << "\n";
                break;
            }
            case 3: {
                cout << "\n--- Завдання 3: Сума чисел у діапазоні ---\n";
                int a, b;
                cout << "Введіть першу межу: ";
                cin >> a;
                cout << "Введіть другу межу: ";
                cin >> b;

                int start = (a < b) ? a : b;
                int end = (a > b) ? a : b;

                long long sum = 0;
                for (int i = start; i <= end; ++i) {
                    sum += i;
                }

                cout << "Сума чисел від " << start << " до " << end << " дорівнює: " << sum << "\n";
                break;
            }
            case 4: {
                cout << "\n--- Завдання 4: Сума введених чисел ---\n";
                cout << "Вводьте числа по одному (введіть 0 для завершення та підрахунку):\n";

                double number;
                double totalSum = 0;

                while (true) {
                    cin >> number;
                    if (number == 0) {
                        break;
                    }
                    totalSum += number;
                }

                cout << "Загальна сума введених чисел: " << totalSum << "\n";
                break;
            }
            case 5: {
                cout << "\n--- Завдання 5: Гра \"Вгадай число\" ---\n";
                int target = rand() % 500 + 1;
                int guess;
                int attempts = 0;

                cout << "Програма загадала число від 1 до 500.\n";
                cout << "Спробуйте його вгадати! (Введіть 0, щоб здатися та вийти)\n";

                while (true) {
                    cout << "Ваш варіант: ";
                    cin >> guess;

                    if (guess == 0) {
                        cout << "Ви здалися! Загадане число було: " << target << "\n";
                        break;
                    }

                    attempts++;

                    if (guess == target) {
                        cout << "\nВітаємо! Ви вгадали число " << target << "!\n";
                        cout << "Кількість використаних спроб: " << attempts << "\n";
                        break;
                    } else if (guess < target) {
                        cout << "Підказка: Загадане число БІЛЬШЕ.\n";
                    } else {
                        cout << "Підказка: Загадане число МЕНШЕ.\n";
                    }
                }
                break;
            }
            case 6: {
                cout << "\n--- Завдання 6: Конвертер валют ---\n";

                const double USD_RATE = 41.50;
                const double EUR_RATE = 45.00;

                cout << "Виберіть операцію:\n";
                cout << "1 - Гривня (UAH) -> Долар (USD)\n";
                cout << "2 - Гривня (UAH) -> Євро (EUR)\n";
                cout << "3 - Долар (USD) -> Гривня (UAH)\n";
                cout << "4 - Євро (EUR) -> Гривня (UAH)\n";
                cout << "5 - Долар (USD) -> Євро (EUR)\n";
                cout << "6 - Євро (EUR) -> Долар (USD)\n";
                cout << "Ваш вибір: ";
                int subChoice;
                cin >> subChoice;

                double amount;
                cout << "Введіть суму для конвертації: ";
                cin >> amount;

                if (amount < 0) {
                    cout << "Помилка: Сума не може бути від'ємною.\n";
                    break;
                }

                switch (subChoice) {
                    case 1:
                        cout << amount << " UAH = " << amount / USD_RATE << " USD\n";
                        break;
                    case 2:
                        cout << amount << " UAH = " << amount / EUR_RATE << " EUR\n";
                        break;
                    case 3:
                        cout << amount << " USD = " << amount * USD_RATE << " UAH\n";
                        break;
                    case 4:
                        cout << amount << " EUR = " << amount * EUR_RATE << " UAH\n";
                        break;
                    case 5: {
                        double inUah = amount * USD_RATE;
                        cout << amount << " USD = " << inUah / EUR_RATE << " EUR\n";
                        break;
                    }
                    case 6: {
                        double inUah = amount * EUR_RATE;
                        cout << amount << " EUR = " << inUah / USD_RATE << " USD\n";
                        break;
                    }
                    default:
                        cout << "Некоректний вибір валютної пари.\n";
                        break;
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