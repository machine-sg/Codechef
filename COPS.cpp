#include<bits/stdc++.h>
using namespace std;

int main(){
	long long t,m,x,y;
	cin>>t;
	while(t--){
	    cin>>m>>x>>y;
	    long long range=x*y,ele,ans=0;
	    bool taken[101]={false};
	    for(int i=0;i<m;i++){
	        cin>>ele;
	        for(int j=ele;j>=ele-range && j>0 ;j--){
	            taken[j]=true;
	        }
	        for(int j=ele+1;j<=ele+range && j<=100;j++){
	            taken[j]=true;
	        }
	    }
	    
	    for(int i=1;i<=100;i++){
	        if(taken[i]==false){
	            ans++;
	        }
	    }
	    cout<<ans<<endl;
	}
	return 0;
}
