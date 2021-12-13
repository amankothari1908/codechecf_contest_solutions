#include<bits/stdc++.h>
#define ll long long int
using namespace std;

vector<ll> factors(ll n){
    ll count = 0 ;
    vector<ll> v;
    for(ll i = 2 ; i<=sqrt(n) ; i++){
        if(n%i == 0 ){
            v.push_back(i);
            if(n%i != i ){
                v.push_back(n/i);
            }
        }
    }
    return v;
}

void solve(){
        ll n ,a ,b;
        cin>>n>>a>>b;
        ll res = 0 ;
        if( n % 2 == 0 && a < 0 ){
            cout<<a<<endl;
            return;
        }
        if( n%2 != 0 && b < 0 ){
            cout<<b<<endl;
            return;
        }
       
        vector<ll> v ;
        ll even = 0 , odd = 0 ;
        while(n >=2){
            if(n%2 == 0){
                even++;
                n = n/2;
            }
            else{
                v = factors(n);
                for(auto x : v){
                    cout<<x<<" ";
                    if(x%2== 0 ){
                        even++;
                    }
                    else{
                        odd++;
                    }
                }
                n = 0 ;
                if(v.size() == 0 ){
                    res += b;
                }
            }
        }
        // cout<<endl;
        res += (even*a) + (odd*b);
        cout<<res<<endl;

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