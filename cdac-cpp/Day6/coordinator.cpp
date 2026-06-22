#include <iostream>
#include <cmath>
using namespace std;

class Coordinate {
public:
    double x;
    double y;
    
    Coordinate(double x_coord = 0, double y_coord = 0) {
        x = x_coord;
        y = y_coord;
    }
    
    double distanceTo(Coordinate other) {
        double dx = other.x - x;
        double dy = other.y - y;
        return sqrt(dx * dx + dy * dy);
    }
    
    void display() {
        cout << "(" << x << ", " << y << ")";
    }
};

int main() {
 
    Coordinate point1, point2;
    
    cout << "Enter coordinates of first point (x1 y1): ";
    cin >> point1.x >> point1. y;
    
    cout << "Enter coordinates of second point (x2 y2): ";
    cin >> point2.x >> point2.y;
    
    double distance = point1.distanceTo(point2);
    
    cout << "\nPoint 1: ";
    point1.display();
    cout << "\nPoint 2: ";
    point2.display();
    cout << "\n\nDistance between the two points: " << distance << endl;
    
    return 0;
}