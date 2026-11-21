// #include <iostream>
//
// using namespace std;
//
// int main() {
//     int a;
//     cout << "Enter a: ";
//     cin >> a;
//
//     long long sum = 0;
//     for (int i = a; i <= 500; ++i) {
//         sum += i;
//     }
//
//     cout << "Sum: " << sum << "\n";
//
//     return 0;
// }

// #include <iostream>
//
// using namespace std;
//
// int main() {
//     int x, y;
//     cout << "Enter x and y: ";
//     cin >> x >> y;
//
//     double result = 1.0;
//     if (y > 0) {
//         for (int i = 0; i < y; ++i) {
//             result *= x;
//         }
//     } else if (y < 0) {
//         for (int i = 0; i < -y; ++i) {
//             result *= x;
//         }
//         result = 1.0 / result;
//     }
//
//     cout << "Result: " << result << "\n";
//
//     return 0;
// }

// #include <iostream>
//
// using namespace std;
//
// int main() {
//     long long sum = 0;
//     for (int i = 1; i <= 1000; ++i) {
//         sum += i;
//     }
//
//     double average = static_cast<double>(sum) / 1000.0;
//     cout << "Average: " << average << "\n";
//
//     return 0;
// }

// #include <iostream>
//
// using namespace std;
//
// int main() {
//     int a;
//     cout << "Enter a (1..20): ";
//     cin >> a;
//
//     if (a < 1 || a > 20) {
//         cout << "Invalid input.\n";
//         return 0;
//     }
//
//     long long product = 1;
//     for (int i = a; i <= 20; ++i) {
//         product *= i;
//     }
//
//     cout << "Product: " << product << "\n";
//
//     return 0;
// }

// #include <iostream>
//
// using namespace std;
//
// int main() {
//     int k;
//     cout << "Enter k: ";
//     cin >> k;
//
//     for (int i = 1; i <= 10; ++i) {
//         cout << k << " * " << i << " = " << (k * i) << "\n";
//     }
//
//     return 0;
// }

// #include <iostream>
//
// using namespace std;
//
// int main() {
//     long long a;
//     cout << "Enter A: ";
//     cin >> a;
//
//     cout << "Values of B:\n";
//     for (long long b = 1; b * b <= (a < 0 ? -a : a); ++b) {
//         long long sq = b * b;
//         long long cube = sq * b;
//         if (a % sq == 0 && a % cube != 0) {
//             cout << b << "\n";
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
//     long long n;
//     cout << "Enter number: ";
//     cin >> n;
//
//     long long absN = n < 0 ? -n : n;
//     cout << "Divisors:\n";
//     for (long long i = 1; i <= absN; ++i) {
//         if (n % i == 0) {
//             cout << i << "\n";
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
//     long long n1, n2;
//     cout << "Enter two integers: ";
//     cin >> n1 >> n2;
//
//     long long abs1 = n1 < 0 ? -n1 : n1;
//     long long abs2 = n2 < 0 ? -n2 : n2;
//     long long limit = abs1 < abs2 ? abs1 : abs2;
//
//     cout << "Common divisors:\n";
//     for (long long i = 1; i <= limit; ++i) {
//         if (n1 % i == 0 && n2 % i == 0) {
//             cout << i << "\n";
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
//     char ch;
//     int shape;
//
//     cout << "Enter symbol: ";
//     cin >> ch;
//     cout << "Choose shape (1 - Square, 2 - Rectangle, 3 - Triangle): ";
//     cin >> shape;
//
//     if (shape == 1) {
//         int size;
//         cout << "Enter side length: ";
//         cin >> size;
//         for (int i = 0; i < size; ++i) {
//             for (int j = 0; j < size; ++j) {
//                 cout << ch;
//             }
//             cout << "\n";
//         }
//     } else if (shape == 2) {
//         int width, height;
//         cout << "Enter width and height: ";
//         cin >> width >> height;
//         for (int i = 0; i < height; ++i) {
//             for (int j = 0; j < width; ++j) {
//                 cout << ch;
//             }
//             cout << "\n";
//         }
//     } else if (shape == 3) {
//         int height;
//         cout << "Enter height: ";
//         cin >> height;
//         for (int i = 1; i <= height; ++i) {
//             for (int j = 0; j < i; ++j) {
//                 cout << ch;
//             }
//             cout << "\n";
//         }
//     } else {
//         cout << "Invalid shape.\n";
//     }
//
//     return 0;
// }