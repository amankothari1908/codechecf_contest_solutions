#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
    ll n , k ;
    cin>>n>>k;
    ll A[n];
    for(ll i = 0 ; i < n ; i++){
        cin>>A[i];
    } 
    sort(A,A+n);
    
    ll c1 = 0 , c2 = 0 ;
    ll i = n-1 ;
    ll j = n-2 ;
    while(k--){
        c1 +=A[i];
        c2 +=A[j];
        i = i - 2;
        j = j - 2;
    }
    c2 += A[i];
    cout<<max(c1,c2)<<endl;
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