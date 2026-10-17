
//     TASK 1

//#include <iostream>
//
// using namespace std;
//
// int main( ) {
//     double a, b;
//     cout << "Enter first numbers: ";
//     cin >> a;
//     cout << "Enter second numbers: ";
//     cin >> b;
//
//     double* ptrA = &a;
//     double* ptrB = &b;
//
//     if (*ptrA > *ptrB) {
//         cout << "Biggest number: " << *ptrA << "\n";
//     } else if (*ptrB > *ptrA) {
//         cout << "Biggest number: " << *ptrB << "\n";
//     } else {
//         cout << "Numbers are same.\n";
//     }
//
//     return 0;
// }

// TASK 2

// #include <iostream>
//
// using namespace std;
//
// int main() {
//     double a, b;
//     cout << "Enter the first number(a): ";
//     cin >> a;
//     cout << "Enter the second number(b): ";
//     cin >> b;
//
//     cout << "Before Change: a = " << a << ", b = " << b << "\n";
//
//     double* ptrA = &a;
//     double* ptrB = &b;
//     double temp = *ptrA;
//     *ptrA = *ptrB;
//     *ptrB = temp;
//
//     cout << "After Change: a = " << a << ", b = " << b << "\n";
//
//     return 0;
// }

// TASK 3

// #include <iostream>
//
// using namespace std;
//
// void findSumAndProduct(int* arr, int size, int* sum, long long* product) {
//     *sum = 0;
//     *product = 1;
//     for (int i = 0; i < size; i++) {
//         *sum += *(arr + i);
//         *product *= *(arr + i);
//     }
// }
//
// int main() {
//     const int size = 5;
//     int arr[size] = {2, 3, 4, 5, 1};
//     int sum = 0;
//     long long product = 1;
//
//     cout << "M: ";
//     for (int i = 0; i < size; i++) {
//         cout << *(arr + i) << " ";
//     }
//     cout << "\n";
//
//     findSumAndProduct(arr, size, &sum, &product);
//
//     cout << "Element Sum: " << sum << "\n";
//     cout << "Product Sum: " << product << "\n";
// }

// TASK 4

// #include <iostream>
//
// using namespace std;
//
// void countElements(int* arr, int size, int* neg, int* pos, int* zero) {
//     *neg = 0;
//     *zero = 0;
//     *pos = 0;
//     for (int i = 0; i < size; i++) {
//         if (*(arr + i) < 0) {
//             (*neg)++;
//         } else if (*(arr + i) > 0) {
//             (*pos)++;
//         } else {
//             (*zero)++;
//         }
//     }
// }
//
// int main() {
//     const int size = 8;
//     int arr[size] = {-5, 0, 12, 3, -1, 0, 7, -8};
//     int neg = 0, pos = 0, zero = 0;
//
//     cout << "M: ";
//     for (int i = 0; i < size; i++) {
//         cout << *(arr + i) << " ";
//     }
//     cout << "\n";
//
//     countElements(arr, size, &neg, &pos, &zero);
//
//     cout << "Numbers of D: " << pos << "\n";
//     cout << "Numbers of N: " << neg << "\n";
//     cout << "Numbers of Z: " << zero << "\n";
//
//     return 0;
// }

// TASK 5

#include <iostream>

using namespace std;

int* findSubarray(int* a, int sizeA, int* b, int sizeB) {
    if (sizeB == 0 || sizeB > sizeA) return nullptr;

    for (int i = 0; i <= sizeA - sizeB; i++) {
        bool match = true;
        for (int j = 0; j < sizeB; j++) {
            if (*(a+i+j) != *(b + j)) {
                match = false;
                break;
            }
        }
        if (match) {
            return (a + i);
        }
    }
    return nullptr;
}

int main() {
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int b[] = {4, 5, 6};
    int sizeA = 8;
    int sizeB = 3;

    cout << "M A: ";
    for (int i = 0; i < sizeA; i++) cout << *(a + i) << " ";
    cout << "\n";

    cout << "M B: ";
    for (int i = 0; i < sizeB; i++) cout << *(b + i) << " ";
    cout << "\n";

    int* result = findSubarray(a, sizeA, b, sizeB);

    if (result != nullptr) {
        cout << "Found: " << result << "\n";
        cout << "Index in M A: " <<(result - a) << "\n";
    } else {
        cout << "M B is not related to M A";
    }

    return 0;<

}