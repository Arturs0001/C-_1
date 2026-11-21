// #include <iostream>
// #include <cstdlib>
// #include <ctime>
//
// using namespace std;
//
// int main() {
//     srand(static_cast<unsigned int>(time(nullptr)));
//
//     const int SIZE = 10;
//     int arr[SIZE];
//
//     for (int i = 0; i < SIZE; ++i) {
//         arr[i] = rand() % 101 - 50;
//         cout << arr[i] << " ";
//     }
//     cout << "\n";
//
//     int minVal = arr[0];
//     int maxVal = arr[0];
//
//     for (int i = 1; i < SIZE; ++i) {
//         if (arr[i] < minVal) minVal = arr[i];
//         if (arr[i] > maxVal) maxVal = arr[i];
//     }
//
//     cout << "Min: " << minVal << "\n";
//     cout << "Max: " << maxVal << "\n";
//
//     return 0;
// }

// #include <iostream>
//
// using namespace std;
//
// int main() {
//     const int MONTHS = 12;
//     double profit[MONTHS];
//
//     for (int i = 0; i < MONTHS; ++i) {
//         cout << "Enter profit for month " << (i + 1) << ": ";
//         cin >> profit[i];
//     }
//
//     int startMonth, endMonth;
//     cout << "Enter range start and end months (1..12): ";
//     cin >> startMonth >> endMonth;
//
//     if (startMonth < 1) startMonth = 1;
//     if (endMonth > MONTHS) endMonth = MONTHS;
//     if (startMonth > endMonth) {
//         int temp = startMonth;
//         startMonth = endMonth;
//         endMonth = temp;
//     }
//
//     int minIdx = startMonth - 1;
//     int maxIdx = startMonth - 1;
//
//     for (int i = startMonth; i < endMonth; ++i) {
//         if (profit[i] < profit[minIdx]) minIdx = i;
//         if (profit[i] > profit[maxIdx]) maxIdx = i;
//     }
//
//     cout << "Max profit in month " << (maxIdx + 1) << ": " << profit[maxIdx] << "\n";
//     cout << "Min profit in month " << (minIdx + 1) << ": " << profit[minIdx] << "\n";
//
//     return 0;
// }

// #include <iostream>
//
// using namespace std;
//
// int main() {
//     const int MAX_N = 1000;
//     int n;
//     cout << "Enter array size N (1.." << MAX_N << "): ";
//     cin >> n;
//
//     if (n <= 0 || n > MAX_N) {
//         cout << "Invalid size.\n";
//         return 1;
//     }
//
//     double arr[MAX_N];
//     for (int i = 0; i < n; ++i) {
//         cout << "Enter element " << i << ": ";
//         cin >> arr[i];
//     }
//
//     double negSum = 0.0;
//     int minIdx = 0, maxIdx = 0;
//     int firstNeg = -1, lastNeg = -1;
//
//     for (int i = 0; i < n; ++i) {
//         if (arr[i] < 0.0) {
//             negSum += arr[i];
//             if (firstNeg == -1) firstNeg = i;
//             lastNeg = i;
//         }
//         if (arr[i] < arr[minIdx]) minIdx = i;
//         if (arr[i] > arr[maxIdx]) maxIdx = i;
//     }
//
//     int startBetweenMinMax = (minIdx < maxIdx ? minIdx : maxIdx) + 1;
//     int endBetweenMinMax = (minIdx > maxIdx ? minIdx : maxIdx);
//     double prodBetweenMinMax = 1.0;
//     bool hasBetweenMinMax = false;
//
//     for (int i = startBetweenMinMax; i < endBetweenMinMax; ++i) {
//         prodBetweenMinMax *= arr[i];
//         hasBetweenMinMax = true;
//     }
//     if (!hasBetweenMinMax) prodBetweenMinMax = 0.0;
//
//     double prodEvenIdx = 1.0;
//     bool hasEvenIdx = false;
//     for (int i = 0; i < n; i += 2) {
//         prodEvenIdx *= arr[i];
//         hasEvenIdx = true;
//     }
//     if (!hasEvenIdx) prodEvenIdx = 0.0;
//
//     double sumBetweenNeg = 0.0;
//     if (firstNeg != -1 && lastNeg != -1 && firstNeg < lastNeg) {
//         for (int i = firstNeg + 1; i < lastNeg; ++i) {
//             sumBetweenNeg += arr[i];
//         }
//     }
//
//     cout << "Sum of negative elements: " << negSum << "\n";
//     cout << "Product between min and max: " << prodBetweenMinMax << "\n";
//     cout << "Product of even-index elements: " << prodEvenIdx << "\n";
//     cout << "Sum between first and last negative: " << sumBetweenNeg << "\n";
//
//     return 0;
// }

// #include <iostream>
//
// using namespace std;
//
// int main() {
//     const int SRC_SIZE = 10;
//     const int HALF_SIZE = 5;
//
//     int src[SRC_SIZE];
//     int part1[HALF_SIZE];
//     int part2[HALF_SIZE];
//
//     cout << "Enter " << SRC_SIZE << " elements:\n";
//     for (int i = 0; i < SRC_SIZE; ++i) {
//         cin >> src[i];
//     }
//
//     for (int i = 0; i < HALF_SIZE; ++i) {
//         part1[i] = src[i];
//         part2[i] = src[i + HALF_SIZE];
//     }
//
//     cout << "First array (5): ";
//     for (int i = 0; i < HALF_SIZE; ++i) {
//         cout << part1[i] << " ";
//     }
//     cout << "\n";
//
//     cout << "Second array (5): ";
//     for (int i = 0; i < HALF_SIZE; ++i) {
//         cout << part2[i] << " ";
//     }
//     cout << "\n";
//
//     return 0;
// }

#include <iostream>

using namespace std;

int main() {
    const int SIZE = 5;
    int arr1[SIZE] = { 10, 15, 0, -23, 40 };
    int arr2[SIZE] = { 6, 0, -100, 25, -4 };
    int res[SIZE];

    for (int i = 0; i < SIZE; ++i) {
        res[i] = arr1[i] + arr2[i];
    }

    cout << "Result: { ";
    for (int i = 0; i < SIZE; ++i) {
        cout << res[i];
        if (i < SIZE - 1) cout << ", ";
    }
    cout << " }\n";

    return 0;
}