#include <iostream>

using namespace std;

// TASK 1
void printBits(unsigned int n) {
    for (int i = sizeof(n) * 8 - 1; i >= 0; --i) {
        int bit = (n >> i) & 1;
        cout << bit;
        if (i % 4 == 0) cout << " ";
    }
    cout << "\n";
}

// TASK 2
bool isEven(int n) {
    return (n & 1) == 0;
}

// TASK 3
int clearBit(int n, int index) {
    return n & ~(1 << index);
}

// TASK 4
int setBit(int n, int index) {
    return n | (1 << index);
}

// TASK5
int toggleBit(int n, int index) {
    return n ^ (1 << index);
}

// TASK 6
void countBits(unsigned int n) {
    int ones = 0;
    unsigned int temp = n;
    while (temp > 0) {
        if (temp & 1) ones++;
        temp >>= 1;
    }
    int totalBits = sizeof(n) * 8;
    int zeros = totalBits - ones;
    cout << "Ones: " << ones << ", Zeros (for 32-bit): " << zeros << "\n";
}

// TASK 7
bool isPowerOfTwo(int n) {
    return n > 0 && (n & (n - 1)) == 0;
}

// TASK 8
int getLowestSetBitIndex(int n) {
    if (n == 0) return -1;
    int index = 0;
    while ((n & 1) == 0) {
        n >>= 1;
        index++;
    }
    return index;
}

// TASK 9
int clearLowestSetBit(int n) {
    return n & (n - 1);
}

int main() {
    unsigned int num = 18;

    cout << "--- Bitwise Operations Demo ---\n";
    cout << "Original number: " << num << "\n";
    cout << "Binary representation: ";
    printBits(num);
    cout << "\n";

    cout << "Is even? " << (isEven(num) ? "Yes" : "No") << "\n";
    cout << "Is power of two? " << (isPowerOfTwo(num) ? "Yes" : "No") << "\n\n";

    countBits(num);
    cout << "\n";

    cout << "Set bit 0 to 1 -> Result: " << setBit(num, 0) << " | Bits: ";
    printBits(setBit(num, 0));

    cout << "Clear bit 1 to 0 -> Result: " << clearBit(num, 1) << " | Bits: ";
    printBits(clearBit(num, 1));

    cout << "Toggle bit 4 -> Result: " << toggleBit(num, 4) << " | Bits: ";
    printBits(toggleBit(num, 4));
    cout << "\n";

    cout << "Index of lowest set bit: " << getLowestSetBitIndex(num) << "\n";
    cout << "Clear lowest set bit -> Result: " << clearLowestSetBit(num) << " | Bits: ";
    printBits(clearLowestSetBit(num));

    return 0;
}