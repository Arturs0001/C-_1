// #include <iostream>
// #include <fstream>
//
// using namespace std;
//
// int main() {
//     ifstream fin("input.txt");
//     ofstream fout("output.txt");
//
//     if (!fin.is_open() || !fout.is_open()) {
//         cout << "Error opening file!\n";
//         return 1;
//     }
//
//     string word;
//     while (fin >> word) {
//         if (word.length() >= 7) {
//             fout << word << "\n";
//         }
//     }
//
//     fin.close();
//     fout.close();
//     cout << "Task 1 completed successfully.\n";
//
//     return 0;
// }

// TASK 2

// #include <iostream>
// #include <fstream>
//
// using namespace std;
//
// int main() {
//     ifstream fin("input.txt");
//     ofstream fout("output.txt");
//
//     if (!fin.is_open() || !fout.is_open()) {
//         cout << "Error opening file!\n";
//         return 1;
//     }
//
//     string line;
//     while (getline(fin, line)) {
//         fout << line << "\n";
//     }
//
//     fin.close();
//     fout.close();
//     cout << "Task 2 completed successfully.\n";
//
//     return 0;
// }

// TASK 3

// #include <iostream>
// #include <fstream>
//
// using namespace std;
//
// int main() {
//     ifstream fin("input.txt");
//     ofstream fout("output.txt");
//
//     if (!fin.is_open() || !fout.is_open()) {
//         cout << "Error opening file!\n";
//         return 1;
//     }
//
//     const int MAX_LINE_LENGTH = 256;
//     int count = 0;
//     char temp[MAX_LINE_LENGTH];
//     while (fin.getline(temp, MAX_LINE_LENGTH)) {
//         count++;
//     }
//     fin.clear();
//     fin.seekg(0, ios::beg);
//
//     char** lines = new char*[count];
//     for (int i = 0; i < count; ++i) {
//         lines[i] = new char[MAX_LINE_LENGTH];
//         fin.getline(lines[i], MAX_LINE_LENGTH);
//     }
//     fin.close();
//
//     for (int i = count - 1; i >= 0; --i) {
//         fout << lines[i] << "\n";
//         delete[] lines[i];
//     }
//
//     delete[] lines;
//     fout.close();
//     cout << "Task 3 completed successfully.\n";
//
//     return 0;
// }

TASK 4

#include <iostream>
#include <fstream>

using namespace std;

bool hasNoSpaces(const char* s) {
    for (int i = 0; s[i] != '\0'; ++i) {
        if (s[i] == ' ') {
            return false;
        }
    }
    return true;
}

int main() {
    ifstream fin("input.txt");
    ofstream fout("output.txt");

    if (!fin.is_open() || !fout.is_open()) {
        cout << "Error opening file!\n";
        return 1;
    }

    const int MAX_LINE_LENGTH = 256;
    int count = 0;
    char temp[MAX_LINE_LENGTH];
    while (fin.getline(temp, MAX_LINE_LENGTH)) {
        count++;
    }
    fin.clear();
    fin.seekg(0, ios::beg);

    char** lines = new char*[count];
    for (int i = 0; i < count; ++i) {
        lines[i] = new char[MAX_LINE_LENGTH];
        fin.getline(lines[i], MAX_LINE_LENGTH);
    }
    fin.close();

    int lastIndex = -1;
    for (int i = 0; i < count; ++i) {
        if (hasNoSpaces(lines[i])) {
            lastIndex = i;
        }
    }

    for (int i = 0; i < count; ++i) {
        fout << lines[i] << "\n";
        if (i == lastIndex) {
            fout << "------------\n";
        }
        delete[] lines[i];
    }

    if (lastIndex == -1) {
        fout << "------------\n";
    }

    delete[] lines;
    fout.close();
    cout << "Task 4 completed successfully.\n";

    return 0;
}