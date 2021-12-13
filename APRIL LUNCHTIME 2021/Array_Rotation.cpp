#include<bits/stdc++.h>
#define ll long long int
#define mod 100000007
using namespace std;

void solve(){
    ll n;
    cin>>n;
    ll A[n];
    ll sum=0;
    for(ll i=0;i<n;i++){
        cin>>A[i];
        sum+=A[i];
    } 
    ll q;
    cin>>q;
    ll res = sum;
    for(ll i=0;i<q;i++){
        ll a;
        cin>>a;
        res = (res+res)%mod ;
        cout<<(res)%mod<<endl;
    }

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int Test = 1 ;
    // cin>>Test;
    while(Test--){
        solve();
    }
    return 0;
}