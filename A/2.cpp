// #include <iostream>
//
// using namespace std;
//
// int main() {
//     int num, maxNum;
//     cout << "Enter number 1: ";
//     cin >> maxNum;
//
//     for (int i = 2; i <= 7; ++i) {
//         cout << "Enter number " << i << ": ";
//         cin >> num;
//         if (num > maxNum) {
//             maxNum = num;
//         }
//     }
//
//     cout << "Max: " << maxNum << "\n";
//
//     return 0;
// }

// #include <iostream>
//
// using namespace std;
//
// int main() {
//     const double tankCapacity = 300.0;
//     double distAB, distBC, weight;
//
//     cout << "Enter distance A to B (km): ";
//     cin >> distAB;
//     cout << "Enter distance B to C (km): ";
//     cin >> distBC;
//     cout << "Enter cargo weight (kg): ";
//     cin >> weight;
//
//     if (weight > 2000.0 || distAB < 0 || distBC < 0 || weight < 0) {
//         cout << "Flight is impossible.\n";
//         return 0;
//     }
//
//     double fuelPerKm = 0.0;
//     if (weight <= 500.0) {
//         fuelPerKm = 1.0;
//     } else if (weight <= 1000.0) {
//         fuelPerKm = 4.0;
//     } else if (weight <= 1500.0) {
//         fuelPerKm = 7.0;
//     } else {
//         fuelPerKm = 9.0;
//     }
//
//     double needAB = distAB * fuelPerKm;
//     double needBC = distBC * fuelPerKm;
//
//     if (needAB > tankCapacity || needBC > tankCapacity) {
//         cout << "Flight is impossible.\n";
//         return 0;
//     }
//
//     double remainingInB = tankCapacity - needAB;
//     double refuelInB = needBC > remainingInB ? (needBC - remainingInB) : 0.0;
//
//     cout << "Minimum refuel at B: " << refuelInB << " L\n";
//
//     return 0;
// }

// #include <iostream>
//
// using namespace std;
//
// int main() {
//     double sales1, sales2, sales3;
//     cout << "Enter sales for manager 1: ";
//     cin >> sales1;
//     cout << "Enter sales for manager 2: ";
//     cin >> sales2;
//     cout << "Enter sales for manager 3: ";
//     cin >> sales3;
//
//     double rate1 = (sales1 <= 500.0) ? 0.03 : (sales1 <= 1000.0 ? 0.05 : 0.08);
//     double rate2 = (sales2 <= 500.0) ? 0.03 : (sales2 <= 1000.0 ? 0.05 : 0.08);
//     double rate3 = (sales3 <= 500.0) ? 0.03 : (sales3 <= 1000.0 ? 0.05 : 0.08);
//
//     double sal1 = 200.0 + sales1 * rate1;
//     double sal2 = 200.0 + sales2 * rate2;
//     double sal3 = 200.0 + sales3 * rate3;
//
//     int best = 1;
//     double maxSales = sales1;
//     if (sales2 > maxSales) {
//         maxSales = sales2;
//         best = 2;
//     }
//     if (sales3 > maxSales) {
//         maxSales = sales3;
//         best = 3;
//     }
//
//     if (best == 1) sal1 += 200.0;
//     else if (best == 2) sal2 += 200.0;
//     else sal3 += 200.0;
//
//     cout << "Best manager: #" << best << "\n";
//     cout << "Manager 1 salary: " << sal1 << "$\n";
//     cout << "Manager 2 salary: " << sal2 << "$\n";
//     cout << "Manager 3 salary: " << sal3 << "$\n";
//
//     return 0;
// }

#include <iostream>

using namespace std;

int main() {
    int choice;
    cout << "1. Lines needed for desired income and lates\n";
    cout << "2. Max lates for written lines and desired salary\n";
    cout << "3. Final salary for written lines and lates\n";
    cout << "Choice: ";
    cin >> choice;

    if (choice == 1) {
        double targetIncome;
        int lates;
        cout << "Desired income ($): ";
        cin >> targetIncome;
        cout << "Number of lates: ";
        cin >> lates;

        double penalty = (lates / 3) * 20.0;
        double neededFromCode = targetIncome + penalty;
        int lines = 0;
        if (neededFromCode > 0) {
            lines = static_cast<int>((neededFromCode / 50.0) * 100.0 + 0.999999);
        }
        cout << "Lines needed: " << lines << "\n";
    } else if (choice == 2) {
        int lines;
        double desiredSalary;
        cout << "Written lines: ";
        cin >> lines;
        cout << "Desired salary ($): ";
        cin >> desiredSalary;

        double earned = (lines / 100.0) * 50.0;
        if (earned < desiredSalary) {
            cout << "Cannot reach desired salary even with 0 lates.\n";
        } else {
            double maxPenalty = earned - desiredSalary;
            int penaltyCount = static_cast<int>(maxPenalty / 20.0);
            int maxLates = penaltyCount * 3 + 2;
            cout << "Max lates allowed: " << maxLates << "\n";
        }
    } else if (choice == 3) {
        int lines, lates;
        cout << "Written lines: ";
        cin >> lines;
        cout << "Number of lates: ";
        cin >> lates;

        double earned = (lines / 100.0) * 50.0;
        double penalty = (lates / 3) * 20.0;
        double salary = earned - penalty;

        if (salary > 0) {
            cout << "Paid: " << salary << "$\n";
        } else {
            cout << "Nothing will be paid (0$).\n";
        }
    } else {
        cout << "Invalid choice.\n";
    }

    return 0;
}