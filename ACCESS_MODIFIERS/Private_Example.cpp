#include<bits/stdc++.h>
                                    /* PRIVATE CLASS */
using namespace std;

class Circle
{
    private:
        double r;
        
    public:
        double compute(double radius)              
        {
            r=radius;
            return 3.14*(pow(r,2));
        }
};

int main()
{
    Circle obj;

    cout<<obj.compute(11.33)<<endl;
    
    return 0;
}
