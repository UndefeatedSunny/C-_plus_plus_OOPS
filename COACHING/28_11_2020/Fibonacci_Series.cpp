
#include <bits/stdc++.h>
#define ll long long int
#define ld long double
#define FAST_IO ios::sync_with_stdio(false); cin.tie(0);cout.tie(0);
#define endl "\n"
using namespace std;

ll fibonacci(ll n)
{
    if(n<=1)                                       // Base Condition
    {
        return n;
    }
    
    return fibonacci(n-1)+fibonacci(n-2);         // Recursion 
}
 
int main() 
{
	FAST_IO
	
	ll num;                        // Taking Input from User.
	cin>>num;
	
	ll sum=fibonacci(num);         // Function call (Call by Value)
	
	cout<<sum<<endl;
	
	return 0;
}
