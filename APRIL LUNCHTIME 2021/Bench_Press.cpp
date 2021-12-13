#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
   ll n,w,wr;
    cin>>n>>w>>wr;
   ll add = 0;
   ll A[n];
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    if(wr>=w){
        cout<<"YES"<<endl;
        return;
    }
    unordered_map<ll,ll> um;
    for(int i=0;i<n;i++){
        um[A[i]]++;
    }
    for(auto x : um){
        if(x.second > 1 && x.second %2==0 ){
            add = add + (x.first) * (x.second);
        }
        else if(x.second > 1 && x.second %2!=0 ){
            add = add + (x.first) * (x.second - 1 );
        }
    }

    if(add >= w-wr){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

   ll Test = 1 ;
    cin>>Test;
    while(Test--){
        solve();
    }
    return 0;
}