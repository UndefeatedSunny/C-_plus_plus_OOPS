#include<iostream>
#include<cstdio>

using namespace std;

class Cuboid {
    int height;
    int length;
    int breadth;
public:
    static int count;
    void setData(int l, int b, int h);
    int  getVolume(void);
};

int Cuboid::count;

void Cuboid::setData(int l, int b, int h) {
    height = h;
    length = l;
    breadth = b;
    count += 1;
}
int Cuboid::getVolume(void) {
    return length*breadth*height;
}

int main(void) {
    
    Cuboid c1, c2, c3;

    cout << "Count = " << Cuboid::count << endl;

    c1.setData(10, 20, 30);
    cout << "Count = " << Cuboid::count << endl;

    c2.setData(1, 2, 3);
    cout << "Count = " << Cuboid::count << endl;

    c3.setData(10, 50, 20);
    cout << "Count = " << Cuboid::count << endl;


    int v1 = c1.getVolume();
    int v2 = c2.getVolume();
    int v3 = c3.getVolume();
    cout << "V1 = " << v1 << " V2 = " << v2 << " V3 = " << v3 << endl;
}
