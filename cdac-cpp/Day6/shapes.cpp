#include <iostream>
using namespace std;

class Shape{
    public:
        int x;
        int y;
        int a;
        int b;
        int c;
        void area();
        void area(int radius);
        void area(int length, int breadth);
        void area(int base, int height, int decoy);
        void perimeter();
        void perimeter(int radius);
        void perimeter(int length, int breadth);
        void perimeter(int a, int b, int c);  
};
void Shape::area(int radius){
    cout << (2 * 3.14 * radius * radius) << endl;
}
void Shape::area(int length, int breadth){
    cout << (length * breadth) << endl;
}
void Shape::area(int base, int height, int decoy){
    cout << (0.5 * base * height) << endl;
}

void Shape::perimeter(int radius){
    cout << (2* 3.14 * radius) <<  endl;
}

void Shape::perimeter(int length, int breadth){
    cout << (2*length+2*breadth) << endl;
}

void Shape::perimeter(int a, int b, int c){
    cout << (a+b+c) << endl;
}
int main(){
    Shape circle;
    Shape rectangle;
    Shape triangle;

    int d1, d2, d3, d4, d5;
    cout << "Enter the radius: ";
    cin >> d1;
    circle.area(d1);
    circle.perimeter(d1);

    cout << "Enter length and breadth with spaces: ";
    cin >> d1;
    cin >> d2;
    rectangle.area(d1, d2);
    rectangle.perimeter(d1, d2);

    cout << "Enter the base and height A B C sides in this by spaces: ";
    cin >> d1;
    cin >> d2;
    cin >> d3;
    cin >> d4;
    cin >> d5;
    triangle.area(d1,d2, 0);
    triangle.perimeter(d3, d4, d5);


    return 0;
}