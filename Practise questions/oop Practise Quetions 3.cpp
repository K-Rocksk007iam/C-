//Write a program to print the area and perimeter of a triangle having sides of 3, 4 and 5 units by
//creating a class named 'Triangle' with a function to print the area and perimeter.

#include <iostream>

using namespace std;

class Triangle {
private:
    float side1, side2, side3;

public:
    Triangle(float s1, float s2, float s3) {
        side1 = s1;
        side2 = s2;
        side3 = s3;
    }

    float calculatePerimeter() {
        return side1 + side2 + side3;
    }

    float calculateArea() {
        double s = calculatePerimeter() / 2;
        return s * (s - side1) * (s - side2) * (s - side3);
    }
};

int main() {
    float s1, s2, s3;

    cout << "Enter the lengths of the three sides of the triangle: ";
    cin >> s1 >> s2 >> s3;

    Triangle triangle(s1, s2, s3);

    cout << "Perimeter: " << triangle.calculatePerimeter() << endl;
    cout << "Area: " << triangle.calculateArea() << endl;

    return 0;
}

