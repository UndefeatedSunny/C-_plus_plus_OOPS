#include <bits/stdc++.h>

using namespace std;


class Matrix
{
private:
    int row;
    int column;
    int ** ptr;                   // 2-D Pointer Way Of Representation

public:
    Matrix(int r,int c);         // Parameterized Operator

    void set_matrix();
    void display();

    Matrix operator +(const Matrix &mat);
    Matrix operator -(const Matrix &mat);
    Matrix operator *(const Matrix &mat);

    friend ostream& operator <<(ostream& os , const Matrix &mat);
};

ostream& operator <<(ostream& os , const Matrix &mat)
{
    for(int i=0;i<mat.row;i++)
    {
        for(int j=0;j<mat.column;j++)
        {
            os<<mat.ptr[i][j]<< " ";
        }
        os<<endl;
    }
    return os;
}

Matrix Matrix::operator *(const Matrix &mat)
{
    Matrix temp(row,column);
    if(column==mat.row)
    {
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<mat.column;j++)
            {
                temp.ptr[i][j]=0;
                for(int k=0;k<column;k++)
                {
                    temp.ptr[i][j] += (ptr[i][k]*mat.ptr[k][j]);
                }
            }
        }
    }
    else
    {
        cout<<"Invalid Multiplication Operation"<<endl;
        for(int i=0;i<mat.row;i++)
        {
            for(int j=0;j<mat.column;j++)
            {
                temp.ptr[i][j] = 0;
            }
        }
    }
    return(temp);
}

Matrix Matrix::operator +(const Matrix &mat)
{
    Matrix temp(row,column);
    if(row==mat.row && column==mat.column)
    {
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<column;j++)
            {
                temp.ptr[i][j] = ptr[i][j]+mat.ptr[i][j];
            }
        }
    }
    else
    {
        cout<<"Invalid Addition Operation"<<endl;
        for(int i=0;i<mat.row;i++)
        {
            for(int j=0;j<mat.column;j++)
            {
                temp.ptr[i][j] = 0;
            }
        }
    }
    return(temp);
}


Matrix Matrix::operator -(const Matrix &mat)
{
    Matrix temp(row,column);
    if(row==mat.row && column==mat.column)
    {
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<column;j++)
            {
                temp.ptr[i][j] = ptr[i][j]-mat.ptr[i][j];
            }
        }
    }
    else
    {
        cout<<"Invalid Subtraction Operation"<<endl;
        for(int i=0;i<mat.row;i++)
        {
            for(int j=0;j<mat.column;j++)
            {
                temp.ptr[i][j] = 0;
            }
        }
    }
    return(temp);
}


Matrix::Matrix(int r,int c) // Parameterized Constructor
{
    row=r;
    column=c;

    ptr=new int*[row];           // Allocation of Memory
    for(int i=0;i<row;i++)
    {
        ptr[i]=new int[column];
    }
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            ptr[i][j]=0;
        }
    }
}


void Matrix::set_matrix()     // Data Insertion
{
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            cin>>ptr[i][j];
        }
    }
}


void Matrix::display()          // Print Data
{
    for(int i=0;i<row;i++)
    {
        cout<<endl;
        for(int j=0;j<column;j++)
        {
            cout<<ptr[i][j]<<" ";
        }
    }
    cout<<endl;
}

int main()
{
    Matrix mat1(3,3),mat2(3,3),mat3(3,3),mat4(3,3),mat5(3,3);
    cout<<"Enter the Matrix 1"<<endl;
    mat1.set_matrix();
    mat1.display();
    cout<<"Enter the Matrix 2"<<endl;
    mat2.set_matrix();
    mat2.display();
    
    mat3=mat1+mat2;
    mat3.display();
    
    mat4=mat1-mat2;
    mat4.display();
    
    mat5=mat1*mat2;
    mat5.display();
    return 0;
}
/*

INPUT :-

1 2 3 
1 2 3 
1 2 3 

4 5 6 
4 5 6 
4 5 6



OUTPUT :-

Parameterized Constructor Called
Parameterized Constructor Called
Parameterized Constructor Called
Parameterized Constructor Called
Parameterized Constructor Called
Enter the Matrix 1
1 2 3
1 2 3
1 2 3

1 2 3
1 2 3
1 2 3
Enter the Matrix 2
1 2 3
1 2 3
1 2 3

1 2 3
1 2 3
1 2 3
Parameterized Constructor Called
Destructor Called
Destructor Called

2 4 6
2 4 6
2 4 6
Parameterized Constructor Called
Destructor Called
Destructor Called

0 0 0
0 0 0
0 0 0
Parameterized Constructor Called
Destructor Called
Destructor Called

6 12 18
6 12 18
6 12 18
Destructor Called
Destructor Called
Destructor Called
Destructor Called
Destructor Called

Process returned 0 (0x0)   execution time : 19.640 s
Press any key to continue.


*/
