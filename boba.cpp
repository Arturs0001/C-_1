// TASK 1
// #include <iostream>
// #include <cmath>
//
// using namespace std;
//
// struct Point {
//     double x;
//     double y;
// };
//
// double calculateDistance(Point p1, Point p2) {
//     return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
// }
//
// int main() {
//     Point p1 = {1.0, 2.0};
//     Point p2 = {4.0, 6.0};
//
//     cout << "Point 1: (" << p1.x << ", " << p1.y << ")\n";
//     cout << "Point 2: (" << p2.x << ", " << p2.y << ")\n";
//     cout << "Distance between points: " << calculateDistance(p1, p2) << "\n";
//
//     return 0;
// }


// TASK 2
// #include <iostream>
// #include <cmath>
//
// using namespace std;
//
// struct Fraction {
//     int num;
//     int den;
// };
//
// int gcd(int a, int b) {
//     while (b) {
//         int temp = b;
//         b = a % b;
//         a = temp;
//     }
//     return a < 0 ? -a : a;
// }
//
// Fraction simplify(Fraction f) {
//     if (f.den == 0) return f;
//     int g = gcd(f.num, f.den);
//     f.num /= g;
//     f.den /= g;
//     if (f.den < 0) {
//         f.num = -f.num;
//         f.den = -f.den;
//     }
//     return f;
// }
//
// Fraction add(Fraction f1, Fraction f2) {
//     Fraction res;
//     res.num = f1.num * f2.den + f2.num * f1.den;
//     res.den = f1.den * f2.den;
//     return simplify(res);
// }
//
// Fraction sub(Fraction f1, Fraction f2) {
//     Fraction res;
//     res.num = f1.num * f2.den - f2.num * f1.den;
//     res.den = f1.den * f2.den;
//     return simplify(res);
// }
//
// Fraction mul(Fraction f1, Fraction f2) {
//     Fraction res;
//     res.num = f1.num * f2.num;
//     res.den = f1.den * f2.den;
//     return simplify(res);
// }
//
// Fraction divF(Fraction f1, Fraction f2) {
//     Fraction res;
//     res.num = f1.num * f2.den;
//     res.den = f1.den * f2.num;
//     return simplify(res);
// }
//
// void printFraction(Fraction f) {
//     f = simplify(f);
//     if (f.den == 1) {
//         cout << f.num << "\n";
//     } else if (abs(f.num) > f.den) {
//         int whole = f.num / f.den;
//         int rem = abs(f.num) % f.den;
//         cout << whole << " " << rem << "/" << f.den << "\n";
//     } else {
//         cout << f.num << "/" << f.den << "\n";
//     }
// }
//
// int main() {
//     Fraction f1 = {5, 2};
//     Fraction f2 = {3, 4};
//
//     cout << "Sum: ";
//     printFraction(add(f1, f2));
//
//     cout << "Difference: ";
//     printFraction(sub(f1, f2));
//
//     cout << "Multiplication: ";
//     printFraction(mul(f1, f2));
//
//     cout << "Division: ";
//     printFraction(divF(f1, f2));
//
//     return 0;
// }

// TASK 3
// #include <iostream>
//
// using namespace std;
//
// struct WashingMachine {
//     char brand[50];
//     char color[50];
//     double width;
//     double length;
//     double height;
//     int power;
//     int spinSpeed;
//     int maxTemp;
// };
//
// int main() {
//     WashingMachine wm = {"LG", "White", 60.0, 55.0, 85.0, 2000, 1200, 95};
//
//     cout << "Brand: " << wm.brand << "\n";
//     cout << "Color: " << wm.color << "\n";
//     cout << "Dimensions (WxLxH): " << wm.width << " x " << wm.length << " x " << wm.height << " cm\n";
//     cout << "Power: " << wm.power << " W\n";
//     cout << "Spin speed: " << wm.spinSpeed << " rpm\n";
//     cout << "Max temperature: " << wm.maxTemp << " °C\n";
//
//     return 0;
// }

