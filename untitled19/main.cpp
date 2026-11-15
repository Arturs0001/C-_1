#include <iostream>
#include "Group.h"

int main() {
    Group* groupPtr = nullptr;
    int choice = -1;

    while (choice != 0) {
        std::cout << "\n=== Group Management Menu ===\n";
        std::cout << "1. Create a new group\n";
        std::cout << "2. Add a student\n";
        std::cout << "3. Remove a student\n";
        std::cout << "4. Display students information\n";
        std::cout << "0. Exit\n";
        std::cout << "Select an option: ";
        std::cin >> choice;
        std::cin.ignore(10000, '\n');

        if (choice == 1) {
            char name[100];
            std::cout << "Enter group name: ";
            std::cin.getline(name, 100);

            delete groupPtr;
            groupPtr = new Group(name);
            std::cout << "Group created: " << groupPtr->getGroupName() << "\n";
        } else if (choice == 2) {
            if (!groupPtr) {
                std::cout << "Create a group first.\n";
                continue;
            }
            Student s;
            s.input();
            groupPtr->addStudent(s);
            std::cout << "Student added.\n";
        } else if (choice == 3) {
            if (!groupPtr) {
                std::cout << "Create a group first.\n";
                continue;
            }
            if (groupPtr->getCount() == 0) {
                std::cout << "Group is empty.\n";
                continue;
            }
            int index = 0;
            std::cout << "Enter student number to remove (1.." << groupPtr->getCount() << "): ";
            std::cin >> index;
            std::cin.ignore(10000, '\n');

            if (groupPtr->removeStudent(index - 1)) {
                std::cout << "Student removed.\n";
            } else {
                std::cout << "Invalid student number.\n";
            }
        } else if (choice == 4) {
            if (!groupPtr) {
                std::cout << "Create a group first.\n";
                continue;
            }
            groupPtr->printAll();
        } else if (choice != 0) {
            std::cout << "Invalid option.\n";
        }
    }

    delete groupPtr;
    return 0;
}