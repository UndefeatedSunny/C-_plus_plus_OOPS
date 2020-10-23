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
    
/*    obj.r=10;
    cout<<obj.r;    */
    
    cout<<obj.compute(11.33)<<endl;
    
    return 0;
}

/* we can access the private data members of a class indirectly using the public member functions of the class. */
