#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
    ll n , q ;
    cin>>n>>q;
    ll A[n];
    for(ll i = 0 ; i < n ; i++){
        cin>>A[i];
    }
    sort(A,A+n);
    ll res = 1 ;
    for(ll j = 0 ; j< q ;j++){
        ll Q ;
        cin>>Q;
        res = 1 ;
        for(ll i = 0 ; i< n ; i++){
            ll check = (Q - A[i]);
            if(check == 0 ){
                res = 0;
                break;
            }
            else if (check < 0 ){
                ll m = (n -i);
                if(m % 2 != 0){
                    res = res * -1 ;
                }
                break;
            }
        }
        if(res > 0 ){
            cout<<"POSITIVE"<<'\n';
        }
        else if (res< 0 ){
            cout<<"NEGATIVE"<<'\n';
        }
        else{
            cout<<0<<endl;
        }
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