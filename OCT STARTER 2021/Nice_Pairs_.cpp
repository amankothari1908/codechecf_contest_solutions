#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
        ll n ;
        cin>>n;
        string s ;
        cin>>s;
        ll count = 0 ;
        for(ll i = 0 ; i<n ; i++){
            for(ll j = i+1 ; j<n ; j++){
                if((j-i) == abs(s[j]-s[i]) ){
                    count++;
                }
            }
        }
        cout<<count<<endl;

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