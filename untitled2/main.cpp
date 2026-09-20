#include <iostream>

using namespace std;

int main() {
    int choice;

    do {
        cout << "\n================ МЕНЮ ================\n";
        cout << "1 - Завдання 1 (Перевірка парності)\n";
        cout << "2 - Завдання 2 (Вивід меншого з двох чисел)\n";
        cout << "3 - Завдання 3 (Додатне, від'ємне чи 0)\n";
        cout << "4 - Завдання 4 (Рівність та порядок зростання)\n";
        cout << "5 - Завдання 5 (Допуск до іспиту)\n";
        cout << "6 - Завдання 6 (Множення/ділення за парністю)\n";
        cout << "7 - Завдання 7 (Калькулятор)\n";
        cout << "8 - Завдання 8 (Зведення в степінь 0-7)\n";
        cout << "9 - Додаткове завдання (Зміна кольору консолі)\n";
        cout << "0 - Вихід\n";
        cout << "Оберіть номер завдання: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                cout << "\n--- Завдання 1: Перевірка на парність ---\n";
                int number;
                cout << "Введіть число: ";
                cin >> number;

                if (number % 2 == 0) {
                    cout << "Число " << number << " є парним.\n";
                } else {
                    cout << "Число " << number << " є непарним.\n";
                }
                break;
            }
            case 2: {
                cout << "\n--- Завдання 2: Пошук меншого числа ---\n";
                double a, b;
                cout << "Введіть перше число: ";
                cin >> a;
                cout << "Введіть друге число: ";
                cin >> b;

                if (a < b) {
                    cout << "Менше число: " << a << "\n";
                } else if (b < a) {
                    cout << "Менше число: " << b << "\n";
                } else {
                    cout << "Числа рівні (" << a << ").\n";
                }
                break;
            }
            case 3: {
                cout << "\n--- Завдання 3: Визначення знака числа ---\n";
                double number;
                cout << "Введіть число: ";
                cin >> number;

                if (number > 0) {
                    cout << "Число додатне.\n";
                } else if (number < 0) {
                    cout << "Число від'ємне.\n";
                } else {
                    cout << "Число дорівнює нулю.\n";
                }
                break;
            }
            case 4: {
                cout << "\n--- Завдання 4: Порівняння та сортування двох чисел ---\n";
                double a, b;
                cout << "Введіть перше число: ";
                cin >> a;
                cout << "Введіть друге число: ";
                cin >> b;

                if (a == b) {
                    cout << "Ці числа рівні.\n";
                } else {
                    cout << "Числа в порядку зростання: ";
                    if (a < b) {
                        cout << a << ", " << b << "\n";
                    } else {
                        cout << b << ", " << a << "\n";
                    }
                }
                break;
            }
            case 5: {
                cout << "\n--- Завдання 5: Допуск студента до іспиту ---\n";
                double grades[5];
                double sum = 0;

                cout << "Введіть 5 оцінок студента:\n";
                for (int i = 0; i < 5; ++i) {
                    cout << "Оцінка " << i + 1 << ": ";
                    cin >> grades[i];
                    sum += grades[i];
                }

                double average = sum / 5.0;
                cout << "Середній бал: " << average << "\n";

                if (average >= 4.0) {
                    cout << "Студента ДОПУЩЕНО до іспиту.\n";
                } else {
                    cout << "Студента НЕ ДОПУЩЕНО до іспиту.\n";
                }
                break;
            }
            case 6: {
                cout << "\n--- Завдання 6: Операція залежно від парності ---\n";
                int number;
                cout << "Введіть ціле число: ";
                cin >> number;

                if (number % 2 == 0) {
                    double result = number * 3;
                    cout << "Число парне. Результат (помножено на 3): " << result << "\n";
                } else {
                    double result = number / 2.0;
                    cout << "Число непарне. Результат (поділено на 2): " << result << "\n";
                }
                break;
            }
            case 7: {
                cout << "\n--- Завдання 7: Калькулятор ---\n";
                double a, b;
                char op;

                cout << "Введіть перше число: ";
                cin >> a;
                cout << "Введіть операцію (+, -, *, /): ";
                cin >> op;
                cout << "Введіть друге число: ";
                cin >> b;

                switch (op) {
                    case '+':
                        cout << "Результат: " << a + b << "\n";
                        break;
                    case '-':
                        cout << "Результат: " << a - b << "\n";
                        break;
                    case '*':
                        cout << "Результат: " << a * b << "\n";
                        break;
                    case '/':
                        if (b != 0) {
                            cout << "Результат: " << a / b << "\n";
                        } else {
                            cout << "Помилка: Ділення на нуль неможливе!\n";
                        }
                        break;
                    default:
                        cout << "Помилка: Невідома арифметична операція.\n";
                        break;
                }
                break;
            }
            case 8: {
                cout << "\n--- Завдання 8: Зведення числа до степеня (0-7) ---\n";
                double number;
                int power;

                cout << "Введіть число: ";
                cin >> number;
                cout << "Введіть степінь (від 0 до 7 включно): ";
                cin >> power;

                if (power >= 0 && power <= 7) {
                    double result = 1.0;
                    for (int i = 0; i < power; ++i) {
                        result *= number;
                    }
                    cout << number << "^" << power << " = " << result << "\n";
                } else {
                    cout << "Помилка: Степінь має бути в межах від 0 до 7.\n";
                }
                break;
            }
            case 9: {
                cout << "\n--- Додаткове завдання: Зміна кольору консолі ---\n";
                cout << "Виберіть колір тексту:\n";
                cout << "30 - Чорний, 31 - Червоний, 32 - Зелений, 33 - Жовтий\n";
                cout << "34 - Синій, 35 - Фіолетовий, 36 - Блакитний, 37 - Білий\n";
                cout << "Введіть код кольору тексту: ";
                int textCode;
                cin >> textCode;

                cout << "\nВиберіть колір фону:\n";
                cout << "40 - Чорний, 41 - Червоний, 42 - Зелений, 43 - Жовтий\n";
                cout << "44 - Синій, 45 - Фіолетовий, 46 - Блакитний, 47 - Білий\n";
                cout << "Введіть код кольору фону: ";
                int bgCode;
                cin >> bgCode;

                // Застосування кольорів через ANSI escape-коди
                cout << "\033[" << textCode << ";" << bgCode << "m";
                cout << "\nКолір консолі змінено!\n";
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