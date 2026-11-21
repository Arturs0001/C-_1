// #include <iostream>
//
// using namespace std;
//
// class Book {
// private:
//     char author[100];
//     char title[120];
//     char publisher[100];
//     int year;
//     int pages;
//
//     static void copyStr(char* dest, const char* src, int maxLen) {
//         int i = 0;
//         while (src[i] != '\0' && i < maxLen - 1) {
//             dest[i] = src[i];
//             i++;
//         }
//         dest[i] = '\0';
//     }
//
//     static bool equalStr(const char* a, const char* b) {
//         int i = 0;
//         while (a[i] != '\0' && b[i] != '\0') {
//             if (a[i] != b[i]) {
//                 return false;
//             }
//             i++;
//         }
//         return a[i] == '\0' && b[i] == '\0';
//     }
//
// public:
//     explicit Book(const char* a = "", const char* t = "", const char* p = "", int y = 0, int pg = 0)
//         : year(y), pages(pg) {
//         copyStr(author, a, 100);
//         copyStr(title, t, 120);
//         copyStr(publisher, p, 100);
//     }
//
//     void print() const {
//         cout << "Author: " << author
//              << " | Title: " << title
//              << " | Publisher: " << publisher
//              << " | Year: " << year
//              << " | Pages: " << pages << "\n";
//     }
//
//     const char* getAuthor() const { return author; }
//     const char* getTitle() const { return title; }
//     const char* getPublisher() const { return publisher; }
//     int getYear() const { return year; }
//     int getPages() const { return pages; }
//
//     bool isByAuthor(const char* targetAuthor) const {
//         return equalStr(author, targetAuthor);
//     }
//
//     bool isByPublisher(const char* targetPublisher) const {
//         return equalStr(publisher, targetPublisher);
//     }
//
//     bool isPublishedAfter(int targetYear) const {
//         return year > targetYear;
//     }
// };
//
// int main() {
//     const int SIZE = 4;
//     Book books[SIZE] = {
//         Book("Robert Martin", "Clean Code", "Prentice Hall", 2008, 464),
//         Book("Scott Meyers", "Effective C++", "Addison-Wesley", 2005, 320),
//         Book("Robert Martin", "The Clean Coder", "Prentice Hall", 2011, 256),
//         Book("Bjarne Stroustrup", "The C++ Programming Language", "Addison-Wesley", 2013, 1368)
//     };
//
//     char targetAuthor[100];
//     cout << "Enter author: ";
//     cin.getline(targetAuthor, 100);
//     cout << "\nBooks by author:\n";
//     for (int i = 0; i < SIZE; ++i) {
//         if (books[i].isByAuthor(targetAuthor)) {
//             books[i].print();
//         }
//     }
//
//     char targetPublisher[100];
//     cout << "\nEnter publisher: ";
//     cin.getline(targetPublisher, 100);
//     cout << "\nBooks by publisher:\n";
//     for (int i = 0; i < SIZE; ++i) {
//         if (books[i].isByPublisher(targetPublisher)) {
//             books[i].print();
//         }
//     }
//
//     int targetYear;
//     cout << "\nEnter year: ";
//     cin >> targetYear;
//     cout << "\nBooks published after " << targetYear << ":\n";
//     for (int i = 0; i < SIZE; ++i) {
//         if (books[i].isPublishedAfter(targetYear)) {
//             books[i].print();
//         }
//     }
//
//     return 0;
// }


#include <iostream>

using namespace std;

class Worker {
private:
    char fullName[100];
    char position[80];
    int hireYear;
    double salary;

    static void copyStr(char* dest, const char* src, int maxLen) {
        int i = 0;
        while (src[i] != '\0' && i < maxLen - 1) {
            dest[i] = src[i];
            i++;
        }
        dest[i] = '\0';
    }

    static bool equalStr(const char* a, const char* b) {
        int i = 0;
        while (a[i] != '\0' && b[i] != '\0') {
            if (a[i] != b[i]) {
                return false;
            }
            i++;
        }
        return a[i] == '\0' && b[i] == '\0';
    }

public:
    explicit Worker(const char* name = "", const char* pos = "", int year = 2026, double sal = 0.0)
        : hireYear(year), salary(sal) {
        copyStr(fullName, name, 100);
        copyStr(position, pos, 80);
    }

    void print() const {
        cout << "Full name: " << fullName
             << " | Position: " << position
             << " | Hire year: " << hireYear
             << " | Salary: " << salary << "\n";
    }

    const char* getFullName() const { return fullName; }
    const char* getPosition() const { return position; }
    int getHireYear() const { return hireYear; }
    double getSalary() const { return salary; }

    int getExperience(int currentYear = 2026) const {
        return currentYear - hireYear;
    }

    bool hasExperienceMoreThan(int minYears, int currentYear = 2026) const {
        return getExperience(currentYear) > minYears;
    }

    bool hasSalaryMoreThan(double minSalary) const {
        return salary > minSalary;
    }

    bool hasPosition(const char* targetPosition) const {
        return equalStr(position, targetPosition);
    }
};

int main() {
    const int SIZE = 4;
    Worker workers[SIZE] = {
        Worker("Ivan Petrenko", "Developer", 2018, 3500.0),
        Worker("Olena Koval", "Analyst", 2023, 2200.0),
        Worker("Maksym Bondar", "Developer", 2015, 4800.0),
        Worker("Anna Melnyk", "Manager", 2020, 3100.0)
    };

    const int currentYear = 2026;

    int minYears;
    cout << "Enter minimum experience (years): ";
    cin >> minYears;
    cout << "\nWorkers with experience more than " << minYears << " years:\n";
    for (int i = 0; i < SIZE; ++i) {
        if (workers[i].hasExperienceMoreThan(minYears, currentYear)) {
            workers[i].print();
        }
    }

    double minSalary;
    cout << "\nEnter minimum salary: ";
    cin >> minSalary;
    cout << "\nWorkers with salary more than " << minSalary << ":\n";
    for (int i = 0; i < SIZE; ++i) {
        if (workers[i].hasSalaryMoreThan(minSalary)) {
            workers[i].print();
        }
    }

    cin.ignore(10000, '\n');

    char targetPosition[80];
    cout << "\nEnter position: ";
    cin.getline(targetPosition, 80);
    cout << "\nWorkers with position '" << targetPosition << "':\n";
    for (int i = 0; i < SIZE; ++i) {
        if (workers[i].hasPosition(targetPosition)) {
            workers[i].print();
        }
    }

    return 0;
}