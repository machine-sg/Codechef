#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define MOD 1000000007
#define pi pair<int,int>
#define gcd(a,b) __gcd((a),(b))
#define endl "\n"
#define UB upper_bound
#define LB lower_bound
#define BS binary_search
#define PI 3.1415926535897932384626433832795



ll func(ll *dp, ll n)
{
  	if(n==1 || n==0)
    		return n;
  	if(dp[n] != 0)
    		return dp[n];
  	dp[n] = max(n, func(dp,n/2) + func(dp, n/3) + func(dp, n/4));   
  	return dp[n];   
}

int main() 
{   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
  	ll num;
  	while(cin >> num)
  	{
    		ll *dp=new ll [num+1];
    		cout << func(dp,num) << endl;
  	}
  	return 0;
}
