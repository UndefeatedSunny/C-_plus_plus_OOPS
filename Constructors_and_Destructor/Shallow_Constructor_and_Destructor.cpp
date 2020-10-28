#include<bits/stdc++.h>
using namespace std;

class Dummy
{
    private:
        int a, b;
        int *ptr;
    
    public:
        void set_data(int x , int y, int z)            // Method 1
        {
            a=x;
            b=y;
            *ptr=z;
        }
        
        void show_data()                        // Method 2
        {
            cout<<"a : "<<a<<endl<<"b : "<<b<<endl<<"ptr : "<<*ptr<<endl;
        }    
        
        Dummy(const Dummy &d)                   //Deep Copy(Copy Constructor).
        {
            a=d.a;
            b=d.b;
            ptr=new int;
            *ptr=*(d.ptr);
        }
        Dummy()                                 // Default Constructor.
        {
            ptr=new int;
        }
        ~Dummy()                                // Destructor
        {
            delete ptr;
        }
};

int main()
{
    Dummy d1;
    d1.set_data(3,5,100);               // Using Method
    d1.show_data();
    cout<<endl;       
    
    Dummy d2=d1;                        // Using Copy Constructor.
    d2.show_data();

    return 0;
}
