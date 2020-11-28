#include <bits/stdc++.h>
#define ll long long int
#define ld long double
#define FAST_IO ios::sync_with_stdio(false); cin.tie(0);cout.tie(0);
#define endl "\n"
using namespace std;

ll add(ll n)
{
    if(n==0)                          // Base Condition
    {
        return 0;
    }
    else
    {
        return n%10+add(n/10);         // Recursion 
    }
}
 
int main() 
{
	FAST_IO
	
	ll digit;                         // Taking Input from User.
	cin>>digit;
	
	ll sum=add(digit);               // Function call (Call by Value)
	
	cout<<sum<<endl;
	
	return 0;
}
