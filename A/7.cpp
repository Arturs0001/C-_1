// #include <iostream>
//
// using namespace std;
//
// double power(double base, int exp) {
//     double res = 1.0;
//     if (exp > 0) {
//         for (int i = 0; i < exp; ++i) {
//             res *= base;
//         }
//     } else if (exp < 0) {
//         for (int i = 0; i < -exp; ++i) {
//             res *= base;
//         }
//         res = 1.0 / res;
//     }
//     return res;
// }
//
// int main() {
//     double base;
//     int exp;
//     cout << "Enter base and exponent: ";
//     cin >> base >> exp;
//     cout << "Result: " << power(base, exp) << "\n";
//     return 0;
// }

// #include <iostream>
//
// using namespace std;
//
// long long rangeSum(int a, int b) {
//     if (a > b) {
//         int tmp = a;
//         a = b;
//         b = tmp;
//     }
//     long long sum = 0;
//     for (int i = a; i <= b; ++i) {
//         sum += i;
//     }
//     return sum;
// }
//
// int main() {
//     int a, b;
//     cout << "Enter two integers: ";
//     cin >> a >> b;
//     cout << "Range sum: " << rangeSum(a, b) << "\n";
//     return 0;
// }

// #include <iostream>
//
// using namespace std;
//
// bool isPerfect(long long n) {
//     if (n <= 1) return false;
//     long long sum = 1;
//     for (long long d = 2; d * d <= n; ++d) {
//         if (n % d == 0) {
//             sum += d;
//             long long pairD = n / d;
//             if (pairD != d && pairD != n) {
//                 sum += pairD;
//             }
//         }
//     }
//     return sum == n;
// }
//
// void printPerfectInRange(long long startVal, long long endVal) {
//     if (startVal > endVal) {
//         long long tmp = startVal;
//         startVal = endVal;
//         endVal = tmp;
//     }
//     cout << "Perfect numbers:\n";
//     for (long long i = startVal; i <= endVal; ++i) {
//         if (isPerfect(i)) {
//             cout << i << "\n";
//         }
//     }
// }
//
// int main() {
//     long long startVal, endVal;
//     cout << "Enter interval start and end: ";
//     cin >> startVal >> endVal;
//     printPerfectInRange(startVal, endVal);
//     return 0;
// }

// #include <iostream>
//
// using namespace std;
//
// void printCard(int rank, int suit) {
//     const char* ranks[13] = {
//         "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K", "A"
//     };
//     const char* suits[4] = {
//         "Spades", "Hearts", "Diamonds", "Clubs"
//     };
//
//     if (rank < 0 || rank >= 13 || suit < 0 || suit >= 4) {
//         cout << "Invalid card.\n";
//         return;
//     }
//
//     cout << ranks[rank] << " of " << suits[suit] << "\n";
// }
//
// int main() {
//     int rank, suit;
//     cout << "Enter rank (0..12) and suit (0..3): ";
//     cin >> rank >> suit;
//     printCard(rank, suit);
//     return 0;
// }

// #include <iostream>
//
// using namespace std;
//
// bool isLuckySixDigit(int num) {
//     if (num < 0) num = -num;
//     if (num < 100000 || num > 999999) {
//         return false;
//     }
//     int d1 = num / 100000;
//     int d2 = (num / 10000) % 10;
//     int d3 = (num / 1000) % 10;
//     int d4 = (num / 100) % 10;
//     int d5 = (num / 10) % 10;
//     int d6 = num % 10;
//
//     return (d1 + d2 + d3) == (d4 + d5 + d6);
// }
//
// int main() {
//     int num;
//     cout << "Enter a six-digit number: ";
//     cin >> num;
//     if (isLuckySixDigit(num)) {
//         cout << "Lucky number.\n";
//     } else {
//         cout << "Not a lucky number.\n";
//     }
//     return 0;
// }

// #include <iostream>
//
// using namespace std;
//
// int linearSearch(const int* arr, int size, int key) {
//     for (int i = 0; i < size; ++i) {
//         if (arr[i] == key) {
//             return i;
//         }
//     }
//     return -1;
// }
//
// int main() {
//     const int SIZE = 7;
//     int arr[SIZE] = { 15, 8, 42, 4, 23, 16, 9 };
//     int key;
//     cout << "Enter key to search: ";
//     cin >> key;
//
//     int idx = linearSearch(arr, SIZE, key);
//     if (idx != -1) {
//         cout << "Found at index: " << idx << "\n";
//     } else {
//         cout << "Not found.\n";
//     }
//     return 0;
// }

// #include <iostream>
//
// using namespace std;
//
// int binarySearch(const int* arr, int size, int key) {
//     int left = 0;
//     int right = size - 1;
//     while (left <= right) {
//         int mid = left + (right - left) / 2;
//         if (arr[mid] == key) {
//             return mid;
//         }
//         if (arr[mid] < key) {
//             left = mid + 1;
//         } else {
//             right = mid - 1;
//         }
//     }
//     return -1;
// }
//
// int main() {
//     const int SIZE = 8;
//     int arr[SIZE] = { 2, 5, 8, 12, 16, 23, 38, 56 };
//     int key;
//     cout << "Enter key to binary search: ";
//     cin >> key;
//
//     int idx = binarySearch(arr, SIZE, key);
//     if (idx != -1) {
//         cout << "Found at index: " << idx << "\n";
//     } else {
//         cout << "Not found.\n";
//     }
//     return 0;
// }

// #include <iostream>
//
// using namespace std;
//
// long long binaryToDecimal(long long binaryNum) {
//     long long decimal = 0;
//     long long base = 1;
//     if (binaryNum < 0) binaryNum = -binaryNum;
//
//     while (binaryNum > 0) {
//         int lastDigit = static_cast<int>(binaryNum % 10);
//         decimal += lastDigit * base;
//         base *= 2;
//         binaryNum /= 10;
//     }
//     return decimal;
// }
//
// int main() {
//     long long binVal;
//     cout << "Enter binary number: ";
//     cin >> binVal;
//     cout << "Decimal: " << binaryToDecimal(binVal) << "\n";
//     return 0;
// }

#include <iostream>

using namespace std;

double arrayAverage(const double* arr, int size) {
    if (size <= 0) return 0.0;
    double sum = 0.0;
    for (int i = 0; i < size; ++i) {
        sum += arr[i];
    }
    return sum / size;
}

int main() {
    const int SIZE = 5;
    double arr[SIZE] = { 10.0, 20.0, 30.0, 40.0, 50.0 };
    cout << "Average: " << arrayAverage(arr, SIZE) << "\n";
    return 0;
}