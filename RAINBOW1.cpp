#include<bits/stdc++.h>
using namespace std;

int solve(long long arr[],long long n){
    vector<pair<long long ,long long>> v;
	   long long idx=0;
	   while(idx<n){
	       long long ele=arr[idx];
	       int count=0;
	       while(idx<n && ele==arr[idx]){
	           idx++;
	           count++;
	       }
	       v.push_back(make_pair(ele,count));
	   }
	   
	   if(v.size()!=13){cout<<"no"<<endl;
	    return 0;
	       
	   }
	   
	   for(int i=0;i<7;i++){
	       if(v[i].first!=i+1){
	           cout<<"no"<<endl;
	           return 0;
	       }
	   }
	   
	   for(int i=7;i<13;i++){
	       if(v[i].second!=v[12-i].second || v[i].first!=13-i){
	           cout<<"no"<<endl;
	           return 0;
	       }
	   }
	   cout<<"yes"<<endl;
	   return 0;
}

int main(){
	long long t,n,k;
	cin>>t;
	
	while(t--){
	   cin>>n;
	   long long arr[n];
	   for(int i=0;i<n;i++)
	        cin>>arr[i];
	   solve(arr,n);
	}
	return 0;
}
    
