// #include <iostream>
//
// using namespace std;
//
// int compareStr(const char* a, const char* b) {
//     int i = 0;
//     while (a[i] != '\0' && b[i] != '\0') {
//         if (a[i] < b[i]) return -1;
//         if (a[i] > b[i]) return 1;
//         i++;
//     }
//     if (a[i] == '\0' && b[i] == '\0') return 0;
//     return (a[i] == '\0') ? -1 : 1;
// }
//
// void copyStr(char* dest, const char* src, int maxLen) {
//     int i = 0;
//     while (src[i] != '\0' && i < maxLen - 1) {
//         dest[i] = src[i];
//         i++;
//     }
//     dest[i] = '\0';
// }
//
// int main() {
//     const int SIZE = 5;
//     char mobile[SIZE][30] = {
//         "+380671112233",
//         "+380509998877",
//         "+380634445566",
//         "+380932223344",
//         "+380687776655"
//     };
//     char home[SIZE][30] = {
//         "245-10-11",
//         "231-88-90",
//         "278-45-12",
//         "212-30-40",
//         "256-91-02"
//     };
//
//     int choice = -1;
//     while (choice != 4) {
//         cout << "\n1. Sort by mobile numbers\n";
//         cout << "2. Sort by home numbers\n";
//         cout << "3. Print users list\n";
//         cout << "4. Exit\n";
//         cout << "Choice: ";
//         cin >> choice;
//
//         if (choice == 1) {
//             for (int i = 0; i < SIZE - 1; ++i) {
//                 for (int j = 0; j < SIZE - 1 - i; ++j) {
//                     if (compareStr(mobile[j], mobile[j + 1]) > 0) {
//                         char temp[30];
//                         copyStr(temp, mobile[j], 30);
//                         copyStr(mobile[j], mobile[j + 1], 30);
//                         copyStr(mobile[j + 1], temp, 30);
//
//                         copyStr(temp, home[j], 30);
//                         copyStr(home[j], home[j + 1], 30);
//                         copyStr(home[j + 1], temp, 30);
//                     }
//                 }
//             }
//             cout << "Sorted by mobile numbers.\n";
//         } else if (choice == 2) {
//             for (int i = 0; i < SIZE - 1; ++i) {
//                 for (int j = 0; j < SIZE - 1 - i; ++j) {
//                     if (compareStr(home[j], home[j + 1]) > 0) {
//                         char temp[30];
//                         copyStr(temp, mobile[j], 30);
//                         copyStr(mobile[j], mobile[j + 1], 30);
//                         copyStr(mobile[j + 1], temp, 30);
//
//                         copyStr(temp, home[j], 30);
//                         copyStr(home[j], home[j + 1], 30);
//                         copyStr(home[j + 1], temp, 30);
//                     }
//                 }
//             }
//             cout << "Sorted by home numbers.\n";
//         } else if (choice == 3) {
//             cout << "\nUsers:\n";
//             for (int i = 0; i < SIZE; ++i) {
//                 cout << (i + 1) << ". Mobile: " << mobile[i] << " | Home: " << home[i] << "\n";
//             }
//         } else if (choice != 4) {
//             cout << "Invalid choice.\n";
//         }
//     }
//
//     return 0;
// }

// #include <iostream>
//
// using namespace std;
//
// int main() {
//     const int SIZE = 8;
//     int arr[SIZE] = { 34, 7, 23, 32, 5, 62, 12, 9 };
//
//     for (int i = 0; i < SIZE - 1; ++i) {
//         int swaps = 0;
//         for (int j = 0; j < SIZE - 1 - i; ++j) {
//             if (arr[j] > arr[j + 1]) {
//                 int temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//                 swaps++;
//             }
//         }
//         if (swaps == 0) {
//             break;
//         }
//     }
//
//     cout << "Sorted array: ";
//     for (int i = 0; i < SIZE; ++i) {
//         cout << arr[i] << " ";
//     }
//     cout << "\n";
//
//     return 0;
// }

#include <iostream>

using namespace std;

void flipTop(int* stack, int k) {
    int left = 0;
    int right = k;
    while (left < right) {
        int temp = stack[left];
        stack[left] = stack[right];
        stack[right] = temp;
        left++;
        right--;
    }
}

int main() {
    const int SIZE = 6;
    int pancakes[SIZE] = { 3, 8, 2, 10, 5, 1 };
    int flips = 0;

    for (int currSize = SIZE; currSize > 1; --currSize) {
        int maxIdx = 0;
        for (int i = 1; i < currSize; ++i) {
            if (pancakes[i] > pancakes[maxIdx]) {
                maxIdx = i;
            }
        }

        if (maxIdx != currSize - 1) {
            if (maxIdx != 0) {
                flipTop(pancakes, maxIdx);
                flips++;
            }
            flipTop(pancakes, currSize - 1);
            flips++;
        }
    }

    cout << "Sorted stack (top to bottom): ";
    for (int i = 0; i < SIZE; ++i) {
        cout << pancakes[i] << " ";
    }
    cout << "\nTotal flips: " << flips << "\n";

    return 0;
}