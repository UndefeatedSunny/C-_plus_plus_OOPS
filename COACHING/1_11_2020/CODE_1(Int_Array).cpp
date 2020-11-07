#include <bits/stdc++.h>

using namespace std;


class Int_Array
{
private:
    int size;
    int *ptr;
    
public:
    Int_Array();                                    // Default Constructor
    Int_Array(int *ptr1, int size1);                // Parameterized Constructor
    Int_Array(const Int_Array &obj);                // Copy Constructor       
    ~Int_Array();                                   // Destructor Called
    
    int Size() const;                               // Return Size of Array
    int Max() const;                                // Return the Maximum value
    int Min() const;                                // Return the Minimum value
    void Sort();                                    // Bubble Sort   
    int Search(int ) const;                         // Linear Search
    void Display() const;                           // Traverse and print the Whole Array
    
    int operator [](int pos);                     // Array Insertion
        
    bool operator ==(const Int_Array &);          // Equality Check
    bool operator !=(const Int_Array &);          // Inequality check
    
    void operator =(const Int_Array&);         //Assignment Operator
};

void Int_Array::operator =(const Int_Array &rhs)
{
    size=rhs.size;
    
    ptr = new int[size];
    
    for(int i=0;i<size;i++)
    {
        ptr[i] = rhs.ptr[i];
    }
}

int Int_Array::operator [](int pos)
{
    if(pos>=0 && pos<size)
    {
        return ptr[pos];
    }
    else
    {
        return -1;
    }
}


bool Int_Array::operator !=(const Int_Array &obj)
{   
    for(int i=0;i<size;i++)
    {
        if(*(ptr+i)!=*(obj.ptr+i))
        {
            return true;
        }
    }
    return false;
}


bool Int_Array::operator ==(const Int_Array &obj)
{   
    for(int i=0;i<size;i++)
    {
        if(*(ptr+i)!=*(obj.ptr+i))
        {
            return false;
        }
    }
    return true;
}

void Int_Array::Display() const
{
    for(int i=0;i<size;i++)
    {
        cout<<*(ptr+i)<<" ";
    }
}

int Int_Array::Search(int val) const
{
    int flag=0;
    for(int i=0;i<size;i++)
    {
        if(*(ptr+i)==val)
        {
            flag=1;
            return flag;
            break;
        }
    }
    return flag;
}

void Int_Array::Sort()
{
    int temp=0;
    Int_Array sort;
    
    for(int i=0;i<size;i++)
    {
        *(sort.ptr+i)=*(ptr+i);
    }
    
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size-i-1;j++)
        {
            if(*(sort.ptr+j)>*(sort.ptr+j+1))
            {
                temp=*(sort.ptr+j);                     
                *(sort.ptr+j)=*(sort.ptr+j+1);
                *(sort.ptr+j+1)=temp;
            }
        }
    }
    cout<<endl<<"Sorted Array:";
    for(int i=0;i<size;i++)
    {
        cout<<*(sort.ptr+i)<<" ";
    }
    cout<<endl;
}

int Int_Array::Min() const
{
    int min_val = *(ptr+0);
    for(int i=1;i<size;i++)
    {
        if(*(ptr+i)<min_val)
        {
            min_val=*(ptr+i);
        }
    }
    return min_val;
}


int Int_Array::Max() const
{
    int max_val = *(ptr+0);
    for(int i=1;i<size;i++)
    {
        if(*(ptr+i)>max_val)
        {
            max_val=*(ptr+i);
        }
    }
    return max_val;
}

int Int_Array::Size() const
{
    return size;
}

Int_Array::Int_Array()
{
    //cout<<endl<<"You're in Default Constructor"<<endl;
    size = 10;
    ptr = new int[size];
        
    for(int i=0;i<size;i++)
    {
        *(ptr+i)=0;                                 //   ptr[i]=0;
    }
}

Int_Array::Int_Array(int *ptr1, int size1)
{
    //cout<<endl<<"You're in Parameterized Constructor"<<endl;
    size=size1;
    ptr = new int[size1];
    
    for(int i=0;i<size1;i++)
    {
        *(ptr+i)=*(ptr1+i);
    }
    
}

Int_Array::Int_Array(const Int_Array &obj)
{
    //cout<<endl<<"You're in Default Constructor"<<endl;
    size=obj.size;
    ptr = new int[size];
    
    for(int i=0;i<size;i++)
    {
        *(ptr+i)=*(obj.ptr+i);                          //        ptr[i]= obj.ptr[i];
    }
}

Int_Array::~Int_Array()
{
    //cout<<endl<<"You're in Destructor"<<endl;
    delete []ptr;
}

int main()
{
    Int_Array array1;
    cout << "\nFirst array:";
    array1.Display();

    int my_array1[5] = {5,4,3,2,1};
    
    Int_Array array2(my_array1, 5);
    cout << "\nSecond array:";
    array2.Display();
    
    int my_array2[5] = {5,4,3,2,1};
    
    Int_Array array3(my_array2, 5);
    cout << "\nThird array:";
    array3.Display();   
    
    array2.Sort();
    
    if(array3==array2)
    {
        cout<<"Both Arrays are Equal"<<endl;
    }
    
    if(array1!=array2)
    {
        cout<<"Both Arrays are Not Equal"<<endl;
    }  
    
    cout<<"Array Size = "<<array3.Size()<<endl;
    cout<<"Array Max Value = "<<array3.Max()<<endl;
    cout<<"Array Min Value = "<<array3.Min()<<endl;
    
    cout<<"Search Value 100 is";
    if(array3.Search(100))
    {
        cout<<" Present"<<endl;
    }
    else
    {
        cout<<" Not Present"<<endl;
    }
    cout<<"Search Value 3 is";
    if(array3.Search(3))
    {
        cout<<" Present"<<endl;
    }
    else
    {
        cout<<" Not Present"<<endl;
    }
    Int_Array array4;
    array4=array3;
    cout << "(Using Assignment Operator) Fourth array:";
    array4.Display();    
    return 0;
}

/*
OUTPUT


First array:0 0 0 0 0 0 0 0 0 0 
Second array:5 4 3 2 1 
Third array:5 4 3 2 1 
Sorted Array:1 2 3 4 5 
Both Arrays are Equal
Both Arrays are Not Equal
Array Size = 5
Array Max Value = 5
Array Min Value = 1
Search Value 100 is Not Present
Search Value 3 is Present
(Using Assignment Operator) Fourth array:5 4 3 2 1 

*/
