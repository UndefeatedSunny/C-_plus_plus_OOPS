//////////////////////////////////////////////////////////////////////// METHOD-1
#include <bits/stdc++.h>
#define ll long long int
#define ld long double
#define FAST_IO ios::sync_with_stdio(false); cin.tie(0);cout.tie(0);
#define endl "\n"
using namespace std;

ll add(ll n)
{
    return (n==1)?1:n+add(n-1);
 // return (n==0)?n:n+add(n-1);      // Both are Same i.e in the last we have 1 remaining becoz of Recursive add(n-1)
}
 
int main() 
{
	FAST_IO
	
	ll num;                          // Taking Input from User.
	cin>>num;
	
	ll output=add(num);             // Function call (Call by Value)
	
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

ll add(ll n)
{
    if(n==1)                        // Base Condition
    {
        return 1;
    //  return n;                   // Both are Same i.e in the last we have 1 remaining becoz of Recursive add(n-1)
    }
    else
    {
        return n+add(n-1);         // Recursion 
    }
}
 
int main() 
{
	FAST_IO
	
	ll num;                         // Taking Input from User.
	cin>>num;
	
	ll sum=add(num);               // Function call (Call by Value)
	
	cout<<sum<<endl;
	
	return 0;
}
