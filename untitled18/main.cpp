#include <iostream>
#include "Student.h"
#include "Point.h"

int main() {
    Point p1;
    p1.input();
    p1.print();
    p1.saveToFile("point.txt");

    Point p2;
    if (p2.loadFromFile("point.txt")) {
        std::cout << "Loaded from file: ";
        p2.print();
    }

    std::cin.ignore(10000, '\n');

    Student st;
    st.input();
    std::cout << "\nStudent Info:\n";
    st.print();
    std::cout << "Group accessor: " << st.getGroupNumber() << "\n";

    return 0;
}