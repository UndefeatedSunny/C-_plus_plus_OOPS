#include <bits/stdc++.h>
#define ll long long int
#define ld long double
#define FAST_IO ios::sync_with_stdio(false); cin.tie(0);cout.tie(0);
#define endl "\n"
using namespace std;

ll gcd(ll n1,ll n2)
{
    if(n1==0)
    {
        return n2;
    }
    if(n2==0)
    {
        return n1;
    }
    if(n1==n2)                                      // Base Case
    {
        return n1;
    //  return n2;    
    }
    
    return (n1>n2)?gcd(n1-n2,n2):gcd(n1,n2-n1);     // Recursion
    
}
 
int main() 
{
	FAST_IO
	
	ll num1,num2;                                  // Taking Input from User.
	cin>>num1>>num2;
	
	ll output=gcd(num1,num2);                      // Function call (Call by Value)
	
	cout<<output<<endl;
	
	return 0;
}

