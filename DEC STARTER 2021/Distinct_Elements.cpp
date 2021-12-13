#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
using namespace std;

void solve(){
    ll n;
    cin>>n;
    ll a[n];
    for(ll i = 0 ; i<n ; i++){
        cin>>a[i];
    }
    unordered_map<ll,ll> mp;
    ll count = 1 ;
    for(ll i = 0 ;i<n ;i++){
        mp[a[i]]++;
    }

    for(auto x : mp){
        count = count * (x.second +1 );
        count = count % mod ;
    }
    cout<<(count-1+mod)%mod<<endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int Test = 1 ;
    cin>>Test;
    while(Test--){
        solve();
    }
    return 0;
}