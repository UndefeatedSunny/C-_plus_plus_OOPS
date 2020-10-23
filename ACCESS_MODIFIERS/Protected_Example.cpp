#include<bits/stdc++.h>
                                    /* PROTECTED CLASS */
using namespace std;

class Circle
{
    protected:
        double r;
};


class Area : public Circle
{
    public:
        double compute(double radius)              
        {
            r=radius;
            return 3.14*(pow(r,2));
        }
};

class Perimeter : public Circle
{
    public:
        double compute(double radius)              
        {
            r=radius;
            return (2*3.14*r);
        }
};


int main()
{
    Area obj1;
    Perimeter obj2;
    cout<<obj1.compute(11.33)<<endl;
    cout<<obj2.compute(11.33)<<endl;
    return 0;
}
