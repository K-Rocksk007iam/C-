//Write a program to print the area of two rectangles having sides (4,5) and (5,8) respectively by
//creating a class named 'Rectangle' with a function named 'Area' which returns the area. Length and
//breadth are passed as parameters to its constructor.

#include <iostream>
using namespace std;

class Rectangle {
private:
    int length;
    int breadth;

public:
    Rectangle(int l, int b) {
        length=l;
        breadth=b;
    }

    int Area() {
        return length*breadth;
    }
};

int main() {
    Rectangle obj1(4,5);
    Rectangle obj2(5,8);
	cout<<"\nArea of Rectangle 1: \n"<<obj1.Area();
    cout<<"\nArea of Rectangle 2: \n"<<obj2.Area();

    return 0;
}
