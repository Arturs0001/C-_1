// #include <iostream>
//
// using namespace std;
//
// int main() {
//     const int ROWS = 3;
//     const int COLS = 4;
//     long long arr[ROWS][COLS];
//
//     long long startVal;
//     cout << "Enter start number: ";
//     cin >> startVal;
//
//     long long current = startVal;
//     for (int i = 0; i < ROWS; ++i) {
//         for (int j = 0; j < COLS; ++j) {
//             arr[i][j] = current;
//             current *= 2;
//         }
//     }
//
//     cout << "Array:\n";
//     for (int i = 0; i < ROWS; ++i) {
//         for (int j = 0; j < COLS; ++j) {
//             cout << arr[i][j] << "\t";
//         }
//         cout << "\n";
//     }
//
//     return 0;
// }

// #include <iostream>
//
// using namespace std;
//
// int main() {
//     const int ROWS = 3;
//     const int COLS = 4;
//     int arr[ROWS][COLS];
//
//     int startVal;
//     cout << "Enter start number: ";
//     cin >> startVal;
//
//     int current = startVal;
//     for (int i = 0; i < ROWS; ++i) {
//         for (int j = 0; j < COLS; ++j) {
//             arr[i][j] = current;
//             current += 1;
//         }
//     }
//
//     cout << "Array:\n";
//     for (int i = 0; i < ROWS; ++i) {
//         for (int j = 0; j < COLS; ++j) {
//             cout << arr[i][j] << "\t";
//         }
//         cout << "\n";
//     }
//
//     return 0;
// }

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(static_cast<unsigned int>(time(nullptr)));

    const int ROWS = 4;
    const int COLS = 6;
    int arr[ROWS][COLS];
    int temp[ROWS][COLS];

    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            arr[i][j] = rand() % 10;
        }
    }

    cout << "Original array:\n";
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }

    int shifts;
    int dir;
    cout << "Enter number of shifts: ";
    cin >> shifts;
    cout << "Choose direction (1 - left, 2 - right, 3 - up, 4 - down): ";
    cin >> dir;

    if (shifts < 0) shifts = 0;

    if (dir == 1) {
        int k = shifts % COLS;
        for (int i = 0; i < ROWS; ++i) {
            for (int j = 0; j < COLS; ++j) {
                temp[i][j] = arr[i][(j + k) % COLS];
            }
        }
    } else if (dir == 2) {
        int k = shifts % COLS;
        for (int i = 0; i < ROWS; ++i) {
            for (int j = 0; j < COLS; ++j) {
                temp[i][(j + k) % COLS] = arr[i][j];
            }
        }
    } else if (dir == 3) {
        int k = shifts % ROWS;
        for (int i = 0; i < ROWS; ++i) {
            for (int j = 0; j < COLS; ++j) {
                temp[i][j] = arr[(i + k) % ROWS][j];
            }
        }
    } else if (dir == 4) {
        int k = shifts % ROWS;
        for (int i = 0; i < ROWS; ++i) {
            for (int j = 0; j < COLS; ++j) {
                temp[(i + k) % ROWS][j] = arr[i][j];
            }
        }
    } else {
        cout << "Invalid direction.\n";
        return 0;
    }

    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            arr[i][j] = temp[i][j];
        }
    }

    cout << "Shifted array:\n";
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}