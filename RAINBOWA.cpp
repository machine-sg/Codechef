#include<bits/stdc++.h>
using namespace std;


int solve(long long arr[],long long n){
	map<long long, long long> mp1,mp2;
	long long idx1=0,idx2=0;
	for(int i=0;i<n;i++){
		if(arr[i]!=7){
			mp1[arr[i]]++;
		}
		else{
			idx1=i;
			break;
		}
	}
	for(int i=n-1;i>=0;i--){
		if(arr[i]!=7){
			mp2[arr[i]]++;
			
		}
		else{
			idx2=i;
			break;
		}
	}
	int ele=7;
	for(int i=idx1;i<=idx2;i++){
		if(arr[i]!=7){
			cout<<"no"<<endl;
			return 0;
		}
	}
	
/*	for(int i=1;i<7;i++){
		if(mp1[i]==0){
			cout<<"no"<<endl;
			return 0;
		}
	}*/
	for(int i=1;i<=6;i++){
		if(mp2[i]==0 || mp2[i]!=mp1[i] || mp1[i]==0){
			cout<<"no"<<endl;
			return 0;
		}
	}
	cout<<"yes"<<endl;
	return 0;
}
int main(){
	long long n,t;
	cin>>t;
	while(t--){
		cin>>n;
		long long arr[n];
		for(int i=0;i<n;i++)
			cin>>arr[i];
		solve(arr,n);		
	}
}
