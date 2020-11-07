// Implementation of Operator Overloading
#include<iostream>

using namespace std;

class Point {
private:
    int x;
    int y;
public:
    
    Point();                            // Default Constructor
    Point(int x, int y);                // Parameterized Constructor
    Point(const Point &rhs);            // Copy Constructor

    ~Point();                           // Destructor
                                        // Overloaded Operators
    void operator=(const Point &);
    bool operator==(const Point &);
    bool operator!=(const Point &);
    bool operator<(const Point &);
    bool operator>(const Point &);
                                        // Arithmetic Operator
    Point operator+(const Point &);
    Point operator++();                 // Prefix
    Point operator++(int);              // Postfix
    
    void display();
    
};

Point::Point() {
    x = 0;
    y = 0;
}

Point::Point(int x1, int y1) {
    x = x1;
    y = y1;
}

Point::Point(const Point &rhs) {
    x = rhs.x;
    y = rhs.y;
}

Point::~Point() {
}

void Point::operator=(const Point &rhs) {
    x = rhs.x;
    y = rhs.y;
}

bool Point::operator==(const Point &rhs) {
    if((x==rhs.x) && (y==rhs.y)) {
        return true;
    } else {
        return false;
    }
}

bool Point::operator!=(const Point &rhs) {
    if((x==rhs.x) && (y==rhs.y)) {
        return false;
    } else {
        return true;
    }
}

void Point::display() {
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
}

Point Point::operator +(const Point &rhs)
{
    Point temp;
    temp.x=(x+rhs.x);
    temp.y=(y+rhs.y);
    return temp;
}

Point Point::operator++() {
    Point temp;
    temp.x = ++x;
    temp.y = ++y;
    return temp;
}

Point Point::operator++(int) {
    Point temp;
    temp.x = x++;
    temp.y = y++;
    return temp;
}

int main(void) {
    Point p1;
    Point p2(10,20);

    p1.display();
    p2.display();
                                            // We can also write like this -->>
                                            // p1.operator==(p2)
    if(p1 == p2) {
        cout << "Point are  EQUAL." << endl;
    }

   if(p1 != p2) {
        cout << "Points are UNEQUAL." << endl;
    }

    p1 = p2;

    if(p1 == p2) {
        cout << "Point are EQUAL." << endl;
    }

    if(p1 != p2) {
        cout << "Points are UNEQUAL." << endl;
    }

    Point p3;
    p3.display();
    p3 = ++p1;

    cout << "P1: " << endl;
    p1.display();

    cout << "P3: " << endl;
    p3.display();

    p3 = p1++;

    cout << "P1: " << endl;
    p1.display();

    cout << "P3: " << endl;
    p3.display();
    
    Point p4;
    p4 = p1+p3;
    cout << "P4: " << endl;
    p4.display();
    
    return 0;
}
