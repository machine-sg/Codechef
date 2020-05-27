#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    string str;
    for(int i=0;i<t;i++){
        cin>>str;
        int n=str.size();
        int flag=1;
        if(n%2==0){
            sort(str.begin(),str.begin()+n/2);
            sort(str.begin()+n/2, str.end());
            
            for(int i=0;i<n/2;i++){
                if (str[i]!=str[i+n/2]){
                    flag=0;
                    break;
                }
            }
        }
        else if(n%2==1){
            sort(str.begin(),str.begin()+n/2);
            sort(str.begin()+n/2+1, str.end());
            for(int i=0;i<n/2;i++){
                if(str[i]!=str[i+n/2+1]){
                    flag=0;
                    break;
                }
            }
        }
        if(flag)
        cout<<"YES"<<'\n';
        else cout<<"NO"<<'\n';
    }
}
