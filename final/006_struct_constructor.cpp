#include <iostream>

struct Point {
    int x;
    int y;

    // Varsayılan Constructor (parametresiz)
    Point() : x(0), y(0) {
        std::cout << "Default Constructor called\n";
    }

    // Parametreli Constructor
    Point(int xVal, int yVal) : x(xVal), y(yVal) {
        std::cout << "Parameterized Constructor called\n";
    }

    // Kopya Constructor
    Point(const Point& other) : x(other.x), y(other.y) {
        std::cout << "Copy Constructor called\n";
    }
};

int main() {
    // Varsayılan constructor kullanımı
    Point p1;
    std::cout << "p1: (" << p1.x << ", " << p1.y << ")\n";

    // Parametreli constructor kullanımı
    Point p2(5, 10);
    std::cout << "p2: (" << p2.x << ", " << p2.y << ")\n";

    // Kopya constructor kullanımı
    Point p3 = p2;
    std::cout << "p3: (" << p3.x << ", " << p3.y << ")\n";

    return 0;
}
