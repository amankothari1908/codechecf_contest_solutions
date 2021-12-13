#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
    ll n,a,b;
    cin>>n>>a>>b;
    ll res1 = 0 ,res2 = 0;
    char check[] = {'E','Q','U','I','N','O','X'};
    for(ll i=0;i<n;i++){
        string s ;
        cin>>s;
        ll flag = 0;
        for(ll i=0;i<7;i++){
            if(s[0] == check[i]){
                res1 += a;
                flag=1;
                break;
            }
        }
        if(flag==0){
            res2 += b ;
        }
    }
    if(res1 > res2){
        cout<<"SARTHAK"<<endl;
    }
    else if(res2 > res1){
        cout<<"ANURADHA"<<endl;
    }
    else{
        cout<<"DRAW"<<endl;
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