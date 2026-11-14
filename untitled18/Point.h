#include <iostream>
#include <cstdio>

class Point {
private:
    double x;
    double y;
    double z;

public:
    Point() : x(0.0), y(0.0), z(0.0) {}
    Point(double px, double py, double pz) : x(px), y(py), z(pz) {}

    void input() {
        std::cout << "Enter x, y, z: ";
        std::cin >> x >> y >> z;
    }

    void print() const {
        std::cout << "Point(" << x << ", " << y << ", " << z << ")\n";
    }

    double getX() const { return x; }
    void setX(double val) { x = val; }

    double getY() const { return y; }
    void setY(double val) { y = val; }

    double getZ() const { return z; }
    void setZ(double val) { z = val; }

    bool saveToFile(const char* filename) const {
        FILE* f = nullptr;
        fopen_s(&f, filename, "w");
        if (!f) {
            std::cout << "Failed to open file.\n";
            return false;
        }
        fprintf_s(f, "%lf %lf %lf\n", x, y, z);
        fclose(f);
        return true;
    }

    bool loadFromFile(const char* filename) {
        FILE* f = nullptr;
        fopen_s(&f, filename, "r");
        if (!f) {
            std::cout << "Failed to open file.\n";
            return false;
        }
        bool ok = (fscanf_s(f, "%lf %lf %lf", &x, &y, &z) == 3);
        fclose(f);
        return ok;
    }
};