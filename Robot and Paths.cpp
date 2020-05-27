#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define pb push_back
#define MOD 1000000007
#define ll long long 

 char grid[1002][1002];
    ll dp[1002][1002]={0};
int main(){
    int m,n,a,b;
    ll p,i,j;
    //long long int dp[1002][1002];
    cin>>m>>n>>p;
    
   for(i =0 ;i<p;i++){
       cin>>a>>b;
       dp[a][b]=-1;
   }
    
    dp[m][n+1]=1;
    for (i = m; i >= 1; i-- ){
        for ( j = n; j >= 1; j--){
            
            if( dp[i][j] != -1 ){
                
                if( dp[i+1][j] != -1 && dp[i][j+1] != -1 )
                    dp[i][j] = ( dp[i+1][j] % MOD + dp[i][j+1] % MOD )%MOD;
                else if( dp[i][j+1] != -1 )
                    dp[i][j] = dp[i][j+1]%MOD;
                else if( dp[i+1][j] != -1 )
                    dp[i][j] = dp[i+1][j]%MOD;         
            } 
            if( dp[i][j] < 0 )
                dp[i][j] = 0 ;
        }
    }
    cout<<dp[1][1];
    //print(dp[1][1]);
    return 0;    
}
