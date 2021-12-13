#include<bits/stdc++.h>
#define ll long long 
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll Test;
    cin>>Test;
    while(Test--){
        ll n;
        cin>>n;
        if(n==1){
            cout<<20<<endl;
        }
        else if(n==2){
            cout<<36<<endl;
        }
        else if(n==3){
            cout<<51<<endl;
        }
        else if(n==4){
            cout<<60<<endl;
        }
        else if(n>4){
            ll mod = n%4;
            ll div = n/4;
            ll res=0;
            if(mod==1){
                res+=44*div+32;
                cout<<res<<endl;
            }
            else if(mod==2){
                res=44*div+44;
                cout<<res<<endl;
            }
            else if(mod==3){
                res=44*div+55;
                cout<<res<<endl;
            }
            else if(mod==0){
                res=44*(div-1)+60;
                cout<<res<<endl;
            }
        }
    }
    return 0;
}