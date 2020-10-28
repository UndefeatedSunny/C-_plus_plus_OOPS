#include<bits/stdc++.h>
using namespace std;

class Dummy
{
    private:
        int a, b;
    
    public:
    
        void set_data(int x , int y)            // Method 1
        {
            a=x;
            b=y;
        }
        
        void show_data()                        // Method 2
        {
            cout<<"a : "<<a<<endl<<"b : "<<b<<endl;
        }
        
        Dummy(const Dummy &d)                   // Shallow Constructor(Copy Constructor).
        {
            a = d.a;
            b = d.b;
        }
        Dummy()                                 // Default Constructor.
        {
            a=0;
            b=0;
        }
        Dummy(int x,int y)                      // Parameterized Constructor.
        {
            a = x;
            b = y;
        }
};

int main()
{
    Dummy d1;                           // Using Default
    d1.show_data();
    cout<<endl;
    
    Dummy d2;
    d2.set_data(3,5);                   // Using Method
    d2.show_data();
    cout<<endl;    
    
    Dummy d3(10,11);                    // Using Parameterized
    d3.show_data();
    cout<<endl;    
                                        // COPY TYPE :-
/*  Dummy d2;                           // Default / Implicit Copy Assignment Operator.
    d2=d1;      */
    
    Dummy d4=d2;                        // Using Copy Constructor.
    d4.show_data();

    return 0;
}

// When we make the object(same time its constructor also called along with that) and if same time initialze it from same class another object then copy constructor called.
