#include <iostream>
#include "Student.h"

class Group {
private:
    char groupName[100];
    Student* students;
    int count;
    int capacity;

    static void copyStr(char* dest, const char* src, int maxLen) {
        int i = 0;
        while (src[i] != '\0' && i < maxLen - 1) {
            dest[i] = src[i];
            i++;
        }
        dest[i] = '\0';
    }

    void resize(int newCapacity) {
        if (newCapacity <= count) {
            return;
        }
        Student* newArr = new Student[newCapacity];
        for (int i = 0; i < count; ++i) {
            newArr[i] = students[i];
        }
        delete[] students;
        students = newArr;
        capacity = newCapacity;
    }

public:
    Group() : students(nullptr), count(0), capacity(0) {
        groupName[0] = '\0';
    }

    Group(const char* name, int initialCapacity = 4) : students(nullptr), count(0), capacity(0) {
        copyStr(groupName, name, 100);
        if (initialCapacity < 1) {
            initialCapacity = 1;
        }
        capacity = initialCapacity;
        students = new Student[capacity];
    }

    Group(const Group& other) : students(nullptr), count(other.count), capacity(other.capacity) {
        copyStr(groupName, other.groupName, 100);
        if (capacity > 0) {
            students = new Student[capacity];
            for (int i = 0; i < count; ++i) {
                students[i] = other.students[i];
            }
        }
    }

    Group& operator=(const Group& other) {
        if (this == &other) {
            return *this;
        }
        delete[] students;
        copyStr(groupName, other.groupName, 100);
        count = other.count;
        capacity = other.capacity;
        if (capacity > 0) {
            students = new Student[capacity];
            for (int i = 0; i < count; ++i) {
                students[i] = other.students[i];
            }
        } else {
            students = nullptr;
        }
        return *this;
    }

    ~Group() {
        delete[] students;
    }

    const char* getGroupName() const {
        return groupName;
    }

    void setGroupName(const char* name) {
        copyStr(groupName, name, 100);
    }

    int getCount() const {
        return count;
    }

    int getCapacity() const {
        return capacity;
    }

    Student* getStudent(int index) {
        if (index < 0 || index >= count) {
            return nullptr;
        }
        return &students[index];
    }

    const Student* getStudent(int index) const {
        if (index < 0 || index >= count) {
            return nullptr;
        }
        return &students[index];
    }

    void addStudent(const Student& student) {
        if (capacity == 0) {
            resize(4);
        } else if (count >= capacity) {
            resize(capacity * 2);
        }
        students[count] = student;
        count++;
    }

    bool removeStudent(int index) {
        if (index < 0 || index >= count) {
            return false;
        }
        for (int i = index; i < count - 1; ++i) {
            students[i] = students[i + 1];
        }
        count--;
        return true;
    }

    void printAll() const {
        std::cout << "Group: " << groupName << " (Students: " << count << ")\n";
        if (count == 0) {
            std::cout << "No students in this group.\n";
            return;
        }
        for (int i = 0; i < count; ++i) {
            std::cout << "\n--- Student #" << (i + 1) << " ---\n";
            students[i].print();
        }
    }
};