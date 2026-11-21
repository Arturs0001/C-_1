// #include <iostream>
//
// using namespace std;
//
// int main() {
//     int totalSeconds;
//     cout << "Time in seconds: ";
//     cin >> totalSeconds;
//
//     int hours = totalSeconds / 3600;
//     int minutes = (totalSeconds % 3600) / 60;
//     int seconds = totalSeconds % 60;
//
//     cout << totalSeconds << " sec is " << hours << " h. " << minutes << " min. " << seconds << " sec.\n";
//
//     return 0;
// }

// #include <iostream>
//
// using namespace std;
//
// int main() {
//     double amount;
//     cout << "Sum: ";
//     cin >> amount;
//
//     int uah = static_cast<int>(amount);
//     int kop = static_cast<int>((amount - uah) * 100 + 0.5);
//
//     cout << uah << " uah. " << kop << " kop.\n";
//
//     return 0;
// }

// #include <iostream>
//
// using namespace std;
//
// int main() {
//     double distanceMeters;
//     double timeMinutes;
//
//     cout << "Enter the distance in meters: ";
//     cin >> distanceMeters;
//     cout << "Enter the time (min.sec): ";
//     cin >> timeMinutes;
//
//     int minutes = static_cast<int>(timeMinutes);
//     int seconds = static_cast<int>((timeMinutes - minutes) * 100 + 0.5);
//     int totalSeconds = minutes * 60 + seconds;
//
//     double distanceKm = distanceMeters / 1000.0;
//     double timeHours = totalSeconds / 3600.0;
//     double speedKmh = distanceKm / timeHours;
//
//     cout << "Distance: " << distanceMeters << " m\n";
//     cout << "Time: " << minutes << " min " << seconds << " sec = " << totalSeconds << " sec.\n";
//     cout << "Speed: " << speedKmh << " km/h\n";
//
//     return 0;
// }

// #include <iostream>
//
// using namespace std;
//
// int main() {
//     int totalDays;
//     cout << "Enter day count: ";
//     cin >> totalDays;
//
//     int weeks = totalDays / 7;
//     int days = totalDays % 7;
//
//     cout << weeks << " week(s) and " << days << " day(s)\n";
//
//     return 0;
// }

// #include <iostream>
//
// using namespace std;
//
// int main() {
//     double distance, hours;
//     cout << "Enter distance to airport: ";
//     cin >> distance;
//     cout << "Enter hours: ";
//     cin >> hours;
//
//     if (hours > 0) {
//         double speed = distance / hours;
//         cout << "Speed: " << speed << " km/h\n";
//     }
//
//     return 0;
// }

// #include <iostream>
//
// using namespace std;
//
// int main() {
//     double distance, consumption, price1, price2, price3;
//     cout << "Enter distance (km): ";
//     cin >> distance;
//     cout << "Enter consumption per 100 km (l): ";
//     cin >> consumption;
//     cout << "Enter price 1: ";
//     cin >> price1;
//     cout << "Enter price 2: ";
//     cin >> price2;
//     cout << "Enter price 3: ";
//     cin >> price3;
//
//     double liters = (distance / 100.0) * consumption;
//
//     cout << "Fuel | Price | Cost\n";
//     cout << "1    | " << price1 << " | " << liters * price1 << "\n";
//     cout << "2    | " << price2 << " | " << liters * price2 << "\n";
//     cout << "3    | " << price3 << " | " << liters * price3 << "\n";
//
//     return 0;
// }

// #include <iostream>
//
// using namespace std;
//
// int main() {
//     const int daySeconds = 86400;
//     int elapsed;
//     cout << "Seconds since start of day: ";
//     cin >> elapsed;
//
//     int curH = elapsed / 3600;
//     int curM = (elapsed % 3600) / 60;
//     int curS = elapsed % 60;
//
//     int rem = daySeconds - elapsed;
//     int remH = rem / 3600;
//     int remM = (rem % 3600) / 60;
//     int remS = rem % 60;
//
//     cout << "Current time: " << curH << " h " << curM << " min " << curS << " sec\n";
//     cout << "Until midnight: " << remH << " h " << remM << " min " << remS << " sec\n";
//
//     return 0;
// }

#include <iostream>

using namespace std;

int main() {
    const int workdaySeconds = 8 * 3600;
    int elapsed;
    cout << "Seconds since start of workday: ";
    cin >> elapsed;

    int remainingSeconds = workdaySeconds - elapsed;
    int hoursLeft = remainingSeconds > 0 ? remainingSeconds / 3600 : 0;

    cout << hoursLeft << " full hour(s) left\n";

    return 0;
}