// TASK 4
// #include <iostream>
//
// using namespace std;
//
// struct Animal {
//     char name[50];
//     char species[50];
//     char nickname[50];
// };
//
// void fillAnimal(Animal &a) {
//     cout << "Enter animal name: ";
//     cin >> a.name;
//     cout << "Enter animal species: ";
//     cin >> a.species;
//     cout << "Enter animal nickname: ";
//     cin >> a.nickname;
// }
//
// void printAnimal(const Animal &a) {
//     cout << "Name: " << a.name << ", Species: " << a.species << ", Nickname: " << a.nickname << "\n";
// }
//
// bool compareStrings(const char* s1, const char* s2) {
//     int i = 0;
//     while (s1[i] != '\0' && s2[i] != '\0') {
//         char c1 = s1[i], c2 = s2[i];
//         if (c1 >= 'A' && c1 <= 'Z') c1 += 32;
//         if (c2 >= 'A' && c2 <= 'Z') c2 += 32;
//         if (c1 != c2) return false;
//         i++;
//     }
//     return s1[i] == '\0' && s2[i] == '\0';
// }
//
// void makeVoice(const Animal &a) {
//     cout << a.nickname << " (" << a.species << ") makes a sound: ";
//     if (compareStrings(a.species, "Dog") || compareStrings(a.species, "dog")) {
//         cout << "Woof-woof!\n";
//     } else if (compareStrings(a.species, "Cat") || compareStrings(a.species, "cat")) {
//         cout << "Meow-meow!\n";
//     } else {
//         cout << "Unknown sound...\n";
//     }
// }
//
// int main() {
//     Animal myAnimal;
//     fillAnimal(myAnimal);
//     printAnimal(myAnimal);
//     makeVoice(myAnimal);
//
//     return 0;
// }

// TASK 5
// #include <iostream>
//
// using namespace std;
//
// union IntConverter {
//     int signedVal;
//     unsigned int unsignedVal;
// };
//
// int main() {
//     IntConverter ic;
//     ic.signedVal = -5;
//
//     cout << "As signed integer: " << ic.signedVal << "\n";
//     cout << "As unsigned integer: " << ic.unsignedVal << "\n";
//
//     return 0;
// }

//TASK 6
#include <iostream>

using namespace std;

struct Grades {
    unsigned int g1 : 1;
    unsigned int g2 : 1;
    unsigned int g3 : 1;
    unsigned int g4 : 1;
    unsigned int g5 : 1;
    unsigned int g6 : 1;
    unsigned int g7 : 1;
    unsigned int g8 : 1;
    unsigned int g9 : 1;
    unsigned int g10 : 1;
};

struct Student {
    char fullName[50];
    Grades grades;
};

void fillStudent(Student &s) {
    cout << "Enter student full name: ";
    cin.ignore();
    cin.getline(s.fullName, 50);
    cout << "Enter 10 grades (1 - passed, 0 - failed) separated by space: ";
    unsigned int val;
    cin >> val; s.grades.g1 = val;
    cin >> val; s.grades.g2 = val;
    cin >> val; s.grades.g3 = val;
    cin >> val; s.grades.g4 = val;
    cin >> val; s.grades.g5 = val;
    cin >> val; s.grades.g6 = val;
    cin >> val; s.grades.g7 = val;
    cin >> val; s.grades.g8 = val;
    cin >> val; s.grades.g9 = val;
    cin >> val; s.grades.g10 = val;
}

void printStudent(const Student &s) {
    cout << "Student: " << s.fullName << " | Grades: "
         << s.grades.g1 << " " << s.grades.g2 << " " << s.grades.g3 << " "
         << s.grades.g4 << " " << s.grades.g5 << " " << s.grades.g6 << " "
         << s.grades.g7 << " " << s.grades.g8 << " " << s.grades.g9 << " "
         << s.grades.g10 << "\n";
}

bool isDebtor(const Student &s) {
    return !(s.grades.g1 && s.grades.g2 && s.grades.g3 && s.grades.g4 &&
             s.grades.g5 && s.grades.g6 && s.grades.g7 && s.grades.g8 &&
             s.grades.g9 && s.grades.g10);
}

int main() {
    Student singleStudent = {"John Doe", {1, 1, 1, 1, 1, 1, 1, 1, 1, 1}};
    printStudent(singleStudent);

    int n;
    cout << "How many students to add to the list? ";
    cin >> n;

    Student* group = new Student[n];

    for (int i = 0; i < n; ++i) {
        fillStudent(group[i]);
    }

    cout << "\nList of all students:\n";
    for (int i = 0; i < n; ++i) {
        printStudent(group[i]);
    }

    cout << "\nList of debtors:\n";
    for (int i = 0; i < n; ++i) {
        if (isDebtor(group[i])) {
            printStudent(group[i]);
        }
    }

    delete[] group;
    return 0;
}