#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
    ll a,b,c,d,k;
    cin>>a>>b>>c>>d>>k;

    ll sum = 0 ;
    sum +=  max(a,c) - min(a,c);
    sum +=  max(b,d) - min(b,d);

    if(sum % 2 == 0 ){
        if(k % 2 == 0 ){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    else{
       if(k % 2 != 0 ){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
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