#include <iostream>
using namespace std;

class Calculate {
private:
    int length;
    int width;
    int height;

public:
    Calculate(int l, int w, int h) : length(l), width(w), height(h) {}

    int volume() {
        return length * width * height;
    }

    int area() {
        return 2 * (length * width + width * height + length * height);
    }
};

int main() {
    // Input variables
    int length, width, height;

    // Get user input
    std::cout << "Enter length: ";
    std::cin >> length;

    std::cout << "Enter width: ";
    std::cin >> width;

    std::cout << "Enter height: ";
    std::cin >> height;

    Calculate calculate(length, width, height);

    // Calculate and display the volume
    int resultV = calculate.volume();
    int resultS = calculate.area();
    std::cout << "Volume: " << resultV << std::endl;
    std::cout << "Area: " << resultS << std::endl;

    return 0;
}
