#include <iostream>
#include <string>
using namespace std;


class Cars                              
{
    private:
    // Member Variables or Data Members
        string company_name;                            // char company_name[50];
        string model_name;
        string fuel_type;
        float mileage;
        double price;
        
    public:
                                                                                            // Member Functions
                                            // Inline Function
                                                                                            /*
                                                                                                void set_data(string cname, string mname, string ftype, float m, float p)
                                                                                                {
                                                                                                    company_name = cname;
                                                                                                    model_name = mname;
                                                                                                    fuel_type = ftype;
                                                                                                    mileage = m;
                                                                                                    price =p;
                                                                                                }
                                                                                                void display_data()
                                                                                                {
                                                                                                    cout<<"Car Properties"<<endl<<endl;
                                                                                                    cout<<"Company Name : "<<company_name<<endl;
                                                                                                    cout<<"Model Name : "<<model_name<<endl;
                                                                                                    cout<<"Fuel Name : "<<fuel_type<<endl;
                                                                                                    cout<<"Mileage : "<<mileage<<endl;
                                                                                                    cout<<"Price : "<<price<<endl;
                                                                                                }
                                                                                            */
    
    Cars()                                                                          // Default Constructor.
    {
        cout<<"Default Constructor Called"<<endl;
        company_name = "D Toyota";
        model_name = "Fortuner";
        fuel_type = "Diesel";
        mileage = 10;
        price =350000; 
    }
    
    Cars(string cname, string mname, string ftype, float m, float p)                // Parameterized Constructer.
    {
        cout<<"Parameterized Constructer Called"<<endl;
        company_name = cname;
        model_name = mname;
        fuel_type = ftype;
        mileage = m;
        price =p;      
    }
    
    
    Cars(Cars &obj)                                                                 // Copy Constructor.
    {
        cout<<"Copy Constructer Called"<<endl;
        company_name = obj.company_name;
        model_name = obj.model_name;
        fuel_type = obj.fuel_type;
        mileage = obj.mileage;
        price = obj.price; 
    }
    ~Cars()                                                                         // Destructor.
    {
        cout<<"Destructor Called"<<endl;                                            // It will run 3 times as we made total 3 Objects total.
    }
    void set_data(string cname, string mname, string ftype, float m, float p);
    void display_data();
    
};

void Cars::set_data(string cname, string mname, string ftype, float m, float p)    // Using Scope Resolution Operator.
{
    company_name = cname;
    model_name = mname;
    fuel_type = ftype;
    mileage = m;
    price =p;
}
void Cars::display_data()
{
    cout<<endl<<"Car Properties"<<endl<<endl;
    cout<<"Company Name : "<<company_name<<endl;
    cout<<"Model Name : "<<model_name<<endl;
    cout<<"Fuel Name : "<<fuel_type<<endl;
    cout<<"Mileage : "<<mileage<<endl;
    cout<<"Price : "<<price<<endl<<endl;
}

int main() 
{                                                                   // Objects are nothing but variables of type class
    Cars car1;   
    car1.set_data("Toyota","Function Fortuner","Petrol",10,5500000);
    
    car1.display_data();
    
/*  string company,model,fuel;
    float mileage;
    double price;
    
    getline(cin,company);
    getline(cin,model);
    getline(cin,fuel);
    cin>>mileage>>price;
    
    car1.set_data(company,model,fuel,mileage,price);
*/   
    Cars car2("Toyota","P Fortuner","Petrol",10,4500000);
    car2.display_data();
    
    Cars car3=car1;  
    car3.display_data();

    return 0;
}





/*
                    INPUT (With Respect To Class Explanation)
Toyota
Fortuner
Petrol
10
3500000
*/

/*
                    OUTPUT

Car Properties

Company Name : Toyota
Model Name : Fortuner
Fuel Name : Petrol
Mileage : 10
Price : 3.5e+06

*/
