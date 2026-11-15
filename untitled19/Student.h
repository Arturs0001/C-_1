#include <iostream>

class Student {
private:
    char fullName[100];
    char birthDate[20];
    char phone[30];
    char city[50];
    char country[50];
    char institutionName[100];
    char institutionCity[50];
    char institutionCountry[50];
    char groupNumber[30];

    static void copyStr(char* dest, const char* src, int maxLen) {
        int i = 0;
        while (src[i] != '\0' && i < maxLen - 1) {
            dest[i] = src[i];
            i++;
        }
        dest[i] = '\0';
    }

public:
    Student() {
        fullName[0] = '\0';
        birthDate[0] = '\0';
        phone[0] = '\0';
        city[0] = '\0';
        country[0] = '\0';
        institutionName[0] = '\0';
        institutionCity[0] = '\0';
        institutionCountry[0] = '\0';
        groupNumber[0] = '\0';
    }

    void input() {
        std::cout << "Enter full name: ";
        std::cin.getline(fullName, 100);
        std::cout << "Enter birth date: ";
        std::cin.getline(birthDate, 20);
        std::cout << "Enter phone: ";
        std::cin.getline(phone, 30);
        std::cout << "Enter city: ";
        std::cin.getline(city, 50);
        std::cout << "Enter country: ";
        std::cin.getline(country, 50);
        std::cout << "Enter institution name: ";
        std::cin.getline(institutionName, 100);
        std::cout << "Enter institution city: ";
        std::cin.getline(institutionCity, 50);
        std::cout << "Enter institution country: ";
        std::cin.getline(institutionCountry, 50);
        std::cout << "Enter group number: ";
        std::cin.getline(groupNumber, 30);
    }

    void print() const {
        std::cout << "Full name: " << fullName << "\n";
        std::cout << "Birth date: " << birthDate << "\n";
        std::cout << "Phone: " << phone << "\n";
        std::cout << "City: " << city << "\n";
        std::cout << "Country: " << country << "\n";
        std::cout << "Institution: " << institutionName << "\n";
        std::cout << "Institution city: " << institutionCity << "\n";
        std::cout << "Institution country: " << institutionCountry << "\n";
        std::cout << "Group number: " << groupNumber << "\n";
    }

    const char* getFullName() const { return fullName; }
    void setFullName(const char* val) { copyStr(fullName, val, 100); }

    const char* getBirthDate() const { return birthDate; }
    void setBirthDate(const char* val) { copyStr(birthDate, val, 20); }

    const char* getPhone() const { return phone; }
    void setPhone(const char* val) { copyStr(phone, val, 30); }

    const char* getCity() const { return city; }
    void setCity(const char* val) { copyStr(city, val, 50); }

    const char* getCountry() const { return country; }
    void setCountry(const char* val) { copyStr(country, val, 50); }

    const char* getInstitutionName() const { return institutionName; }
    void setInstitutionName(const char* val) { copyStr(institutionName, val, 100); }

    const char* getInstitutionCity() const { return institutionCity; }
    void setInstitutionCity(const char* val) { copyStr(institutionCity, val, 50); }

    const char* getInstitutionCountry() const { return institutionCountry; }
    void setInstitutionCountry(const char* val) { copyStr(institutionCountry, val, 50); }

    const char* getGroupNumber() const { return groupNumber; }
    void setGroupNumber(const char* val) { copyStr(groupNumber, val, 30); }
};