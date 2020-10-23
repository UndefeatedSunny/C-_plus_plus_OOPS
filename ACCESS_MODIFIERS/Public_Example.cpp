#include<bits/stdc++.h>
                                    /* PUBLIC CLASS */
using namespace std;

class Circle
{
    public:
        double r;
    
 /*     double compute()              // Method -> 1
        {
            return 3.14*(pow(r,2));
        }*/
        double compute();
};

double Circle::compute()                // Method -> 2 
{
    return 3.14*(pow(r,2));
} 

int main()
{
    Circle obj;
  
    cin>>obj.r;                         // Method -> 2 (From User)
    cout<<obj.r<<endl<<obj.compute()<<endl;
    obj.r=10;                           // Method -> 1 (Define Initially)
    cout<<obj.r<<endl<<obj.compute();
    
    return 0;
}
