//////////////////////////////////////////////////////////////////////// METHOD-1
#include <bits/stdc++.h>
#define ll long long int
#define ld long double
#define FAST_IO ios::sync_with_stdio(false); cin.tie(0);cout.tie(0);
#define endl "\n"
using namespace std;

ll fact(ll n)
{
    return (n==1||n==0)?1:n*fact(n-1);
}
 
int main() 
{
	FAST_IO
	
	ll num;                         // Taking Input from User.
	cin>>num;
	
	ll output=fact(num);            // Function call (Call by Value)
	
	cout<<output<<endl;
	
	return 0;
}

/////////////////////////////////////////////////////////////////////////  METHOD-2

#include <bits/stdc++.h>
#define ll long long int
#define ld long double
#define FAST_IO ios::sync_with_stdio(false); cin.tie(0);cout.tie(0);
#define endl "\n"
using namespace std;

ll fact(ll n)
{
    if(n==0)                        // Base Condition
    {
        return 1;
    }
    else
    {
        return n*fact(n-1);         // Recursion 
    }
}
 
int main() 
{
	FAST_IO
	
	ll num;                         // Taking Input from User.
	cin>>num;
	
	ll output=fact(num);            // Function call (Call by Value)
	
	cout<<output<<endl;
	
	return 0;
}
